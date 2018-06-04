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

const int MAX = 1000005;
bool prime[MAX];
vector <int> v;

void sieve ()
{
    int i,j;

    v.pb(2);
    prime[0] = prime[1] = true;

    for (i=4; i<=MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<=MAX; j+=2*i)
                prime[j] = true;

    for (i=3; i<MAX; i+=2)
        if (!prime[i])
            v.pb(i);
}

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/

    sieve ();

    int tc,l,u,i,len,d,mx,k,ans,x;

    sf ("%d",&tc);

    while (tc--)
    {
        sf ("%d %d",&l,&u);

        vector <int> F;

        if (l <= 2)
        {
            F.pb(2);
            l = 3;
        }

        if (!(l & 1))
            ++l;

        if (!(u & 1))
            --u;

        for (i=l; i<=u; i+=2)
            if (!prime[i])
                F.pb(i);

        len = F.size();

        if (len < 2)
            pf ("No jumping champion\n");
        else if (len == 2)
            pf ("The jumping champion is %d\n",F[1]-F[0]);
        else
        {
            map <int,int> mp;
            map <int,int> :: iterator it;

            for (i=1; i<len; i++)
            {
                d = F[i]-F[i-1];
                mp[d]++;
            }

            mx = k = ans = x = 0;
            len = mp.size();

            for (it=mp.begin(); it!=mp.end(); ++it)
            {
                if (it->second == 1)
                    ++k;

                if (it->second > mx)
                {
                    mx = it->second;
                    ans = it->first;
                }
            }

            for (it=mp.begin(); it!=mp.end(); ++it)
                if (it->second == mx)
                    ++x;

            if (k == len || x > 1)
                pf ("No jumping champion\n");
            else
                pf ("The jumping champion is %d\n",ans);
        }
    }

    return 0;
}
