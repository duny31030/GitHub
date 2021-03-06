#include <map>
#include <cmath>
#include <string>
#include <string.h>
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
	int n;
	cin >> n;
	while(n--)
	{
		char s[2000];
		int p = 0;
		cin >> s;
		int len = strlen(s);
		for(int i = 0;i < len;i++)
		{
			if((s[i] - '0' >= 0 && s[i]-'0' <10))
			{
				p++;
			}
		}
		cout << p << endl;
	}
	
	return 0;
}


