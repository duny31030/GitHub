#define _CRT_SBCURE_NO_DEPRECATE
#include <set>
#include <map>
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


int main()
{
	ll a[42];
	a[1] = 3;
	a[2] = 8;
	for(int i = 3;i <= 40;i++)
		a[i] = 2*a[i-1] + 2*a[i-2];
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		printf("%lld\n",a[n]);
	}
	return 0;
}


