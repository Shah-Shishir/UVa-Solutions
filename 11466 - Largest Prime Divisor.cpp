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

const lld MAX = 10000001;
vector <lld> v;
bool prime[MAX];

void sieve ()
{
    lld i,j;

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

    for (i=3163; i<=MAX; i+=2)
        if (!prime[i])
            v.pb(i);

    return;
}

int main (void)
{
    sieve ();

    lld n,i,maxi,k;

    while (sf ("%lld",&n) != EOF && n)
    {
        maxi = k = 0;

        if (n < 0)
            n *= -1;

        for (i=0; v[i]*v[i]<=n; i++)
        {
            if (n % v[i] == 0)
            {
                maxi = max(maxi,i);
                k++;

                while (n % v[i] == 0)
                    n /= v[i];
            }
        }

        if (n > 1)
        {
            k++;
            maxi = max(maxi,n);
        }

        if (k < 2)
            pf ("-1\n");
        else
            pf ("%lld\n",maxi);
    }

    return 0;
}
