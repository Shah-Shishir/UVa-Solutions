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
#define pll pair <llu,llu>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

pll isPal (llu n,llu k)
{
    llu temp=n,rev=0,rem,sum;
    pll p;

    while (n)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    sum = temp+rev;

    rev = 0, temp = sum;

    while (sum)
    {
        rem = sum % 10;
        rev = rev * 10 + rem;
        sum /= 10;
    }

    if (rev == temp)
    {
        p.first = ++k;
        p.second = rev;
        return p;
    }
    else
        isPal (temp,++k);
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    lld tc,n;

    sf ("%llu",&tc);

    while (tc--)
    {
        sf ("%llu",&n);

        pll p = isPal(n,0);

        pf ("%llu %llu\n",p.first,p.second);
    }

    return 0;
}
