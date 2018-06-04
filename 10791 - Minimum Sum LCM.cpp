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

const int MAX = 1000005;
bool prime[MAX];
vector <int> v;

void sieve ()
{
    int i,j;

    v.pb (2);
    prime[0] = prime[1] = true;

    for (i=4; i<MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAX; j+=2*i)
                prime[j] = true;

    for (i=3; i<MAX; i+=2)
        if (!prime[i])
            v.pb (i);
}

bool isPrime (lld n)
{
    if (n < 2 || (!(n & 1) && n != 2))
        return false;

    if (n == 2)
        return true;

    for (lld i=2; i*i<=n; i++)
        if (n % i == 0)
            return false;

    return true;
}

lld power (lld n,lld p)
{
    string str;

    while (p)
    {
        if (p & 1)
            str.pb('1');
        else
            str.pb('0');

        p >>= 1;
    }

    reverse (str.begin(),str.end());

    lld i,res = 1,L = str.size();

    for (i=0; i<L; i++)
    {
        res *= res;

        if (str[i] == '1')
            res *= n;
    }

    return res;
}

lld sdiv (lld n)
{
    sieve ();

    lld i,sum = 0,temp = n;
    set <int> myset;

    for (i=0; v[i]*v[i]<=n; i++)
    {
        if (n % v[i] == 0)
        {
            int k = 0;
            myset.in(v[i]);

            while (n % v[i] == 0)
            {
                ++k;
                n /= v[i];
            }

            sum += power(v[i],k);
        }
    }

    if (n > 1)
    {
        myset.in(n);
        sum += n;
    }

    if (myset.size() == 1)
        return temp+1;
    else
        return sum;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */
    lld pos = 0,n;

    while (sf ("%lld",&n) != EOF && n)
    {
        pf ("Case %lld: ",++pos);

        if (n == 1 || isPrime(n))
            pf ("%lld\n",++n);
        else
            pf ("%lld\n",sdiv(n));
    }

    return 0;
}
