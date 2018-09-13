/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define ebar_khela_hoppe int main (void)
#define bair_ho return 0
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
#define vi vector <int>
#define pii pair <int,int>
#define mii map <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

int gcd (int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd (b,a%b);
}

ebar_khela_hoppe
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    int n,i,k,sum,x,y,z,g,pos=0,l1,l2,l3;
    bool b;

    while (sf ("%d",&n) && n)
    {
        sum = 0;

        for (i=1; i<=n; i++)
        {
            sf ("%d",&k);
            sum += k;
        }

        if (sum < 0)
        {
            sum *= -1;
            b = true;
        }
        else
            b = false;

        pf ("Case %d:\n",++pos);

        if (sum == 0)
            pf ("0\n");
        else if (n > sum)
        {
            g = gcd (sum,n);
            sum /= g;
            n /= g;

            l1 = floor(log10(sum))+1;
            l2 = floor(log10(n))+1;

            if (b)
                pf ("  ");

            for (i=1; i<=l2-l1; i++)
                pf (" ");

            pf ("%d\n",sum);

            if (b)
                pf ("- ");

            for (i=1; i<=l2; i++)
                pf ("-");

            pf ("\n");

            if (b)
                pf ("  ");

            pf ("%d\n",n);
        }
        else
        {
            if (sum % n == 0)
            {
                if (b)
                    pf ("- ");

                pf ("%d\n",sum/n);
            }
            else
            {
                g = gcd (sum,n);
                sum /= g;
                n /= g;
                x = sum/n;
                y = sum%n;
                z = n;
                l1 = floor(log10(x))+1;
                l2 = floor(log10(z))+1;
                l3 = floor(log10(y))+1;

                if (b)
                    pf ("  ");

                for (i=1; i<=l1; i++)
                    pf (" ");

                for (i=1; i<=l2-l3; i++)
                    pf (" ");

                pf ("%d\n",y);

                if (b)
                    pf ("- ");

                pf ("%d",x);

                for (i=1; i<=l2; i++)
                    pf ("-");

                pf ("\n");

                if (b)
                    pf ("  ");

                for (i=1; i<=l1; i++)
                    pf (" ");

                pf ("%d\n",z);
            }
        }
    }

    bair_ho;
}
