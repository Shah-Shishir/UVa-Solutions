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

int fun (int n,int count)
{
    if (n == 1)
        return ++count;

    if (n & 1)
        n = 3*n+1;
    else
        n = n/2;

    fun (n,++count);
}

int main ()
{
    int a,b,i,maxi;

    while (sf ("%d %d",&a,&b) != EOF)
    {
        pf ("%d %d ",a,b);

        maxi = 0;

        if (a > b)
        {
            a = a^b;
            b = a^b;
            a = a^b;
        }

        for (i=a; i<=b; i++)
            if (fun(i,0) > maxi)
                maxi = fun(i,0);

        pf ("%d\n",maxi);
    }

    return 0;
}
