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
//#include <sstream>
//
//#define INF 0x3f3f3f3f
//#define MAXN 1000010
//const int MOD = 1e9 + 7;
//using namespace std;
//#define LL long long
//
//#define SC1(X) scanf("%d", &X)
//#define SC2(X, Y) scanf("%d %d", &X, &Y)
//
//int T, cas = 0;
//
//LL vv[MAXN], ny[MAXN];
//
//LL powmod(LL x, LL y) {
//	int ans = 1;
//	for (; y; y >>= 1, x = x * x % MOD)
//	{
//		if (y & 1) {
//			ans = ans * x % MOD;
//		}
//	}
//	return ans;
//}
//
//LL CNN(LL x, LL y) {
//	return vv[x + y - 1] * ny[x] % MOD * ny[y - 1] % MOD;
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r", stdin);
//#endif
//	SC1(T);
//	int fuck = 1000000;
//	LL n, m, k;
//	vv[0] = ny[0] = 1;
//	for (int i = 1; i < MAXN; i++)
//	{
//		vv[i] = vv[i - 1] * i % MOD;
//	}
//	ny[fuck] = powmod(vv[fuck], MOD - 2);
//	for (int i = fuck - 1; i >= 1; i--)
//	{
//		ny[i] = ny[i + 1] * (i + 1) % MOD;
//	}
//	while (T--)
//	{
//		scanf("%lld%lld%lld", &n, &m, &k);
//		LL ans;
//		if (m == 1) {
//			ans = n;
//		}
//		else if (m * (k + 1) > n)
//		{
//			ans = 0;
//		}
//		else {
//			ans = CNN(n - m * (k + 1), m + 1);
//			ans = (ans + CNN(n - m * (k + 1), m) * k) % MOD;
//		}
//		printf("%lld\n", ans);
//	}
//#ifdef __ACM
//	int iwannastop;
//	scanf("%d", &iwannastop);
//	system("pause");
//#endif
//}
//
