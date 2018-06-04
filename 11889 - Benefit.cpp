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

int GCD (int a, int b)
{
    if (b == 0)
        return a;
    else
        return GCD (b,a%b);
}

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/

                                    /***                            THE CONCEPT                 ***\

            We Know,
            a * b = G * L; where G = GCD (a,b), L = LCM (a,b)
            Or, L / a = b / G ..... (i)

            In this Problem, we are given two integers a and L, we have to determine b.
            It can easily be found from equation (i).
            At first, we should get the value of val = L/a. Then we will iterate it with a loop by i upto L while incrementing
            i by L/a. If i/G is equal to val somewhere in the loop, we will stop. That i is our output b. :-)

            BTW, there should exist a solution if val is an integer, otherwise not.

    ***/

    int t,a,b,L,i;
    double val;

    cin >> t;

    while (t--)
    {
        cin >> a >> L;

        val = L/(double)a;

        if (val != int(val))
            cout << "NO SOLUTION\n";
        else
        {
            for (i=val; i<=L; i+=val)
            {
                if (val == i/GCD(a,i))
                {
                    cout << i << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
