/*** If (2^p)-1 is PRIME, then ((2^p)-1)*(2^(p-1)) is a PERFECT NUMBER.

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
#define ssf sscanf
#define spf sprintf
#define fsf fscanf
#define fpf fprintf
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
const int MAX = 1000005;

bool isPrime (U n)
{
    if (n == 2)
        return true;

    if (n < 2 || !(n & 1))
        return false;

    for (U i=3; i*i<=n; i++)
        if (n % i == 0)
            return false;

    return true;
}

llu power (U p)
{
    U b = 1;

    while (p--)
        b *= 2;

    return b;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    fast;
    */

    U n;
    llu val;

    while (sf ("%u",&n) && n)
    {
        val = power(n)-1;

        if (isPrime(val))
        {
            val = power(n-1)*(power(n)-1);
            pf ("Perfect: %llu!\n",val);
        }
        else if (isPrime(n))
            pf ("Given number is prime. But, NO perfect number is available.\n");
        else
            pf ("Given number is NOT prime! NO perfect number is available.\n");
    }

    return 0;
}
