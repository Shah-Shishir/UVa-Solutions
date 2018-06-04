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

    v.pb(2);

    prime[0] = prime[1] = true;

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

    return;
}

int power (int n, int p)
{
    int res = 1;

    while (p--)
        res *= n;

    return res;
}

int main (void)
{
    sieve ();

    int t,n,temp,i,k,sum;

    sf ("%d",&t);

    while (t--)
    {
        sf ("%d",&n);

        temp = n, sum = 1;

        for (i=0; v[i]*v[i]<=n; i++)
        {
            if (n % v[i] == 0)
            {
                k = 0;

                while (n % v[i] == 0)
                {
                    n /= v[i];
                    k++;
                }

                sum *= (power (v[i],++k)-1)/(v[i]-1);
            }
        }

        if (n > 1)
            sum *= (power (n,2)-1)/(n-1);

        sum -= temp;

        if (sum > temp)
            pf ("abundant\n");
        else if (sum < temp)
            pf ("deficient\n");
        else
            pf ("perfect\n");
    }

    return 0;
}
