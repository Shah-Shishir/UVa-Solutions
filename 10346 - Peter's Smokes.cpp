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

int main (void)
{
    int n,k,x,c;

    while (cin >> n >> k)
    {
        x = n, c = 0;

        if (k == 1 || n < k)
            cout << n << endl;
        else
        {
            while (n >= k)
            {
                n -= k-1;
                c++;
            }

            cout << x+c << endl;
        }
    }

    return 0;
}
