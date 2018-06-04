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

long long fact (long long n)
{
    if (n == 1)
        return 1;
    else
        return n*fact(n-1);
}

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/

    long long t,pos,len,i,arr[26],f;
    string str;

    cin >> t;

    for (pos=1; pos<=t; pos++)
    {
        cin >> str;

        len = str.size();
        memset (arr,0,sizeof(arr));

        for (i=0; i<len; i++)
            arr[str[i]-65]++;

        f = fact(len);

        for (i=0; i<26; i++)
            if (arr[i] > 1)
                f /= fact(arr[i]);

        pf ("Data set %lld: %lld\n",pos,f);
    }

    return 0;
}
