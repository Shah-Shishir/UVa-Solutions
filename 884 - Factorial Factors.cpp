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
#define u unsigned int

const int MAX = 1000005;
bool prime[MAX];
vector <int> v;

void sieve ()
{
    int i,j;

    v.pb(2);

    prime[0] = prime[1] = true;

    for (i=4; i<=MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
    {
        if (!prime[i])
        {
            v.pb(i);

            for (j=i*i; j<=MAX; j+=2*i)
                prime[j] = true;
        }
    }

    for (i=1001; i<=MAX; i+=2)
        if (!prime[i])
            v.pb(i);
}

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/
    sieve ();

    int n,N,i,j,k=0;

    vector <int> P;

    P.pb(0);
    P.pb(0);

    for (i=2; i<=1000000; i++)
    {
        N = i;

        for (j=0; v[j]*v[j]<=N; j++)
        {
            if (N % v[j] == 0)
            {
                while (N % v[j] == 0)
                {
                    k++;
                    N /= v[j];
                }
            }
        }

        if (N > 1)
            k++;

        P.pb(k);
    }

    while (cin >> n)
        cout << P[n] << endl;

    return 0;
}
