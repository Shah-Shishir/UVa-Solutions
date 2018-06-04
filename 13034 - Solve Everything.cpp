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
    int t,pos,arr[13],i;
    bool k;

    cin >> t;

    for (pos=1; pos<=t; pos++)
    {
        k = true;

        for (i=0; i<13; i++)
        {
            cin >> arr[i];

            if (!arr[i])
                k = false;
        }

        pf ("Set #%d: ",pos);

        if (k)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
