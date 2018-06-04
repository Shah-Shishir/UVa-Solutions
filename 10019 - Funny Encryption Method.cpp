:/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pii pair <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int power (int b, int p)
{
    string bin = "";

    while (p)
    {
        if (p & 1)
            bin += "1";
        else
            bin += "0";

        p >>= 1;
    }

    reverse (bin.begin(),bin.end());

    int res = 1,len = bin.size(),i;

    for (i=0; i<len; i++)
    {
        res *= res;

        if (bin[i] == '1')
            res *= b;
    }

    return res;
}

int strtoint (char str[])
{
    int len = strlen(str),i,num = 0,val,p = len;

    for (i=0; i<len; i++)
    {
        val = str[i]-'0';
        num += val * power (10,--p);
    }

    return num;
}

int B1 (int num)
{
    string str;

    while (num)
    {
        if (num & 1)
            str += "1";
        else
            str += "0";

        num >>= 1;
    }

    int len = str.size(),i,k = 0;

    for (i=0; i<len; i++)
        if (str[i] == '1')
            ++k;

    return k;
}

int B2 (char str[])
{
    int len = strlen(str),i,val,k = 0;
    string hex;

    for (i=0; i<len; i++)
    {
        string s;
        val = str[i]-'0';

        while (val)
        {
            if (val & 1)
                s += "1";
            else
                s += "0";

            val >>= 1;
        }

        reverse (s.begin(),s.end());

        hex += s;
    }

    len = hex.size();

    for (i=0; i<len; i++)
        if (hex[i] == '1')
            ++k;

    return k;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int tc,n,b1,b2;
    char str[5];

    sf ("%d",&tc);

    while (tc--)
    {
        sf ("%s",str);

        n = strtoint(str);
        b1 = B1(n);
        b2 = B2 (str);

        pf ("%d %d\n",b1,b2);
    }

    return 0;
}
