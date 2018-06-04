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

const double pi = acos(-1.0);

int main (void)
{
    double r,n;

    while (cin >> r >> n)
        cout << fixed << setprecision(3) << 0.5*n*r*r*sin((2*pi)/n) << endl;

    /// Formula : http://keisan.casio.com/exec/system/1223432608

    return 0;
}
