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

    string str;
    int len,i,sum,mx;

    while (cin >> str)
    {
        len = str.size();

        mx = '\0', sum = 0;

        for (i=0; i<len; i++)
        {
            if (!isalnum(str[i]))
                continue;

            if (isdigit(str[i]))
                sum += str[i]-'0';
            else if (isupper(str[i]))
                sum += str[i]-55;
            else
                sum += str[i]-61;

            if (str[i] > mx)
                mx = str[i];
        }

        if (isdigit(mx))
            mx = mx-'0';
        else if (isupper(mx))
            mx = mx-55;
        else
            mx = mx-61;

        if (mx == 0)
            mx = 2;
        else
            ++mx;

        for (i=mx; i<=62; i++)
        {
            if (sum % (i-1) == 0)
            {
                pf ("%d\n",i);
                break;
            }
        }

        if (i == 63)
            pf ("such number is impossible!\n");
    }

    return 0;
}
