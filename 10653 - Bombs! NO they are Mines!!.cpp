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

int lv[1000][1000];
bool vis[1000][1000],cell[1000][1000];
int fx[] = {0,0,1,-1};
int fy[] = {1,-1,0,0};

void bfs (int row,int col,int a,int b,int c,int d)
{
    memset (vis,0,sizeof vis);
    queue <pii> q;
    q.push(pii(a,b));
    lv[a][b] = 0;
    vis[a][b] = 1;

    while (!q.empty())
    {
        pii u = q.front();
        q.pop();

        if (u.first == c && u.second == d)
        {
            cout << lv[c][d] << endl;
            break;
        }

        for (int i=0; i<4; i++)
        {
            int x = u.first+fx[i];
            int y = u.second+fy[i];

            if (x >= 0 && x < row && y >= 0 && y < col && !vis[x][y] && !cell[x][y])
            {
                vis[x][y] = 1;
                lv[x][y] = lv[u.first][u.second]+1;
                q.push(pii(x,y));
            }
        }
    }
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */
    //fast;

    int row,col,R,a,b,c,d,val,l,x,i;
    string str;

    while (cin >> row >> col && row && col)
    {
        cin >> R;

        while (R--)
        {
            cin >> x >> l;

            for (i=1; i<=l; i++)
            {
                cin >> val;
                cell[x][val] = 1;
            }
        }

        cin >> a >> b >> c >> d;

        bfs (row,col,a,b,c,d);

        memset (cell,0,sizeof cell);
    }

    return 0;
}
