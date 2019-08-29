/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define             jeno_joyer_khuda_thake      int main (void)
#define             kaj_shesh                   return 0
#define             sf                          scanf
#define             pf                          printf
#define             ssf                         sscanf
#define             spf                         sprintf
#define             fsf                         fscanf
#define             fpf                         fprintf
#define             fast                        ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define             scase                       sf ("%d",&tc)
#define             whilecase                   while (tc--)
#define             sn                          sf ("%d",&n)
#define             eof                         while (cin >> n)
#define             pcase                       pf ("Case %d: ",pos)
#define             llu                         unsigned long long
#define             lld                         long long
#define             U                           unsigned int
#define             for0(i,n)                   for (i=0; i<n; i++)
#define             for1(i,n)                   for (i=1; i<=n; i++)
#define             forab(i,a,b)                for (i=a; i<=b; i++)
#define             rof0(i,n)                   for (i=n-1; i>=0; i--)
#define             rof1(i,n)                   for (i=n; i>=1; i--)
#define             rofab(i,a,b)                for (i=b; i>=a; i--)
#define             c(str)                      cin >> str
#define             g(str)                     	getline (cin,str)
#define             vi                          vector <int>
#define             vlld                        vector <lld>
#define             si                          set <int>
#define             slld                        set <lld>
#define             ss                          set <string>
#define             vs                          vector <string>
#define             pii                         pair <int,int>
#define             mii                         map <int,int>
#define             msi                         map <string,int>
#define             pb                          push_back
#define             in                          insert
#define             B                           begin()
#define             E                           end()
#define             rB                          rbegin()
#define             rE                          rend()
#define             F                           first
#define             S                           second
#define             iterate(it,x)               for (it=x.B; it!=x.E; it++)
#define             riterate(rit,x)             for (it=x.rB; it!=x.rE; it++)
#define             sort(x)            	        sort (x.B,x.E)
#define             sortR(x,a,b)            	sort (x.B+a,x.B+b+1)
#define             rev(x)                  	reverse (x.B,x.E)
#define             revR(x,a,b)             	reverse (x.B+a,x.B+b+1)
#define             cl(x)                       x.clear()
#define             end1                        "\n"

const int MOD = 1000000007;
const int MAX = 1000005;
const double PI = acos(-1.0);

int SetBit (int n, int X) { return n | (1 << X); }
int ClearBit (int n, int X) { return n & ~(1 << X); }
int ToggleBit (int n, int X) { return n ^ (1 << X); }
bool CheckBit (int n, int X) { return (bool)(n & (1 << X)); }

char str[MAX];

jeno_joyer_khuda_thake
{
    /*
		freopen ("input.txt","r",stdin);
		freopen ("output.txt","w",stdout);
    */

    int len,n,i,j,kase=0,a,b;

    while (sf ("%s",str) != EOF)
    {
        len = strlen(str);

        if (!len)
            break;

        int zero[len+1],one[len+1];

        if (str[0] == '0')
            zero[0] = 1;
        else
            one[0] = 1;

        for (i=1; i<len; i++)
        {
            if (str[i] == '0')
            {
                zero[i] = zero[i-1]+1;
                one[i] = one[i-1];
            }
            else
            {
                zero[i] = zero[i-1];
                one[i] = one[i-1]+1;
            }
        }

        pf ("Case %d:\n",++kase);

        sf ("%d",&n);

        for (i=1; i<=n; i++)
        {
            sf ("%d %d",&a,&b);

            if (a > b)
                swap (a,b);

            if (a == 0)
                a = 1;

            if ((zero[b]-zero[a-1] != b-a+1) && (one[b]-one[a-1] != b-a+1))
                pf ("No");
            else
                pf ("Yes");

            pf ("\n");
        }
    }

    kaj_shesh;
}
