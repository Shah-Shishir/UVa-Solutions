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

vector <int> edges[21];
bool vis[21];
int lv[21];

int BFS (int s,int d)
{
    queue <int> Q;
    memset (vis,0,sizeof(vis));
    Q.push(s);
    vis[s] = true;
    lv[s] = 0;

    while (!Q.empty())
    {
        int u = Q.front();
        Q.pop();

        for (int i=0; i<edges[u].size(); i++)
        {
            int v = edges[u][i];

            if (!vis[v])
            {
                vis[v] = true;
                lv[v] = lv[u]+1;
                Q.push(v);
            }
        }
    }

    return lv[d];
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */
    int n,i,x,N,a,b,pos=0;

    while (sf ("%d",&n) != EOF)
    {
        memset (edges,0,sizeof(edges));

        while (n--)
        {
            sf ("%d",&x);
            edges[1].pb(x);
            edges[x].pb(1);
        }

        for (i=2; i<=19; i++)
        {
        	sf ("%d",&n);

        	while (n--)
        	{
        		sf ("%d",&x);
	            edges[i].pb(x);
	            edges[x].pb(i);
        	}
        }

        sf ("%d",&N);

        for (i=1; i<=N; i++)
        {
            if (i == 1)
                pf ("Test Set #%d\n",++pos);

            sf ("%d %d",&a,&b);
            pf ("%2d to %2d: %d\n",a,b,BFS(a,b));
        }

        pf ("\n");
    }

    return 0;
}
