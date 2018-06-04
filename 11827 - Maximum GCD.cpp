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

int GCD (int a,int b)
{
    if (b == 0)
        return a;
    else
        return GCD (b,a%b);
}

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/

    int n,val,len,i,j,G;
    string str;

    cin >> n;

    getchar ();

    while (n--)
    {
        getline (cin,str);
        stringstream ss(str);
        vector <int> v;

        while (ss >> val)
            v.pb(val);

        len = v.size();
        G = 1;

        for (i=0; i<len; i++)
            for (j=i+1; j<len; j++)
                if (GCD(v[i],v[j]) > G)
                    G = GCD(v[i],v[j]);

        cout << G << endl;
    }

    return 0;
}
