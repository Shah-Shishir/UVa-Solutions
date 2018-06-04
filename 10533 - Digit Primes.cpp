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

const int MAX = 1000000;
int digit[MAX];
bool check[MAX];

void sieve ()
{
    int i,j;

    check[0] = check[1] = true;

    for (i=4; i<MAX; i+=2)
        check[i] = true;

    for (i=3; i*i<MAX; i+=2)
        if (!check[i])
            for (j=i*i; j<MAX; j+=2*i)
                check[j] = true;

    return;
}

int digitsum (int n)
{
    int sum = 0;

    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main (void)
{
    int t,a,b,i,count = 0;

    sieve ();

    for (i=0; i<MAX; i++)
    {
        if (!check[i] && !check[digitsum(i)])
            count++;

        digit[i] = count;
    }

    sf ("%d",&t);

    while (t--)
    {
        sf ("%d %d",&a,&b);

        pf ("%d\n",digit[b]-digit[a-1]);

        /***
                If we keep digit[a], then the determined output will be less than the expected output

                1
                3 10
                2
                But Expected Output is 3.

        ***/
    }

    return 0;
}
