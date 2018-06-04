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

    int tc,pos,n,val,d;
    char str[25],s[25];

    sf ("%d",&tc);

    for (pos=1; pos<=tc; pos++)
    {
        map <string,int> mp;
        map <string,int> :: iterator it;

        sf ("%d",&n);

        while (n--)
        {
            sf ("%s %d",str,&val);
            mp[str] = val;
        }

        sf ("%d %s",&d,s);

        pf ("Case %d: ",pos);

        it = mp.find(s);

        if (it == mp.end() || it->second > d+5)
            pf ("Do your own homework!\n");
        else if (it->second > d && it->second <= d+5)
            pf ("Late\n");
        else
            pf ("Yesss\n");
    }

    return 0;
}
