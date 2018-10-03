/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define ebar_khela_hoppe int main (void)
#define bair_ho return 0
#define sf scanf
#define pf printf
#define ssf sscanf
#define spf sprintf
#define fsf fscanf
#define fpf fprintf
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
#define vi vector <int>
#define pii pair <int,int>
#define mii map <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

lld power (lld p)
{
    lld res = 1;

    while (p--)
        res *= 16;

    return res;
}

lld strtolld (string str)
{
    int len = str.size();
    lld i,n=0,x;

    for (i=0; i<len; i++)
    {
        x = str[i]-'0';
        n = n*10 + x;
    }

    return n;
}

string dectohex (lld dec)
{
    lld rem,i;
    string hex;

    while (dec)
    {
        rem = dec % 16;
        dec /= 16;

        if (rem <= 9)
            hex.pb(rem+'0');
        else
            hex.pb(rem+55);
    }

    reverse (hex.begin(),hex.end());

    return hex;
}

lld hextodec (string str)
{
    int len = str.size(),k = len-2;
    lld n = 0;

    for (int i=2; i<len; i++)
    {
        if (isdigit(str[i]))
            n += (str[i]-'0') * power(--k);
        else
            n += (str[i]-55) * power(--k);
    }

    return n;
}

ebar_khela_hoppe
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    fast;

    string str;

    while (cin >> str && str[0] != '-')
    {
        if (str == "0" || str == "0x0")
            cout << 0 << endl;
        else if (str.size() >= 2 && str[1] == 'x')
            cout << hextodec(str) << endl;
        else
        {
            lld n = strtolld (str);
            string ans = dectohex(n);
            cout << "0x" << ans << endl;
        }
    }

    bair_ho;
}
