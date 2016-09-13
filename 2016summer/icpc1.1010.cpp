////#include <iostream>
////#include <cstdio>
////#include <cstring>
////#include <algorithm>
////using namespace std;
////
////const int N = 1e5 + 5;
////const int MAX = 2 * N;
////const long long INF = 1LL << 33;
////long long a[N], b[N], A[2 * N];
////int c[MAX];
////struct edge {
////	int go, next;
////} eg[2 * N];
////int last[N];
////bool vis[N];
////int tot;
////long long ans;
////
////void adde(int x, int y)
////{
////	eg[++tot].go = y;
////	eg[tot].next = last[x];
////	last[x] = tot;
////}
////
////void ins(int x, int d)
////{
////	for (; x<MAX; x += x&(-x)) {
////		c[x] += d;
////	}
////}
////
////long long query(int x)
////{
////	long long res = 0;
////	for (; x; x -= x&(-x)) {
////		res += c[x];
////	}
////	return res;
////}
////
////void dfs(int x)
////{
////	ans += query(b[x]);
////	ins(a[x], 1);
////	//	printf("%d %d\n",x,ans);
////
////	for (int i = last[x]; i; i = eg[i].next) {
////		dfs(eg[i].go);
////	}
////	ins(a[x], -1);
////}
////
////int main()
////{
////	int T, n;
////	long long k;
////	scanf("%d", &T);
////	while (T--) {
////		tot = 0;
////		memset(last, 0, sizeof(last));
////		scanf("%d%lld", &n, &k);
////		for (int i = 1; i <= n; i++) {
////			scanf("%lld", &a[i]);
////			A[i] = a[i];
////			if (a[i] == 0) {
////				A[n + i] = b[i] = INF;
////			}
////			else {
////				A[n + i] = b[i] = k / a[i];
////			}
////		}
////		sort(A + 1, A + 1 + n * 2);
////		for (int i = 1; i <= n; i++) {
////			a[i] = lower_bound(A + 1, A + 1 + 2 * n, a[i]) - A;
////			b[i] = lower_bound(A + 1, A + 1 + 2 * n, b[i]) - A;
////		}
////		memset(vis, 0, sizeof(vis));
////		for (int i = 1; i<n; i++) {
////			int x, y;
////			scanf("%d%d", &x, &y);
////			adde(x, y);
////			vis[y] = 1;
////		}
////		int i = 1;
////		while (i <= n&&vis[i]) i++;
////		ans = 0;
////		dfs(i);
////		printf("%lld\n", ans);
////	}
////	return 0;
////}
//
//
//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//const int N = 1e5 + 5;
//const int MAX = 2 * N;
//const long long INF = 1LL << 33;
//long long a[N], b[N], A[2 * N];
//int c[MAX];
//struct edge {
//	int go, next;
//} eg[2 * N];
//int last[N];
//bool vis[N];
//int tot;
//long long ans;
//
//void adde(int x, int y)
//{
//	eg[++tot].go = y;
//	eg[tot].next = last[x];
//	last[x] = tot;
//}
//
//void ins(int x, int d)
//{
//	for (; x<MAX; x += x&(-x)) {
//		c[x] += d;
//	}
//}
//
//long long query(int x)
//{
//	long long res = 0;
//	for (; x; x -= x&(-x)) {
//		res += c[x];
//	}
//	return res;
//}
//
//void dfs(int x)
//{
//	ans += query(b[x]);
//	ins(a[x], 1);
//	//	printf("%d %d\n",x,ans);
//
//	for (int i = last[x]; i; i = eg[i].next) {
//		dfs(eg[i].go);
//	}
//	ins(a[x], -1);
//}
//
//int main()
//{
//	int T, n;
//	long long k;
//	scanf("%d", &T);
//	while (T--) {
//		tot = 0;
//		memset(last, 0, sizeof(last));
//		scanf("%d%lld", &n, &k);
//		for (int i = 1; i <= n; i++) {
//			scanf("%lld", &a[i]);
//			A[i] = a[i];
//			if (a[i] == 0) {
//				A[n + i] = b[i] = INF;
//			}
//			else {
//				A[n + i] = b[i] = k / a[i];
//			}
//		}
//		sort(A + 1, A + 1 + n * 2);
//		for (int i = 1; i <= n; i++) {
//			a[i] = lower_bound(A + 1, A + 1 + 2 * n, a[i]) - A;
//			b[i] = lower_bound(A + 1, A + 1 + 2 * n, b[i]) - A;
//		}
//		memset(vis, 0, sizeof(vis));
//		for (int i = 1; i<n; i++) {
//			int x, y;
//			scanf("%d%d", &x, &y);
//			adde(x, y);
//			vis[y] = 1;
//		}
//		int i = 1;
//		while (i <= n&&vis[i]) i++;
//		ans = 0;
//		dfs(i);
//		printf("%lld\n", ans);
//	}
//	return 0;
//}
