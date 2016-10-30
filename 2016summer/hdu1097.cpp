//#include <iostream>
//#include <cstdio>
//
//long long fastpow(long long a, long long n, long long mod) {
//	long long ans = 1;
//	while (n > 0) {
//		if (n & 1) {
//			ans = (ans * a) % mod;
//		}
//		a = (a * a) % mod;
//		n >>= 1;
//	}
//	return ans % mod;
//}
//
//int main() {
//	long long x, y;
//	while (scanf("%lld%lld", &x, &y) != EOF ) {
//		printf("%lld\n", fastpow(x, y, 10));
//	}
//	return 0;
//}