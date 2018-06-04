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
#define u unsigned int

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/

    int n;

    while (cin >> n && n != 0)
    {
        if (n == 1 || n == 64 || n == 729 || n == 4096 || n ==  15625 || n == 46656 || n == 117649 || n == 262144 || n == 531441)
            cout << "Special\n";
        else if (n == 1000000 || n == 1771561 || n == 2985984 || n == 4826809 || n ==   7529536 || n == 11390625 || n == 16777216)
            cout << "Special\n";
        else if (n == 24137569 || n ==  34012224 || n == 47045881 || n == 64000000 || n == 85766121)
            cout << "Special\n";
        else
            cout << "Ordinary\n";
    }

    return 0;
}
