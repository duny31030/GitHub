#define _CRT_SBCURE_NO_DEPRECATE
#include <set>
#include <cmath>
#include <queue>
#include <stack>
#include <vector>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

#define ll long long
#define max3(a,b,c) fmax(a,fmax(b,c))
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int maxn = 110;
const int INF = 0x3f3f3f3f;

bool cmp(const int &a,const int &b)
{
	return a>b;
}

int vis[11];
int a[11];
void print(int t)
{
	for(int i = 0;i < t;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	return ;
}


void dfs(int m,int t,int n)
{
	if(n == t)
	{
		print(t);
	}
	for(int i = 1;i <= m;i++)
	{
		if(vis[i] == 0)
		{
			vis[i] = 1;
			a[n] = i;
			dfs(m,t,n+1);
			vis[i] = 0;
		}
	}
	return ;
}



int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int m,t;
		scanf("%d %d",&m,&t);
		dfs(m,t,0);
	}
	
	return 0;
}


