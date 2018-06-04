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

int main (void)
{
    int t,n,i;
    double sum;

    cin >> t;

    while (t--)
    {
        cin >> n;

        sum = 0;

        /***

                From Combinatorics, we come to learn that, the number of the digits of the factorial of an integer n can be defined by,
                log10(n!).

                In logarithms, we can write, log10(a*b*c*...*z) = log10(a)+log10(b)+log10(c)+...+log10(z)
                So, log10(n!) = log10(1*2*3*...*n) = log10(1)+log10(2)+log10(3)+...+log10(n)

                So, we can run a loop from 1 to n and sum up the logarithm values. But we know, log10(1)=0, so we
                need not check this.

                The sum variable should be kept in a double type data and we will cast it into an integer when to be
                printed.

                By the way, we take the floor value of the sum and then increment it by 1. If we take the ceil value,
                it may give WA for specific cases. :)

        ***/

        for (i=n; i>1; i--)
            sum += log10(i);

        cout << (int) ((floor(sum)) + 1) << endl;
    }

    return 0;
}
