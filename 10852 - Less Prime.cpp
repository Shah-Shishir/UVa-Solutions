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

bool isPrime (int n)
{
    int i;

    if (n == 0 || n == 1)
        return false;
    else if (!(n & 1))
    {
        if (n == 2)
            return true;
        else
            return false;
    }
    else
    {
        for (i=2; i*i<=n; i++)
            if (n % i == 0)
                return false;
    }

    return true;
}

int main ()
{
    int t,n,i,h;

    cin >> t;

    while (t--)
    {
        cin >> n;

        h = (n >> 1) + 1;

        if (!(h & 1))
            h++;

        for (i=h; ; i+=2)
        {
            if (isPrime(i))
            {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}
