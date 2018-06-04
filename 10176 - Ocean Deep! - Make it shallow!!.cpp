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

/***

        Compute (A[0]A[1]A[2]....A[n]) (base 2) modulo (R)10, denoted by (s)10 = (A[0]A[2]A[3]...A[n])2 mod (R)10

        Simulate the modulo step by step using the following algorithm:

        s = 0;
        for (i=n; i>=0; i--) {
          s *= b; //here b=2
          s += A[i];
          s %= R;
        }

***/

int main (void)
{
    int len,n=131071,mod=0;
    char ch;

    while (cin >> ch)
    {
        if (ch == '#')
        {
            if (!mod)
                pf ("YES\n");
            else
                pf ("NO\n");

            mod = 0;
        }
        else if (ch != '\n')
            mod = (2 * mod + (ch - '0')) % n;
    }

    return 0;
}
