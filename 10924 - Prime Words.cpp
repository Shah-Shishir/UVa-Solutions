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
    bool k = true;

    if (!(n & 1) && n != 2)
        return false;

    if (n == 1 || n == 2)
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
    string str;
    int len,i,sum;

    while (cin >> str)
    {
        len = str.size(), sum = 0;

        for (i=0; i<len; i++)
        {
            if (isupper(str[i]))
                sum += str[i] - 38;
            else
                sum += str[i] - 96;
        }

        if (isPrime(sum))
            pf ("It is a prime word.\n");
        else
            pf ("It is not a prime word.\n");
    }

    return 0;
}
