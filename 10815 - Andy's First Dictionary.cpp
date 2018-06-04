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
    string str,s;
    int len,i;
    set <string> myset;
    set <string> :: iterator it;

    while (cin >> str)
    {
        len = str.size();

        for (i=0; i<len; i++)
        {
            if (i == len-1 && isalpha(str[i]))
            {
                if (toupper(str[i]))
                    str[i] = tolower(str[i]);

                s.pb(str[i]);

                if (!s.empty())
                	myset.in(s);

                s.clear();
                continue;
            }

            if (!isalpha(str[i]))
            {
                if (!s.empty())
                	myset.in(s);

                s.clear();
            }
            else
            {
                if (toupper(str[i]))
                    str[i] = tolower(str[i]);

                s.pb(str[i]);
            }
        }
    }

    for (it=myset.begin(); it!=myset.end(); it++)
        cout << *it << endl;

    return 0;
}
