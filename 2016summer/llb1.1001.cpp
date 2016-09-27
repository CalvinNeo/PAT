//#include <iostream> 
//#include <fstream>
//#include <vector>
//#include <queue>
//#include <cstring>
//#include <string>
//#include <algorithm>
//#include <stack>
//#include <functional>
//#include "stdlib.h" 
//#include "time.h"
//#include <set>
//#include <map>
//#include <queue>
//#include <string.h>
//#include <numeric>
//
//#define INF 0x3f3f3f3f
//#define MAXN 505
//#define MOD 998244353
//using namespace std;
//#define LL long long
//
//#define SC1(X) scanf("%d", &X)
//#define SC2(X, Y) scanf("%d %d", &X, &Y)
//
//int T, cas = 0;
//int fact[MAXN];
//int a[MAXN], b[MAXN];
//int inv[MAXN];
//int n, m;
//LL ans = 0;
//
//int fpow(LL x, int n)
//{
//	LL res = 1;
//	while (n) {
//		if (n & 1) {
//			res = res * x % MOD;
//		}
//		x = x * x % MOD;
//		n /= 2;
//	}
//	return res;
//}
//
//void dfs(int dep, int s)
//{
//	if (dep > m && s != 0) {
//		return;
//	}
//	if (s==0 || dep > m) {
//		LL r = 0, p = 1;
//		for (int i = 1; i <= m; i++) {
//			if (a[i] < a[i - 1]) {
//				++r;
//				b[r] = i - p;
//				p = i;
//			}
//		}
//		++r;
//		b[r] = m + 1 - p;
//		LL t = 1;
//		for (int i = 1; i <= r; i++) {
//			t = (t * inv[b[i]]) % MOD;
//		}
//		ans = (ans + t * fact[m] % MOD) % MOD;
//		return;
//	}
//	int ss = min(a[dep - 1], s);
//	for (int i = ss; i > 0; i--) {
//		if (i == a[1]) continue;
//		a[dep] = i;
//		dfs(dep + 1, s - i);
//		a[dep] = 0;
//	}
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r", stdin);
//#endif
//	while (~SC2(n, m)) {
//		fact[1] = 1;
//		//factor
//		for (int i = 2; i <= m; i++)
//			fact[i] = (LL)(fact[i - 1] * i) % MOD;
//		for (int i = 1; i <= m; i++)
//			inv[i] = fpow(fact[i], MOD - 2);
//		for (int i = n / m; i <= n; i++) {
//			memset(a, 0, sizeof a);
//			a[1] = i;
//			dfs(2, n - i);
//		}
//		printf("%lld\n", ans);
//	}
//#ifdef __ACM
//	int iwannastop;
//	scanf("%d", &iwannastop);
//	system("pause");
//#endif
//}
