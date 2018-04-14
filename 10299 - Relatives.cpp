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
#define vi vector <int>
#define pii pair <int,int>
#define mii map <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
int CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

int totient (int n)
{
    int tot,i;

    if (n == 1)
        return 0;

    tot = n;

    if (!(n & 1))
    {
        tot = tot/2;

        while (!(n & 1))
            n /= 2;
    }

    for (i=3; i*i<=n; i+=2)
    {
        if (n % i == 0)
        {
            tot -= tot/i;

            while (n % i == 0)
                n /= i;
        }
    }

    if (n > 1)
        tot -= tot/n;

    return tot;
}

int main (void)
{
    int num;

    while (sf ("%d",&num) && num)
        pf ("%d\n",totient(num));

    return 0;
}
