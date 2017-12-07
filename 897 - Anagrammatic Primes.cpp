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
#define ssf sscanf
#define spf sprintf
#define fsf fscanf
#define fpf fprintf
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

const int MOD = 1000000007;
const int MAX = 1001;

bool prime[MAX];
vector <int> v;

bool isConEvenDig (int n)
{
    int rem;

    while (n)
    {
        rem = n % 10;

        if (!(rem & 1))
            return true;

        n /= 10;
    }

    return false;
}

void sieve ()
{
    int i,j;

    v.pb(2);
    prime[0] = prime[1] = true;

    for (i=4; i<MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAX; j+=2*i)
                prime[j] = true;
}

bool isAnagPrime (int n)
{
    vector <int> p,d;
    int rem,temp=n,l=(floor)(log10(n))+1,i;

    while (n)
    {
        rem = n % 10;
        n /= 10;
        d.pb(rem);
    }

    sort (d.begin(),d.end());

    do
    {
        n = 0;

        for (i=0; i<l; i++)
            n = n*10 + d[i];

        p.pb(n);
    }while (next_permutation(d.begin(),d.end()));

    l = p.size();

    for (i=0; i<l; i++)
        if (prime[p[i]])
            return false;

    return true;
}

int main (void)
{
    sieve ();

    int n,i,len,l;

    for (i=3; i<MAX; i+=2)
    {
        if (!prime[i])
        {
            if (isConEvenDig(i))
                continue;

            if (isAnagPrime(i))
                v.pb(i);
        }
    }

    len = v.size();

    while (sf ("%d",&n) && n)
    {
        if (n >= 991)
            pf ("0\n");
        else
        {
            l=(floor)(log10(n))+1;

            if (l == 1)
                l = 10;
            else if (l == 2)
                l = 100;
            else
                l = 1000;

            for (i=0; i<len; i++)
            {
                if (v[i] > n && v[i] < l)
                {
                    pf ("%d\n",v[i]);
                    break;
                }
            }

            if (i == len)
                pf ("0\n");
        }
    }

    return 0;
}
