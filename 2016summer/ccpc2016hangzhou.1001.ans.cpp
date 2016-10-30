//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <queue>
//#include <cmath>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//typedef long long ll;
//const int N = 1e5 + 5;
//int a[N];
//
////fail at
////100
////25 25
////6 9 155 6 28 8 19 6 3 6 30 32 18 20 13 75 41 33 26 30 64 17 43 29 33
////Case #1: 46
//
//int main()
//{
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("ccpc2016hangzhou.1001.test.dat", "r", stdin);
//	//freopen("ccpc2016hangzhou.1001.ans.out", "w+", stdout);
//#endif
//	int T;
//	scanf("%d", &T);
//	for (int t = 1; t <= T; t++) {
//		int n, k;
//		scanf("%d%d", &n, &k);
//		ll sum = 0;
//		for (int i = 1; i <= n; i++) {
//			scanf("%d", &a[i]);
//			sum += 1LL * a[i];
//		}
//		if (sum%k) {
//			printf("Case #%d: -1\n", t);
//			continue;
//		}
//		ll avg = sum / k;
//		sum = 0; int pre = 0, ans = 0;
//		for (int i = 1; i <= n; i++) {
//			sum += a[i];
//			if (sum%avg == 0) {
//				ans += (i - pre - 1) + (sum / avg - 1);
//				sum = 0; pre = i;
//			}
//		}
//		printf("Case #%d: %d\n", t, ans);
//	}
//	return 0;
//}