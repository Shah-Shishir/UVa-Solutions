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

    if (n < 2 || (!(n & 1) && n != 2))
        return false;
    else
    {
        bool k = true;

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
}

int main (void)
{
    int n,pos,i,len,k;
    string str;
    bool val;

    sf ("%d",&n);

    for (pos=1; pos<=n; pos++)
    {
        cin >> str;

        len = str.size();

        int arr[123];
        memset (arr,0,sizeof(arr));

        for (i=0; i<len; i++)
        {
            k = str[i];
            arr[k]++;
        }

        val = false;

        pf ("Case %d: ",pos);

        for (i=0; i<=122; i++)
        {
            if (isPrime(arr[i]))
            {
                pf ("%c",char(i));
                val = true;
            }
        }

        if (val == false)
            pf ("empty\n");
        else
            pf ("\n");
    }

    return 0;
}
