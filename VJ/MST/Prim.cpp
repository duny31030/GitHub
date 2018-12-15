/*
 * =========================================================================
 *
 *       Filename:  Prim.cpp
 *
 *           Link:  
 *
 *        Version:  1.0
 *        Created:  2018/09/26 13时05分29秒
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
const int MAXN = 5010;
int cost[MAXN][MAXN];
int mmin,n,m,tot,now,ans;
bool v1[MAXN];
int v2[MAXN];

void init()
{
    // 先将数组赋为极大值
    for(int i = 1;i <= n;i++)
        for(int j = 1;j <= n;j++)
            cost[i][j] = INF;
}

int prim()
{
    // 找到与1节点相连的边进行标记
    for(int i = 1;i <= n;i++)
    {
        v2[i] = cost[1][i];
    }
    v1[1] = 1;
    tot = 1;
    ans = 0;
    while(tot < n)
    {
        mmin = INF;
        tot++;
        for(int i = 1;i <= n;i++)
        {
            if(!v1[i] && v2[i] < mmin)
            {
                mmin = v2[i];
                now = i;
            }
        }
        ans += mmin;
        for(int i = 1;i <= n;i++)
        {
            if(v2[i] > cost[now][i] && !v1[i])
                v2[i] = cost[now][i];
        }
        v1[now] = 1;
    }
    return ans;
}

int main()
{
    ios
#ifdef ONLINE_JUDGE 
#else 
        freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout); 
#endif
    scanf("%d %d",&n,&m);
    init();
    for(int i = 1,u,v,w;i <= m;i++)
    {
        scanf("%d %d %d",&u,&v,&w);
        if(cost[u][v] > w)
            cost[u][v] = cost[v][u] = w;
    }
    printf("%d\n",prim());
    fclose(stdin);
    // fclose(stdout);
    return 0;
}

