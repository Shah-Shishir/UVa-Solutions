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
const int MAX = 1000005;

int sDig (char str[])
{
    int sum=0,i;

    for (i=0; str[i]; i++)
        sum += str[i]-'0';

    return sum;
}

int soma (char str[])
{
    int sum=0,i;

    for (i=0; str[i]; i++)
    {
        if (i & 1)
            sum -= str[i]-'0';
        else
            sum += str[i]-'0';
    }

    return sum;
}

int moD (char str[], int len)
{
    int i,m=0;

    for (i=0; str[i]; i++)
        m = (((m * 10) % 7) + ((str[i]-'0') % 7)) % 7;

    return m;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int tc,n,arr[12],i,len,val;
    char str[1005];
    bool k;

    sf ("%d",&tc);

    while (tc--)
    {
        sf ("%s\n%d",str,&n);

        for (i=0; i<n; i++)
            sf ("%d",&arr[i]);

        k = true;
        len = strlen(str);
        pf ("%s - ",str);

        if (strcmp(str,"0") == 0)
            pf ("Wonderful.\n");
        else
        {
            for (i=0; i<n; i++)
            {
               if (arr[i] == 1)
                    continue;
               else if (arr[i] == 2)
               {
                   val = str[len-1]-'0';

                   if (!(val & 1))
                       continue;
                   else
                   {
                       k = false;
                       break;
                   }
               }
               else if (arr[i] == 3)
               {
                   val = sDig(str);

                   if (val % 3 == 0)
                       continue;
                   else
                   {
                       k = false;
                       break;
                   }
               }
               else if (arr[i] == 4)
               {
                   if (len == 1)
                       val = str[len-1]-'0';
                   else
                       val = (str[len-2]-'0')*10+(str[len-1]-'0');

                   if (!(val & 3))
                       continue;
                   else
                   {
                       k = false;
                       break;
                   }
               }
               else if (arr[i] == 5)
               {
                   val = str[len-1]-'0';

                   if (val == 0 || val == 5)
                       continue;
                   else
                   {
                       k = false;
                       break;
                   }
               }
               else if (arr[i] == 6)
               {
                   val = str[len-1]-'0';

                   if (!(val & 1) && sDig(str) % 3 == 0)
                       continue;
                   else
                   {
                       k = false;
                       break;
                   }
               }
               else if (arr[i] == 7)
               {
                   val = moD(str,len);

                   if (val == 0)
                       continue;
                   else
                   {
                       k = false;
                       break;
                   }
               }
               else if (arr[i] == 8)
               {
                   if (len == 1)
                       val = str[len-1]-'0';
                   else if (len == 2)
                       val = (str[len-2]-'0')*10+(str[len-1]-'0');
                   else
                       val = (str[len-3]-'0')*100+(str[len-2]-'0')*10+(str[len-1]-'0');

                   if (!(val & 7))
                       continue;
                   else
                   {
                       k = false;
                       break;
                   }
               }
               else if (arr[i] == 9)
               {
                   val = sDig(str);

                   if (val % 9 == 0)
                       continue;
                   else
                   {
                       k = false;
                       break;
                   }
               }
               else if (arr[i] == 10)
               {
                   val = str[len-1]-'0';

                   if (val == 0)
                       continue;
                   else
                   {
                       k = false;
                       break;
                   }
               }
               else if (arr[i] == 10)
               {
                   val = str[len-1]-'0';

                   if (val == 0)
                       continue;
                   else
                   {
                       k = false;
                       break;
                   }
               }
               else if (arr[i] == 11)
               {
                   val = soma(str);

                   if (val % 11 == 0)
                       continue;
                   else
                   {
                       k = false;
                       break;
                   }
               }
               else
               {
                   if (len == 1)
                       val = str[len-1]-'0';
                   else
                       val = (str[len-2]-'0')*10+(str[len-1]-'0');

                   if (sDig(str) % 3 == 0 && !(val & 3))
                       continue;
                   else
                   {
                       k = false;
                       break;
                   }
               }
            }

            if (k)
                pf ("Wonderful.\n");
            else
                pf ("Simple.\n");
        }
    }

    return 0;
}
