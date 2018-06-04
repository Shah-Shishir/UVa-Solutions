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
const int MAX = 65000;
bool prime[MAX];

void sieve ()
{
    U i,j;

    prime[0] = prime[1] = true;

    for (i=4; i<MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAX; j+=2*i)
                prime[j] = true;
}

U bigmod (U n,U p,U m)
{
    llu p1,p2;

    if (p == 0)
        return 1;

    if (p & 1)
    {
        p1 = n % m;
        p2 = bigmod (n,p-1,m) % m;
        return (p1*p2) % m;
    }
    else
    {
        p1 = bigmod (n,p/2,m) % m;
        return (p1*p1) % m;
    }
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

	sieve ();

    U n;

    while (sf ("%u",&n) && n)
    {
        bool k = true;

        if (!prime[n])
        	k = false;
        else
        {
            U i;

            for (i=2; i<=n-1; i++)
            {
                if (bigmod(i,n,n) != i)
                {
                    k = false;
                    break;
                }
            }
        }

        if (!k)
            pf ("%u is normal.\n",n);
        else
            pf ("The number %u is a Carmichael number.\n",n);
    }

    return 0;
}
