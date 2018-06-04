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

const int n = 1000005;
bool prime[n];

void sieve ()
{
    int i,j;

    prime[0] = prime[1] = true;

    for (i=4; i<=n; i+=2)
        prime[i] = true;

    for (i=3; i*i<=n; i+=2)
        if (!prime[i])
            for (j=i*i; j<=n; j+=2*i)
                prime[j] = true;

    return;
}

int reverse (int n)
{
    int rev = 0,rem;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    return rev;
}

int main (void)
{
    int num;

    sieve ();

    while (sf ("%d",&num) != EOF)
    {
        if (prime[num])
            pf ("%d is not prime.\n",num);
        else
        {
            if (!prime[reverse(num)] && num != reverse(num))
                pf ("%d is emirp.\n",num);
            else
                pf ("%d is prime.\n",num);
        }
    }

    return 0;
}
