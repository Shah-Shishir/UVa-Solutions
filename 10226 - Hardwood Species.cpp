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

    int tc,n,i;
    char str[35];

    sf ("%d\n\n",&tc);

    for (i=1; i<=tc; i++)
    {
        n = 0;
        map <string,int> mp;
        map <string,int> :: iterator it;

        while (gets(str))
        {
            if (strlen(str) == 0)
                break;

            if (strlen(str) != 0)
            {
                mp[string(str)]++;
                ++n;
            }
        }

        for (it=mp.begin(); it!=mp.end(); ++it)
            pf ("%s %0.4lf\n",it->first.data(),(it->second)*100/(n*1.0));

        if (i < tc)
            pf ("\n");
    }

    return 0;
}
