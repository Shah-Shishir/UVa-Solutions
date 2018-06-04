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

const int MAX = 1001;
vector <int> v;
bool prime[MAX];

void sieve ()
{
    int i,j;

    v.pb(2);

    prime[0] = prime[1] = true;

    for (i=4; i<=MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=1000; i+=2)
    {
        if (!prime[i])
        {
            v.pb(i);

            for (j=i*i; j<=MAX; j+=2*i)
                prime[j] = true;
        }
    }

    for (i=37; i<=MAX; i+=2)
        if (!prime[i])
            v.pb(i);
}

int main (void)
{
    sieve ();

    int n,t,i,k;

    while (sf ("%d",&n) != EOF && n)
    {
        t = n, k = 0;

        for (i=0; v[i]*v[i]<=n; i++)
        {
            if (!(n % v[i]))
            {
                k++;

                while (!(n % v[i]))
                    n /= v[i];
            }
        }

        if (n > 1)
            k++;

        pf ("%d : %d\n",t,k);
    }

    return 0;
}
