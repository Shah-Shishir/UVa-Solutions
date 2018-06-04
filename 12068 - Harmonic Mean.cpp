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

lld GCD (lld a,lld b)
{
    if (b == 0)
        return a;
    else
        return GCD (b,a%b);
}

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/

    lld t,pos,n,arr[10],i,gcd,lcm,sum;

    cin >> t;

    for (pos=1; pos<=t; pos++)
    {
        cin >> n;

        for (i=0; i<n; i++)
            cin >> arr[i];

        lcm = arr[0];

        for (i=1; i<n; i++)
            lcm = lcm*arr[i]/GCD(lcm,arr[i]);

        sum = 0;

        for (i=0; i<n; i++)
            sum += lcm/arr[i];

        lcm *= n;

        gcd = GCD(lcm,sum);

        lcm = lcm/gcd;
        sum = sum/gcd;

        pf ("Case %lld: %lld/%lld\n",pos,lcm,sum);
    }

    return 0;
}