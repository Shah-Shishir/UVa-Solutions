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

int gcd (int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd (b,a % b);
}

int main (void)
{
    int n,i,j,G;

    while (cin >> n && n)
    {
        G = 0;

        for (i=1; i<n; i++)
            for (j=i+1; j<=n; j++)
                G += gcd (i,j);

        cout << G << endl;
    }

    return 0;
}
