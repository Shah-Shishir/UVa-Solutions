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
const int MAX = 46350;

bool prime[MAX];
vector <lld> v,sg,P;

void sieve ()
{
    lld i,j;

    v.pb(2);
    prime[0] = prime[1] = true;

    for (i=4; i<MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAX; j+=2*i)
                prime[j] = true;

    for (i=3; i<MAX; i+=2)
        if (!prime[i])
            v.pb(i);
}

void segmented_sieve (lld l,lld u)
{
    lld i,j,x,start;

    for (i=l; i<=u; i++)
        sg.pb(i);

    if (l == 0)
        sg[1] = 0;
    else if (l == 1)
        sg[0] = 0;

    for (i=0; v[i]*v[i]<=u; i++)
    {
        x = v[i];
        start = x*x;

        if (start < l)
            start = ((l+x-1)/x)*x;

        for (j=start; j<=u; j+=x)
            sg[j-l] = 0;
    }
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */
    sieve ();

    lld l,u,i,len;

    while (sf ("%lld %lld",&l,&u) != EOF)
    {
        segmented_sieve (l,u);

        for (i=l; i<=u; i++)
            if (sg[i-l] != 0)
                P.pb(sg[i-l]);

        len = P.size();

        if (len < 2)
            pf ("There are no adjacent primes.\n");
        else
        {
            int a=INT_MAX,b=0,c=INT_MIN,d=0,k;

            for (i=1; i<len; i++)
            {
                k = P[i]-P[i-1];

                if (k < a)
                {
                    a = k;
                    b = i;
                }

                if (k > c)
                {
                    c = k;
                    d = i;
                }
            }

            a = P[b-1], b = P[b], c = P[d-1], d = P[d];

            pf ("%lld,%lld are closest, %lld,%lld are most distant.\n",a,b,c,d);
        }

        sg.clear();
        P.clear();
    }

    return 0;
}
