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
#define lld long long
#define U unsigned int

int arr[1001];

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/

    int pos=0,n,i,j,sum;
    bool val;

    for (i=0; i<1001; i++)
    {
        sum = 0;
        n = i;

        for (j=1; j*j<=n; j++)
        {
            if (n % j == 0)
            {
                if (j*j == n)
                    sum += j;
                else
                    sum += j + (n/j);
            }
        }

        arr[i] = sum;
    }

    while (cin >> n && n)
    {
        val = false;

        pf ("Case %d: ",++pos);

        for (i=1000; i>=0; i--)
        {
            if (arr[i] == n)
            {
                val = true;
                cout << i << endl;
                break;
            }
        }

        if (!val)
            cout << -1 << endl;
    }

    return 0;
}
