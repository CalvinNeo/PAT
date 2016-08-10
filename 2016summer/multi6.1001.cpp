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
//#include <cmath>
//
//inline int fastread() {
//	char c;
//	int ret = 0;
//	int sgn = 1;
//	do { c = getchar(); } while ((c < '0' || c > '9') && c != '-');
//	if (c == '-') sgn = -1; else ret = c - '0';
//	while ((c = getchar()) >= '0' && c <= '9') ret = ret * 10 + (c - '0');
//	return sgn * ret;
//}
//
//
//#define INF 0x3f3f3f3f
//#define MAXN 100
//#define MOD 1000000007
//using namespace std;
//#define LL long long
//
//LL comb(LL upper, LL lower) {
//	if (upper < lower) return 0;
//	LL x = 1;
//	for (LL i = lower + 1; i <= upper; i++)
//	{
//		x *= i;
//	}
//	for (LL i = 2; i <= upper - lower; i++)
//	{
//		x /= i;
//	}
//	return x;
//}
//
//LL K[MAXN];
//
//LL getans(LL n, LL m, int deep) {
//	if (deep == m + 1) {
//		LL ans = 1;
//		for (LL i = 1; i <= m - 1; i++)
//		{
//			ans *= comb(K[i], K[i + 1]);
//			ans %= MOD;
//		}
//		return ans;
//	}
//	else {
//		LL ans = 0;
//		for (LL i = 0; i <= n; i++)
//		{
//			K[deep] = i;
//			ans += getans(n, m, deep + 1);
//			ans %= MOD;
//		}
//		return ans;
//	}
//}
//
//void test() {
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			cout << getans(i, j, 1) << " ";
//		}
//		cout << endl;
//	}
//}
//LL fastpow(LL a, LL i) {
//	if (i == 0) return 1 % MOD;
//	LL t = fastpow(a, i >> 1);
//	t = t * t % MOD;
//	if (i & 1)t = (LL)t * a % MOD;
//	return t;
//}
//LL exgcd(LL a, LL b, LL & x, LL & y ) {
//	LL d;
//	if (b == 0) {
//		x = 1; y = 0;
//		return a;
//	}
//	else {
//		int ans = exgcd(b, a % b, y, x);
//		y -= x * (a / b);
//		return ans;
//	}
//}
//LL inv(LL n, LL B) {
//	/*
//		解方程 ax === b(mod n)相当于解方程 ax + ny == b
//		根据裴蜀定理, 以上方程当 gcd(a, n) | b
//	*/
//	LL x, y;
//	exgcd(B, MOD, x, y);
//	x *= n;
//	x = (x % MOD + MOD) % MOD;
//	return x;
//}
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r", stdin);
//#endif
//	int T;
//	int n, m;
//	//test();
//	//cout << getans(1, 3, 1) << endl;
//	scanf("%d", &T);
//	while (T--) {
//		scanf("%d %d", &n, &m);
//		LL ans;
//		if (m == 1) {
//			ans = (n + 1) % MOD;
//		}
//		else if (n == 1) {
//			ans = (m + 1) % MOD;
//		}
//		else if (m == 0 || n == 0) {
//			ans = 1;
//		}
//		else {
//			LL fp = (fastpow(m, (n + 1)) - 1) % MOD;
//			ans = inv(fp, m - 1);
//		}
//		printf("%lld\n", ans);
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
//
