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
    string str;
    int len,i,sum;

    while (cin >> str && str != "0")
    {
        len = str.size(), sum = 0;

        for (i=0; i<len; i++)
        {
            if (i & 1)
                sum += str[i] - '0';
            else
                sum -= str[i] - '0';
        }

        if (sum % 11)
            pf ("%s is not a multiple of 11.\n",str.c_str());
        else
            pf ("%s is a multiple of 11.\n",str.c_str());
    }

    return 0;
}
