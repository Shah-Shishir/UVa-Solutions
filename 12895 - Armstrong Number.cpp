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

unsigned long long power (unsigned long long n, unsigned long long p)
{
    unsigned long long res = 1;

    while (p--)
        res *= n;

    return res;
}

int main (void)
{
    unsigned long long t,n,d,x,rem,temp,res,i;

    cin >> t;

    while (t--)
    {
        cin >> n;

        temp = n, d = log10(n)+1, x = d, res = 0;

        while (d--)
        {
            rem = temp % 10;
            res += power (rem,x);
            temp /= 10;
        }

        if (n == res)
            cout << "Armstrong\n";
        else
            cout << "Not Armstrong\n";
    }

    return 0;
}
