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
int CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

string fixit (string str)
{
    int i,pos=0,len=str.size();
    bool k = false;

    for (i=0; i<len; i++)
    {
        if (str[i] != '0')
        {
            if (k)
            {
                str[0] = str[i];
                str[i] = '0';
            }
            break;
        }
        else
        {
            k = true;
        }
    }

    return str;
}

lld strtoint (string str)
{
    lld len = str.size(),i,res = 0,k;

    for (i=0; i<len; i++)
    {
        k = str[i]-'0';
        res = res*10 + k;
    }

    return res;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    lld n,t,len,i,x,y;

    while (sf ("%lld",&n) != EOF)
    {
        t = n;
        string str,s1,s2;

        while (n)
        {
            str.pb((n%10)+'0');
            n /= 10;
        }

        reverse (str.begin(),str.end());
        sort (str.begin(),str.end());
        s1 = str;
        reverse (str.begin(),str.end());
        s2 = str;
        s1 = fixit(s1);

        x = strtoint(s2);
        y = strtoint(s1);

        pf ("%lld - %lld = %lld = 9 * %lld\n",x,y,x-y,(x-y)/9);
    }

    return 0;
}
