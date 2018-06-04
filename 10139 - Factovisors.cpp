/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int

const int MAX = 50000;
bool prime[MAX];
vector <int> v;

void sieve ()
{
    int i,j;

    prime[0] = prime[1] = true;
    v.pb(2);

    for (i=4; i<MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<=MAX; j+=2*i)
                prime[j] = true;

    for (i=3; i<=MAX; i+=2)
        if (!prime[i])
            v.pb(i);
}

bool isDone (int n,int p,int c)
{
    int k = 0;

    while (n)
    {
        n /= p;
        k += n;
    }

    if (k >= c)
        return true;
    else
        return false;
}

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/
    sieve ();

    int n,m,t,i,k;

    while (sf ("%d %d",&n,&m) != EOF)
    {
        if (n >= m && m > 0)
            pf ("%d divides %d!\n",m,n);
        else if (m == 0)
            pf ("%d does not divide %d!\n",m,n);
        else
        {
            vector <int> P,F;

            t = m;

            for (i=0; v[i]*v[i]<=t; i++)
            {
                if (t % v[i] == 0)
                {
                    k = 0;
                    P.pb(v[i]);

                    while (t % v[i] == 0)
                    {
                        k++;
                        t /= v[i];
                    }

                    F.pb(k);
                }
            }

            if (t > 1)
            {
                P.pb(t);
                F.pb(1);
            }

            bool val = true;
            k = P.size();

            for (i=0; i<k; i++)
            {
                if (!isDone(n,P[i],F[i]))
                {
                    val = false;
                    break;
                }
            }

            if (val)
                pf ("%d divides %d!\n",m,n);
            else
                pf ("%d does not divide %d!\n",m,n);
        }
    }

    return 0;
}
