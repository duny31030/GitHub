/*
 * =========================================================================
 *
 *       Filename:  B.cpp
 *
 *           Link:  :http://codeforces.com/contest/1005/problem/B
 *
 *        Version:  1.0
 *        Created:  2018/07/09 23时52分59秒
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
#define ll long long
#define max3(a,b,c) fmax(a,fmax(b,c))
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const double eps = 1e-6;
const int INF = 0x3f3f3f3f;
string a,b;
int main()
{
    ios
#ifdef ONLINE_JUDGE 
#else 
        freopen("./in.txt","r",stdin);
    // freopen("out.txt","w",stdout); 
#endif
    cin >> a >> b;
    int la,lb,lp,flag = 0;
    la = a.length();
    lb = b.length();
    lp = la+lb;
    while((a[la-1] == b[lb-1]) && (la > 0) && (lb > 0))
    {
        la--;
        lb--;
        flag++;
    }
    printf("%d\n",lp-2*flag);


    fclose(stdin);
    // fclose(stdout);
    return 0;
}

