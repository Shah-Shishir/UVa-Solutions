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

char strinttochar (string str)
{
    int len=str.size(),i,val=0,k=0;

    for (i=len-1; i>=0; i--)
        val += (str[i]-'0') * pow(10.0,k++);

    return char(val);
}

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/
    string str,a;
    int len,i,val;

    while (getline(cin,str))
    {
        len = str.size();

        if (isalpha(str[0]))
        {
            reverse (str.begin(),str.end());

            for (i=0; i<len; i++)
            {
                val = str[i];
                a = to_string(val);
                reverse (a.begin(),a.end());
                cout << a;
            }

            a.clear();
        }
        else
        {
            reverse (str.begin(),str.end());

            for (i=0; i<len; i++)
            {
                if (str[i] == '1')
                {
                    a.pb(str[i]);
                    a.pb(str[i+1]);
                    a.pb(str[i+2]);
                    cout << strinttochar(a);
                    i+=2;
                    a.clear();
                }
                else
                {
                    a.pb(str[i]);
                    a.pb(str[i+1]);
                    cout << strinttochar(a);
                    i++;
                    a.clear();
                }
            }
        }

        cout << endl;
    }

    return 0;
}
