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

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    //fast;

    int i,n=0;
    char a,b,c,d,e;
    string str;
    map <string,int> mp;

    for (a='a'; a<='z'; a++)
    {
        str.pb(a);
        mp[str] = ++n;
        str.clear();
    }

    for (a='a'; a<='z'; a++)
    {
        for (b=a+1; b<='z'; b++)
        {
            str.pb(a);
            str.pb(b);
            mp[str] = ++n;
            str.clear();
        }
    }

    for (a='a'; a<='z'; a++)
    {
        for (b=a+1; b<='z'; b++)
        {
            for (c=b+1; c<='z'; c++)
            {
                str.pb(a);
                str.pb(b);
                str.pb(c);
                mp[str] = ++n;
                str.clear();
            }
        }
    }

    for (a='a'; a<='z'; a++)
    {
        for (b=a+1; b<='z'; b++)
        {
            for (c=b+1; c<='z'; c++)
            {
                for (d=c+1; d<='z'; d++)
                {
                    str.pb(a);
                    str.pb(b);
                    str.pb(c);
                    str.pb(d);
                    mp[str] = ++n;
                    str.clear();
                }
            }
        }
    }

    for (a='a'; a<='z'; a++)
    {
        for (b=a+1; b<='z'; b++)
        {
            for (c=b+1; c<='z'; c++)
            {
                for (d=c+1; d<='z'; d++)
                {
                    for (e=d+1; e<='z'; e++)
                    {
                        str.pb(a);
                        str.pb(b);
                        str.pb(c);
                        str.pb(d);
                        str.pb(e);
                        mp[str] = ++n;
                        str.clear();
                    }
                }
            }
        }
    }

    while (cin >> str)
        cout << mp[str] << endl;

    return 0;
}
