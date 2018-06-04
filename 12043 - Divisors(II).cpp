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

const lld MAX = 320;
bool prime[MAX];
vector <lld> v;

void sieve ()
{
    lld i,j;

    v.pb(2);
    prime[0] = prime[1] = true;

    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<=MAX; j+=2*i)
                prime[j] = true;

    for (i=3; i<=MAX; i+=2)
        if (!prime[i])
            v.pb(i);
}

lld power (lld n,lld p)
{
    lld res = 1;

    while (p--)
        res *= n;

    return res;
}

lld cdiv (lld n)
{
    sieve ();

    lld i,res=1,k;

    for (i=0; v[i]*v[i]<=n; i++)
    {
        k = 1;

        if (n % v[i] == 0)
        {
            while (n % v[i] == 0)
            {
                k++;
                n /= v[i];
            }

            res *= k;
        }
    }

    if (n > 1)
        res *= 2;

    return res;
}

lld sdiv (lld n)
{
    sieve ();

    lld i,k,res=1;

    for (i=0; v[i]*v[i]<=n; i++)
    {
        k = 1;

        if (n % v[i] == 0)
        {
            while (n % v[i] == 0)
            {
                k++;
                n /= v[i];
            }

            res *= (power(v[i],k)-1)/(v[i]-1);
        }
    }

    if (n > 1)
       res *= (power(n,2)-1)/(n-1);

    return res;
}

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/

    lld t,a,b,k,i,Cdiv[100005],Sdiv[100005];

    for (i=1; i<100005; i++)
    {
        Cdiv[i] = cdiv(i);
        Sdiv[i] = sdiv(i);
    }

    sf ("%lld",&t);

    while (t--)
    {
        sf ("%lld %lld %lld",&a,&b,&k);

        for (i=a; ; i++)
        {
            if (i % k == 0)
            {
                a = i;
                break;
            }
        }

        long long C = 0, S = 0;

        for (i=a; i<=b; i+=k)
        {
            C += Cdiv[i];
            S += Sdiv[i];
        }

        pf ("%lld %lld\n",C,S);
    }

    return 0;
}
