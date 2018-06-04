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

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/
    string a,b;
    int l1,l2,i,j,k,pos;

    while (cin >> a >> b)
    {
        l1 = a.size();
        l2 = b.size();
        k = pos = 0;

        for (i=0; i<l1; i++)
        {
            for (j=pos; j<l2; j++)
            {
                if (a[i] == b[j])
                {
                    pos = j+1;
                    k++;
                    break;
                }
            }
        }

        if (k == l1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
