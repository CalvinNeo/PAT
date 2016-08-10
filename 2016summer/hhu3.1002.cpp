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
//#define INF 0x3f3f3f3f
//#define MAXN 50010
//using namespace std;
//#define LL long long
//
//int n;
//int tree[MAXN * 4];
//int a[MAXN];
//int buildtree(int fr, int to, int root) {
//	if (fr == to) {
//		tree[root] = a[fr];
//		return tree[root];
//	}
//	else {
//		int mid = (fr + to) / 2;
//		tree[root] = buildtree(fr, mid, root * 2)
//			+ buildtree(mid + 1, to, root * 2 + 1);
//		return tree[root];
//	}
//}
//void add(int wh, int l, int r, int root, int delta) {
//	int mid = (l + r) / 2;
//	if (wh <= l && wh >= r) { // ?
//		tree[root] += delta;
//	}
//	else if (r < wh || l > wh) {
//		// do nothing
//	}
//	else {
//		// Important
//		// ’‚±ﬂ «if
//		if(wh <= mid)
//			add(wh, l, mid, 2 * root, delta);
//		else
//			add(wh, mid + 1, r, 2 * root + 1, delta);
//		tree[root] = tree[root * 2] + tree[2 * root + 1];
//	}
//}
//int query(int fr, int to, int l, int r, int root) {
//	int mid = (l + r) / 2;
//	if (fr <= l && to >= r) {
//		return tree[root];
//	}
//	else if (r < fr || l > to) {
//		return 0;
//	}
//	else {
//		return query(fr, to, l, mid, 2 * root) + query(fr, to, mid + 1, r, 2 * root + 1);
//	}
//}
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	freopen("1.txt", "r", stdin);
//#endif
//	int T, cas = 0;
//	scanf("%d", &T);
//	while (T--) {
//		cas++;
//		scanf("%d", &n);
//		for (int i = 1; i <= n; i++)
//		{
//			scanf("%d", a + i);
//		}
//		buildtree(1, n, 1);
//		int i, j;
//		char cmd[20];
//		memset(cmd, 0, 20);
//		printf("Case %d:\n", cas);
//		while (scanf("%s", cmd) != EOF) {
//			if(strcmp(cmd, "Add") == 0){
//				scanf("%d%d\n", &i, &j);
//				add(i, 1, n, 1, j);
//			}
//			else if (strcmp(cmd, "Sub") == 0 ) {
//				scanf("%d%d\n", &i, &j);
//				add(i, 1, n, 1, -j);
//			}
//			else if (strcmp(cmd, "Query") == 0) {
//				scanf("%d%d\n", &i, &j);
//				int ans = query(i, j, 1, n, 1);;
//				printf("%d\n", ans);
//			}
//			else {
//				break;
//			}
//			memset(cmd, 0, 20);
//		}
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
//
