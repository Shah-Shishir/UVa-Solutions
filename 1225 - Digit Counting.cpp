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
    int t,n,i,temp,rem;

    sf ("%d",&t);

    while (t--)
    {
        sf ("%d",&n);

        int arr[10] = {0};

        for (i=1; i<=n; i++)
        {
            temp = i;

            while (temp != 0)
            {
                rem = temp % 10;
                arr[rem]++;
                temp /= 10;
            }
        }

        for (i=0; i<10; i++)
        {
            pf ("%d",arr[i]);

            if (i == 9)
                pf ("\n");
            else
                pf (" ");
        }
    }

    return 0;
}
