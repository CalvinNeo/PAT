//#include<iostream>
//#include<cstdio>
//#include <cstring>
//#include <cmath>
//using namespace std;
//int a[100010];
//int b[100010];
//const double eps = 1e-7;
//
//int main() {
//	int T, cas = 0, n;
//	scanf("%d", &T);
//	while (T--) {
//		memset(a, 0, sizeof a);
//		memset(b, 0, sizeof b);
//		cas++;
//		scanf("%d", &n);
//		for (int i = 1; i <= n; i++) {
//			scanf("%d", &a[i]);
//		}
//		for (int i = 0; i < n; i++) {
//			b[i] = a[i + 1] - a[i];
//		}
//		long double max_speed = 1e8;
//		long long time = 0;
//		max_speed = b[n - 1];
//		time = 1;
//		for (int i = n - 2; i >= 0; i--) {
//			long double tt = 1.0 * b[i] / max_speed;
//			long long tti = ceill(tt - eps);
//			max_speed = 1.0 * b[i] / tti;
//			time += tti;
//		}
//		printf("Case #%d: %lld\n", cas, time);
//	}
//	return 0;
//}