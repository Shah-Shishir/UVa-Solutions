/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define ebar_khela_hoppe    int main (void)
#define bair_ho             return 0
#define sf                  scanf
#define pf                  printf
#define ssf                 sscanf
#define spf                 sprintf
#define fsf                 fscanf
#define fpf                 fprintf
#define fast                ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase               sf ("%d",&tc)
#define sn                  sf ("%d",&n)
#define whilecase           while (tc--)
#define eof                 while (cin >> n)
#define forloop             for (pos=1; pos<=tc; pos++)
#define arrayloop           for (i=0; i<n; i++)
#define cinstr              cin >> str
#define getstr              getline (cin,str)
#define pcase               pf ("Case %d: ",pos)
#define vi                  vector <int>
#define si                  set <int>
#define vs                  vector <string>
#define pii                 pair <int,int>
#define mii                 map <int,int>
#define pb                  push_back
#define in                  insert
#define llu                 unsigned long long
#define lld                 long long
#define U                   unsigned int
#define endl                "\n"

const int MOD = 107;
const int MAX = 32000;

bool prime[MAX];
vi v;
vector <si> x;
int i,j,l;

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

void sieve ()
{
    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAX; j+=2*i)
                prime[j] = true;

    for (i=3; i<MAX; i+=2)
        if (!prime[i])
            v.pb(i);

    l = v.size();
    si s;

    for (i=1; i<l-1; i++)
    {
        if (v[i]-v[i-1] == v[i+1]-v[i])
        {
            s.in(v[i-1]);
            s.in(v[i]);
            s.in(v[i+1]);
        }
        else
        {
            if (s.size() > 0)
            {
                x.pb(s);
                s.clear();
            }
        }
    }

    l = x.size();

    v.clear();
}

ebar_khela_hoppe
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    sieve ();

    int a,b;

    while (sf ("%d %d",&a,&b))
    {
        if (a == b && a == 0)
            break;

        if (a > b)
            swap (a,b);

        for (i=0; i<l; i++)
        {
            si s = x[i];
            si :: iterator p,q,it;
            p = q = it = s.begin();
            advance(q,s.size()-1);

            if (*p >= a && *q <= b)
            {
                pf ("%d",*it);
                advance(it,1);

                for (; it!=s.end(); it++)
                    pf (" %d",*it);

                pf ("\n");
            }
        }
    }

    x.clear();

    bair_ho;
}
