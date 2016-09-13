//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//#include <queue>
//#include <set>
//#include <vector>
//using namespace std;
//
//const int N = 200000 + 5;
//set<int> g[N];
//bool vis[N];
//int ans[N];
//
//int main()
//{
//	int T, n, m;
//	scanf("%d", &T);
//	while (T--) {
//		scanf("%d%d", &n, &m);
//		for (int i = 1; i <= n; i++)
//			g[i].clear();
//		while (m--) {
//			int x, y;
//			scanf("%d%d", &x, &y);
//			g[x].insert(y);
//			g[y].insert(x);
//		}
//		int S;
//		scanf("%d", &S);
//		queue<int> Q;
//		int cnt = 0;
//		memset(ans, -1, sizeof(ans));
//		memset(vis, 0, sizeof(vis));
//		Q.push(S);
//		ans[S] = 0;
//		vis[S] = 1;
//		while (!Q.empty()) {
//			int x = Q.front();
//			Q.pop();
//			for (int i = 1; i <= n; i++) {
//				if (!vis[i] && g[x].find(i) == g[x].end()) {
//					vis[i] = 1;
//					cnt++;
//					ans[i] = ans[x] + 1;
//					Q.push(i);
//				}
//			}
//			if (cnt == n - 1) break;
//		}
//		cnt = 0;
//		for (int i = 1; i <= n; i++) {
//			if (i != S) {
//				if (++cnt<n - 1) printf("%d ", ans[i]);
//				else printf("%d\n", ans[i]);
//			}
//		}
//	}
//	return 0;
//}
