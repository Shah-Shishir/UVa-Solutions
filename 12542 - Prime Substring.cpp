/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
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
const int MAX = 100005;

bool prime[MAX];

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

void sieve ()
{
    int i,j;

    prime[0] = prime[1] = true;

    for (i=4; i<MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAX; j+=2*i)
                prime[j] = true;
}

int strtoint (string str, int len)
{
    int i,val=0;

    for (i=0; i<len; i++)
        val = val*10 + str[i]-'0';

    return val;
}

int maximum (string str, int len, int k, int maxi)
{
    int i,j;

    for (i=0; i<len-k+1; i++)
    {
        string s;

        for (j=i; j<i+k; j++)
            s.pb(str[j]);

        int val = strtoint(s,k);

        if (!prime[val] && val > maxi)
            maxi = val;
    }

    return maxi;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    sieve ();

    string str;
    int len,i,maxi,val;

    while (cin >> str)
    {
        if (str == "0")
            return 0;

        len = str.size();
        maxi = 0;

        maxi = maximum (str,len,1,maxi);
        maxi = maximum (str,len,2,maxi);
        maxi = maximum (str,len,3,maxi);
        maxi = maximum (str,len,4,maxi);
        maxi = maximum (str,len,5,maxi);

        pf ("%d\n",maxi);
    }

    return 0;
}
