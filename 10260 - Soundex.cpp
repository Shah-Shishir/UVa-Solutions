/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define ebar_khela_hoppe    int main (void)
#define bair_ho             return 0
#define sf                  scanf
#define pf                  printf
#define ssf                 sscanf
#define spf                 sprintf
#define fsf                 fscanf
#define fpf                 fprintf
#define fast                ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase               sf ("%d",&tc)
#define sn                  sf ("%d",&n)
#define whilecase           while (tc--)
#define eof                 while (cin >> n)
#define forloop             for (pos=1; pos<=tc; pos++)
#define arrayloop           for (i=0; i<n; i++)
#define cinstr              cin >> str
#define getstr              getline (cin,str)
#define pcase               pf ("Case %d: ",pos)
#define vi                  vector <int>
#define si                  set <int>
#define vs                  vector <string>
#define pii                 pair <int,int>
#define mii                 map <int,int>
#define pb                  push_back
#define in                  insert
#define llu                 unsigned long long
#define lld                 long long
#define U                   unsigned int
#define endl                "\n"

const lld m = 1073741824;
const int MAX = 50005;
const double pi = acos(-1.0);

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

char str[25];

ebar_khela_hoppe
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    int len,i,j;

    while (sf ("%s",str) != EOF)
    {
        string ans;

        for (i=0; str[i]; i++)
        {
            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'H' || str[i] == 'W' || str[i] == 'Y')
                ans += " ";
            else if (str[i] == 'B' || str[i] == 'F' || str[i] == 'P' || str[i] == 'V')
                ans += "1";
            else if (str[i] == 'C' || str[i] == 'G' || str[i] == 'J' || str[i] == 'K' || str[i] == 'Q' || str[i] == 'S' || str[i] == 'X' || str[i] == 'Z')
                ans += "2";
            else if (str[i] == 'D' || str[i] == 'T')
                ans += "3";
            else if (str[i] == 'L')
                ans += "4";
            else if (str[i] == 'M' || str[i] == 'N')
                ans += "5";
            else if (str[i] == 'R')
                ans += "6";
        }

        int l = ans.size();

        for (i=0; i<l; i++)
        {
            for (j=i+1; j<l; j++)
            {
                if (ans[i] == ans[j])
                    ans[j] = ' ';
                else
                    break;
            }
        }

        for (i=0; i<l; i++)
            if (ans[i] != ' ')
                pf ("%c",ans[i]);

        pf ("\n");
    }

    bair_ho;
}
