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


int main()
{
	set<ll> s;
	set<ll>::iterator it;
	ll m,n,temp;
	scanf("%lld %lld",&m,&n);
	for(ll i = 0;i < m;i++)
	{
		scanf("%lld",&temp);
		s.insert(temp);
	}
	for(ll i = 0;i < n;i++)
	{
		scanf("%lld",&temp);
		it = s.find(temp);
		if(it == s.end())
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
	}
	
	return 0;
}


