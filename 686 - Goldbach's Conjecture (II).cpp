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

bool isPrime (int n)
{
    int i;
    bool k = true;

    if (n < 2 || (!(n & 1) && n != 2))
        return false;

    if (n == 2)
        return true;

    for (i=2; i*i<=n; i++)
    {
        if (n % i == 0)
        {
            k = false;
            break;
        }
    }

    return k;
}

int main (void)
{
    int num,h,i;

    while (cin >> num && num)
    {
        int count = 0, h = num/2;

        for (i=2; i<=h; i++)
            if (isPrime(i) && isPrime(num-i))
                count++;

        cout << count << endl;
    }

    return 0;
}
