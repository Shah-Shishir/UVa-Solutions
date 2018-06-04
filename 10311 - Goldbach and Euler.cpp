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
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pii pair <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 100000005;
bool prime[MAX];

void sieve ()
{
    int i,j;

    prime[0] = prime[1] = true;

    for (i=4; i<MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAX; j+=2*i)
                prime[j] = true;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    fast;
    */
    sieve ();

    int n,h,i;

    while (sf ("%d",&n) != EOF)
    {
        bool k = false;

        if (n & 1)
        {
            if (!prime[n-2] && n > 1)
                pf ("%d is the sum of 2 and %d.\n",n,n-2);
            else
                pf ("%d is not the sum of two primes!\n",n);
        }
        else
        {
            h = n/2;

            if (!(h & 1))
                h++;

            for (i=h; i<n; i+=2)
            {
                if (!prime[i] && !prime[n-i] && i != n-i)
                {
                    pf ("%d is the sum of %d and %d.\n",n,n-i,i);
                    k = true;
                    break;
                }
            }

            if (!k)
               pf ("%d is not the sum of two primes!\n",n);
        }
    }

    return 0;
}