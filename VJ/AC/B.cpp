/*
 * =========================================================================
 *
 *       Filename:  B.cpp
 *
 *           Link:  http://acm.hdu.edu.cn/showproblem.php?pid=2896
 *
 *        Version:  1.0
 *        Created:  2018/09/02 11时45分16秒
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
#define pre(i,a,n) for(int i=a;i>=n;i--)
#define ll long long
#define max3(a,b,c) fmax(a,fmax(b,c))
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const double eps = 1e-6;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int N = 1e6+100;
struct node
{
    int son[128];
    int fail;
    int count;
    int number;
}ac[N];
int tot = 0;
void init()
{
    for(int i = 0;i < N;i++)
    {
        memset(ac[i].son,0,sizeof ac[i].son);
        ac[i].count = 0;
        ac[i].fail = 0;
        ac[i].number = 0;
    }
}

void Insert(char *s,int num)
{
    int len = strlen(s);
    int now = 0;
    int tmp;
    for(int i = 0;i < len;i++)
    {
        tmp = s[i];
        if(ac[now].son[tmp] == 0)
            ac[now].son[tmp] = ++tot;
        now = ac[now].son[tmp];
    }
    ac[now].count++;
    ac[now].number = num;
}

void MakeFail()
{
    queue<int> q;
    for(int i = 0;i < 128;i++)
    {
        if(ac[0].son[i] != 0)
        {
            ac[ac[0].son[i]].fail = 0;
            q.push(ac[0].son[i]);
        }
    }
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i = 0;i < 128;i++)
        {
            if(ac[u].son[i] != 0)
            {
                ac[ac[u].son[i]].fail = ac[ac[u].fail].son[i];
                q.push(ac[u].son[i]);
            }
            else 
                ac[u].son[i] = ac[ac[u].fail].son[i];
        }
    }
}

int Query(char *s,int &no,int *a)
{
    int len = strlen(s);
    int now = 0,ans = 0,tmp;
    for(int i = 0;i < len;i++)
    {
        tmp = s[i];
        now = ac[now].son[tmp];
        for(int t = now;t && ac[t].count != -1;t = ac[t].fail)
        {
            if(ac[t].number > 0)
            {
                a[no++] = ac[t].number;
            }
            ans += ac[t].count;
            // ac[t].count = -1;
        }
    }
    return ans;
}
char s[210];
char Ts[10100];
int main()
{
    ios
#ifdef ONLINE_JUDGE 
#else 
        freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout); 
#endif
    int N,M;
    scanf("%d",&N);
    for(int i = 1;i <= N;i++)
    {
        scanf("%s",s);
        Insert(s,i);
    }
    ac[0].fail = 0;
    MakeFail();
    scanf("%d",&M);
    int total = 0;
    for(int i = 1;i <= M;i++)
    {
        int a[5];
        clr(a,0);
        int no = 1;
        scanf("%s",Ts);
        // printf("%s\n",Ts);
        int tmp = Query(Ts,no,a);
        if(tmp)
        {
            sort(a+1,a+no);
            printf("web %d:",i);
            for(int j = 1;j < no;j++)
                printf(" %d",a[j]);
            printf("\n");
            total++;
        }
    }
    printf("total: %d\n",total);
    fclose(stdin);
    // fclose(stdout);
    return 0;
}
