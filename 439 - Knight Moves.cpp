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

int lv[10][10];
bool vis[10][10];
int fx[] = {1,1,-1,-1,2,2,-2,-2};
int fy[] = {2,-2,2,-2,1,-1,1,-1};
string str;

void bfs (int a, int b, int c, int d)
{
    memset (vis,0,sizeof vis);
    queue <pii> q;
    q.push(pii(a,b));
    vis[a][b] = 1;
    lv[a][b] = 0;

    while (!q.empty())
    {
        pii u = q.front();
        q.pop();

        if (u.first == c && u.second == d)
        {
            cout << "To get from " << str[0] << str[1] << " to " << str[3] << str[4] << " takes " << lv[c][d] << " knight moves.\n";
            break;
        }

        for (int i=0; i<8; i++)
        {
            int x = u.first+fx[i];
            int y = u.second+fy[i];

            if (x >= 1 && x <= 8 && y >= 1 && y <= 8 && !vis[x][y])
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

    int a,b,c,d;

    while (getline(cin,str))
    {
        a = str[0]-96;
        b = str[1]-'0';
        c = str[3]-96;
        d = str[4]-'0';

        bfs (a,b,c,d);
    }

    return 0;
}
