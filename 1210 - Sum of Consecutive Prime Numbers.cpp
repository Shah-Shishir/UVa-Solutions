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

const int MAX = 10001;
bool prime[MAX];
vector <int> v;

void sieve ()
{
    int i,j;

    prime[0] = prime[1] = true;

    v.pb(2);

    for (i=4; i<=MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
    {
        if (!prime[i])
        {
            v.pb(i);

            for (j=i*i; j<=MAX; j+=2*i)
                prime[j] = true;
        }
    }

    for (i=101; i<=MAX; i+=2)
        if (!prime[i])
            v.pb(i);

    return;
}

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/

    sieve ();

    int len = v.size();
    int n,h,i,j,k,sum;

    while (cin >> n && n != 0)
    {
        k = 0;

        if (!prime[n])
            k++;

        h = n/2;

        for (i=0; v[i]<=h; i++)
        {
            sum = 0;

            for (j=i; v[j]<=n; j++)
            {
                sum += v[j];

                if (sum == n)
                    k++;

                if (sum >= n)
                    break;
            }
        }

        cout << k << endl;
    }

    return 0;
}
