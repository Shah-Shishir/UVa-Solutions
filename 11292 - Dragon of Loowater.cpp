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

int main ()
{
    int m,n,i,j,k,sum,d[20000],h[20000];

    while (cin >> m >> n && m && n)
    {
        for (i=0; i<m; i++)
            cin >> d[i];

        sort (d,d+i);

        for (j=0; j<n; j++)
            cin >> h[j];

        sort (h,h+j);

        if (m > n)
           cout << "Loowater is doomed!" << endl;
        else
        {
            i = j = sum = k = 0;

            while (1)
            {
                if (i == m || j == n)
                    break;

                if (d[i] > h[j])
                {
                    j++;
                }
                else
                {
                    sum += h[j];
                    k++;
                    i++;
                    j++;
                }
            }

            if (k < m)
                cout << "Loowater is doomed!" << endl;
            else
                cout << sum << endl;
        }
    }

    return 0;
}
