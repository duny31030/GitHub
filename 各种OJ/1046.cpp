/*
 * =========================================================================
 *
 *       Filename:  1046.cpp
 *
 *           Link:  http://172.17.21.15/problem.php?id=1046
 *
 *        Version:  1.0
 *        Created:  2018/10/15 19时38分39秒
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  杜宁元 (https://duny31030.top/), duny31030@126.com
 *   Organization:  QLU_浪在ACM
 *
 * =========================================================================
 */
#include <bits/stdc++.h>
using namespace std;
#define clr(a, x) memset(a, x, sizeof(a))
#define rep(i,a,n) for(int i=a;i<=n;i++)
#define pre(i,a,n) for(int i=n;i>=a;i--)
#define ll long long
#define max3(a,b,c) fmax(a,fmax(b,c))
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const double eps = 1e-6;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int N = 1e6+100;
int Next[N];
char T[N];
int n,tlen;

void get_Next()
{
    int j,k;
    j = 0;  k = -1; Next[0] = -1;
    while(j < tlen)
    {
        if(k == -1 || T[j] == T[k]) Next[++j] = ++k;
        else    k = Next[k];
    }
}

int main()
{
    ios
#ifdef ONLINE_JUDGE 
#else 
        freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout); 
#endif
    cin >> tlen;
    cin >> T;
    get_Next();
    int Max = -INF,Min = INF,tmp;
    pre(i,1,tlen)
    {
        tmp = i-Next[i];
        if(!tmp)    continue;
        if(i%tmp)   continue;
        if(i/tmp > Max)
        {
            Max = i/tmp;
            Min = tmp;
            break;
        }
    }
    cout << Min << endl;
    // printf("Next[%d] = %d\n",i,Next[i]);
    fclose(stdin);
    // fclose(stdout);
    return 0;
}

