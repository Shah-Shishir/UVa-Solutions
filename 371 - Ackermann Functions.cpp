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

unsigned int func (unsigned int n,unsigned int count)
{
    if (n & 1)
        n = 3*n+1;
    else
        n >>= 1;

    if (n == 1)
        return ++count;

    func (n,++count);
}

int main (void)
{
    unsigned int a,b,i,p,k,num,maxi;

    while (sf ("%u %u",&a,&b) && a && b)
    {
        if (a > b)
            swap (a,b);

        maxi = num = 0;

        for (i=a; i<=b; i++)
        {
            k = func (i,0);

            if (k > maxi)
            {
                maxi = k;
                num = i;
            }
        }

        pf ("Between %u and %u, %u generates the longest sequence of %u values.\n",a,b,num,maxi);
    }

    return 0;
}
