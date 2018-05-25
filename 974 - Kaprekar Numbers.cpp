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

vector <int> v;

void find_kaprekar_numbers ()
{
    long long i,sqr,a,b,rem,p;

    for (i=2; i<=40000; i++)
    {
        sqr = i * i;

        a = b = p = 0;

        while (sqr != 0)
        {
            rem = sqr % 10;
            a += rem * pow (10,p);
            b = sqr / 10;
            sqr /= 10;
            p++;

            if (a + b == i && a != 0 && b != 0)
            {
                v.pb (i);
                break;
            }
        }
    }

    return;
}

int main ()
{
    find_kaprekar_numbers ();

    int t,pos,i,l,u,count,len = v.size();

    sf ("%d",&t);

    for (pos=1; pos<=t; pos++)
    {
        sf ("%d %d",&l,&u);

        count = 0;

        pf ("case #%d\n",pos);

        for (i=0; i<len; i++)
        {
            if (v[i] >= l && v[i] <= u)
            {
                count++;
                pf ("%d\n",v[i]);
            }
        }

        if (count == 0)
            pf ("no kaprekar numbers\n");

        if (pos < t)
            pf ("\n");
    }

    return 0;
}