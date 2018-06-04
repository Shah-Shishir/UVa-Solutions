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

const long long m = 1000000000000, n = 1000000, r = 1000;
bool prime[1000001];
vector <long long> v,almost;
long long len,l;

void sieve ()
{
    long long i,j,k;

    prime[0] = prime[1] = true;

    for (i=4; i<=n; i+=2)
        prime[i] = true;

    v.pb (2);

    for (i=3; i<=r; i+=2)
    {
        if (!prime[i])
        {
            v.pb (i);

            for (j=i*i; j<=n; j+=2*i)
                prime[j] = true;
        }
    }

    for (i=r+1; i<=n; i+=2)
        if (!prime[i])
            v.pb (i);

    len = v.size ();

    for (i=0; i<len; i++)
    {
        k = v[i];

        for (j=k*k; j<=m; j*=k)
            almost.pb (j);
    }

    return;
}

int main (void)
{
    sieve ();

    l = almost.size();

    long long t,a,b,i;

    cin >> t;

    while (t--)
    {
        cin >> a >> b;

        long long count = 0;

        for (i=0; i<l; i++)
        {
            if (almost[i] >= a && almost[i] <= b)
                count++;
        }

        cout << count << endl;
    }

    return 0;
}
