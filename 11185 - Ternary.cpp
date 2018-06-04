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

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/
    long long n,arr[150],i,k;

    while (cin >> n && n >= 0)
    {
        if (n == 0)
            cout << 0 << endl;
        else
        {
            k = -1;

            while (n != 0)
            {
                arr[++k] = n % 3;
                n /= 3;
            }

            for (i=k; i>=0; i--)
            {
                cout << arr[i];

                if (i == 0)
                    cout << endl;
            }
        }
    }

    return 0;
}
