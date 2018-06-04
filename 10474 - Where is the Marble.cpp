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
    int n,i,j,pos,q,x,high,low,mid,kase=1;
    bool b;

    while (sf ("%d %d",&n,&q) != EOF && n && q)
    {
        int arr[n];

        for (i=0; i<n; i++)
            sf ("%d",&arr[i]);

        sort (arr,arr+i);

        for (j=1; j<=q; j++)
        {
            sf ("%d",&x);

            if (j == 1)
                pf ("CASE# %d:\n",kase++);

            b = false, high = n-1, low = 0;

            while (low <= high)
            {
                mid = (high + low) / 2;

                if (x == arr[mid])
                {
                    high = mid - 1;
                    pos = mid + 1;
                    b = true;
                }
                else if (x < arr[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            }

            if (!b)
                pf ("%d not found\n",x);
            else
                pf ("%d found at %d\n",x,pos);
        }
    }

    return 0;
}