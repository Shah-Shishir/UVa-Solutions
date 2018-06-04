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
#define u unsigned int
#define range 105
#define size 2000005

int main (void)
{
    int n,val,i,j,k;
    static int arr[range],sarray[size];

    while (cin >> n && n)
    {
        for (i=0; i<n; i++)
        {
            cin >> val;
            arr[val]++;
        }

        k = 0;

        for (i=1; i<=range; i++)
            if (arr[i] > 0)
                for (j=1; j<=arr[i]; j++)
                    sarray[k++] = i;

        for (i=0; i<k; i++)
        {
            cout << sarray[i];

            if (i == k-1)
                cout << endl;
            else
                cout << " ";
        }

        memset (arr,0,sizeof(arr));
    }

    return 0;
}
