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

int arr[5005];

void preCalc ()
{
    int i,t,rem;
    bool k;

    arr[0] = 0;

    for (i=1; i<5005; i++)
    {
        t = i;
        k = 1;

        map <int,int> mp;
        map <int,int> :: iterator it;

        while (t)
        {
            rem = t % 10;
            mp[rem]++;
            t /= 10;
        }

        for (it=mp.begin(); it!=mp.end(); it++)
        {
            if (it->second > 1)
            {
                k = 0;
                break;
            }
        }

        if (k == 1)
            arr[i] = arr[i-1]+1;
        else
            arr[i] = arr[i-1];
    }
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    preCalc ();
    U l,u,i,temp;

    while (sf ("%u %u",&l,&u) != EOF)
        pf ("%u\n",arr[u]-arr[l-1]);

    return 0;
}
