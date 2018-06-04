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
    int t,n,len,i,num;
    string a,b;

    cin >> t;

    while (t--)
    {
        cin >> n;

        bool arr[101];
        int count = 0;

        for (i=0; i<n; i++)
        {
            cin >> a;

            len = a.size();

            if (a[0] == 'L')
                arr[i] = false;
            else if (a[0] == 'R')
                arr[i] = true;
            else
            {
                cin >> b >> num;
                arr[i] = arr[num-1];
            }

            if (arr[i])
                count++;
            else
                count--;
        }

        cout << count << endl;
    }

    return 0;
}
