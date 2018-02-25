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

    int tc,i,j,k,val,m,res,len;
    char ch,str[10005];
    double x;

    sf ("%d",&tc);

    while (tc--)
    {
        map <char,int> mp;
        map <char,int> :: iterator it;

        sf ("%d",&k);

        for (i=1; i<=k; i++)
        {
            sf ("%s %d",str,&val);
            mp[str[0]] = val;
        }

        sf ("%d",&m);
        res = 0;

        getchar ();

        for (i=1; i<=m; i++)
        {
            gets (str);

            len = strlen(str);

            for (j=0; j<len; j++)
                res += mp[str[j]];
        }

        pf ("%d.",res/100);

        if ((res % 100) < 10)
            pf ("0%d$\n",res % 100);
        else
            pf ("%d$\n",res % 100);

        mp.clear();
    }

    return 0;
}
