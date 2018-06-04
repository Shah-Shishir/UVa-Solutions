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

int main (void)
{
    llu t,n,k,i,sum;

    sf ("%llu",&t);

    while (t--)
    {
        sf ("%llu %llu",&n,&k);

        if (k == 1)
            pf ("0\n");
        else
        {
            sum = 0;

            for (i=1; i*i<=n; i++)
            {
                if (n % i == 0)
                {
                    if (i % k != 0)
                        sum += i;
                    if (i != (n/i) && (n/i) % k != 0)
                        sum += (n/i);
                }
            }

            pf ("%llu\n",sum);
        }
    }

    return 0;
}
