/*
 * =========================================================================
 *
 *       Filename:  E.cpp
 *
 *           Link:  
 *
 *        Version:  1.0
 *        Created:  2018/07/28 16时08分47秒
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  杜宁元 (https://duny31030.github.io/), duny31030@126.com
 *   Organization:  QLU_浪在ACM
 *
 * =========================================================================
 */
#include <bits/stdc++.h>
using namespace std;
#define clr(a, x) memset(a, x, sizeof(a))
#define rep(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define max3(a,b,c) fmax(a,fmax(b,c))
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const double eps = 1e-6;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;

int main()
{
    ios
#ifdef ONLINE_JUDGE 
#else 
        freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout); 
#endif
    int T,n;
    cin >> T;
    while(T--)
    {
        cin >> n;
        if(n == 2)
        {
            cout << "possible" << endl;
            cout << "1 0" << endl;
            cout << "1 -1" << endl;
        }
        else 
        {
            cout << "impossible" << endl;
        }
    }


    fclose(stdin);
    // fclose(stdout);
    return 0;
}

