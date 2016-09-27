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
//
//#define INF 0x3f3f3f3f
//#define MAXN 1010
//#define MAXM 10010
//using namespace std;
//#define LL long long
//
//#define SC1(X) scanf("%d", &X)
//#define SC2(X, Y) scanf("%d %d", &X, &Y)
//#define CIN(SS) cin >> SS
//
//
//const int maxn = 1e5 + 10;
//int n;
//int m;
//int p;
//int color[maxn];
//struct edge {
//	int v;
//	int next;
//	int w;
//	edge() {}
//	edge(int v, int next, int w) :v(v), next(next), w(w) {}
//}E[maxn + maxn];
//
//int value[maxn * 4];
//int flag[maxn * 4];
//int numl[maxn * 4];
//int numr[maxn * 4];
//int h[maxn];
//int ecnt;
//int pcnt;
//int deep[maxn];
//int fa[maxn][20];
//int top[maxn];
//int child[maxn];
//int fucksize[maxn];
//int Q[maxn];
//int pos[maxn];
//int L, R;
//
//
//void add_edge(int a, int b, int c) {
//	E[ecnt] = edge(b, h[a], c);
//	h[a] = ecnt++;
//	E[ecnt] = edge(a, h[b], c);
//	h[b] = ecnt++;
//}
//
//void init() {
//	memset(h, -1, sizeof(h));
//	ecnt = 0;
//	pcnt = 0;
//}
//
//void split() {
//	int r = 0;
//	Q[r++] = 1;
//	fa[1][0] = 0;
//	for (int i = 0; i<r; i++) {
//		int u = Q[i];
//		deep[u] = deep[fa[u][0]] + 1;
//		fucksize[u] = 1;
//		child[u] = 0;
//		top[u] = 0;
//		for (int j = h[u]; j != -1; j = E[j].next) {
//			int v = E[j].v;
//			if (v != fa[u][0]) {
//				fa[v][0] = u;
//				Q[r++] = v;
//				color[v] = E[j].w;
//			}
//		}
//	}
//	for (int i = r - 1; i>0; i--) {
//		int v = Q[i];
//		int u = fa[v][0];
//		fucksize[u] += fucksize[v];
//		if (fucksize[v]>fucksize[child[u]])
//			child[u] = v;
//	}
//	for (int i = 0; i<r; i++) {
//		int u = Q[i];
//		if (top[u] == 0)
//			for (int v = u; v; v = child[v]) {
//				top[v] = u;
//				pos[v] = ++pcnt;
//			}
//	}
//}
//
//void pushup(int o) {
//	value[o] = value[o << 1] + value[o << 1 | 1] - (numr[o << 1] == numl[o << 1 | 1]);
//	numl[o] = numl[o << 1];
//	numr[o] = numr[o << 1 | 1];
//}
//
//void pushdown(int o, int l, int r) {
//	if (l == r)
//		return;
//	if (flag[o] != -1) {
//		flag[o << 1] = flag[o << 1 | 1] = flag[o];
//		numl[o << 1] = numl[o << 1 | 1] = flag[o];
//		numr[o << 1] = numr[o << 1 | 1] = flag[o];
//		value[o << 1] = value[o << 1 | 1] = 1;
//		flag[o] = -1;
//	}
//}
//void build() {
//	for (int i = 0; i<maxn * 4; i++) {
//		value[i] = 1;
//		flag[i] = -1;
//	}
//}
//
//void update(int o, int l, int r, int c) {
//	pushdown(o, l, r);
//	if (L <= l&&r <= R) {
//		value[o] = 1;
//		flag[o] = numl[o] = numr[o] = c;
//		return;
//	}
//	int m = (l + r) / 2;
//	if (L <= m)
//		update(o * 2, l, m, c);
//	if (m<R)
//		update(o * 2 + 1, m + 1, r, c);
//	pushup(o);
//}
//
//void update(int l, int r, int c) {
//	if (l>r)
//		return;
//	L = l;
//	R = r;
//	update(1, 1, n, c);
//}
//
//int query(int o, int l, int r) {
//	pushdown(o, l, r);
//	if (L <= l&&r <= R) {
//		return value[o];
//	}
//	int m = (l + r) / 2;
//	int ret = 0;
//	if (L <= m)
//		ret += query(o << 1, l, m);
//	if (m<R)
//		ret += query(o << 1 | 1, m + 1, r);
//	if (L <= m&&m<R)
//		ret -= (numr[o << 1] == numl[o << 1 | 1]);
//	return ret;
//}
//
//int query(int l, int r) {
//	L = l;
//	R = r;
//	int ret = query(1, 1, n);
//	return ret;
//}
//
//int fuckyanse(int o, int l, int r, int f) {
//	if (l == r)
//		return numl[o];
//	pushdown(o, l, r);
//	int m = (l + r) / 2;
//	if (f <= m)
//		return fuckyanse(o * 2, l, m, f);
//	return fuckyanse(o * 2 + 1, m + 1, r, f);
//}
//
//int query(int l) {
//	return fuckyanse(1, 1, n, l);
//}
//
//void work(int u, int v, int c) {
//	int f1 = top[u];
//	int f2 = top[v];
//	while (f1 != f2) {
//		if (deep[f1]<deep[f2]) {
//			swap(u, v);
//			swap(f1, f2);
//		}
//		update(pos[f1], pos[u], c);
//		u = fa[f1][0];
//		f1 = top[u];
//	}
//	if (deep[u]>deep[v])
//		swap(u, v);
//	update(pos[u] + 1, pos[v], c);
//}
//
//int lca(int u, int v) {
//	if (deep[u]<deep[v])
//		swap(u, v);
//	int c = deep[u] - deep[v];
//	for (int i = 0; i<20; i++)
//		if (c&(1 << i))
//			u = fa[u][i];
//	if (u == v)
//		return u;
//	for (int i = 19; i >= 0; i--) {
//		if (fa[u][i] != fa[v][i]) {
//			u = fa[u][i];
//			v = fa[v][i];
//		}
//	}
//	return fa[u][0];
//}
//
//int find_nextroot(int u, int r) {
//	if (u == r)
//		return -1;
//	int c = deep[u] - deep[r] - 1;
//	for (int i = 0; i<20; i++)
//		if (c&(1 << i))
//			u = fa[u][i];
//	return u;
//}
//
//int find(int u, int v) {
//	int ret = 0;
//	while (deep[top[u]]>deep[v]) {
//		ret += query(pos[top[u]], pos[u]);
//		u = top[u];
//		ret -= (query(pos[u]) == query(pos[fa[u][0]]));
//		u = fa[u][0];
//	}
//	return ret + query(pos[v], pos[u]);
//}
//
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r", stdin);
//#endif
//	while (cin >> n >> p) {
//		init();
//		for (int i = 1; i<n; i++) {
//			int a, b, c;
//			scanf("%d%d%d", &a, &b, &c);
//			add_edge(a, b, c);
//		}
//		split();
//		fa[1][0] = 1;
//		for (int fuckiii = 0; fuckiii < 2; fuckiii++) {
//
//		}
//		for (int i = 1; i<20; i++)
//			for (int j = 1; j <= n; j++)
//				fa[j][i] = fa[fa[j][i - 1]][i - 1];
//		build();
//		for (int i = 2; i <= n; i++)
//			update(pos[i], pos[i], color[i]);
//		while (p--) {
//			char op[20];
//			int a, b, c;
//			scanf("%s%d%d", op, &a, &b);
//			if (op[0] == 'Q') {
//				c = lca(a, b);
//				int d = find_nextroot(a, c);
//				int e = find_nextroot(b, c);
//				if (a == b) {
//					cout << "0" << endl;
//				}
//				else if (c == a) {
//					printf("%d\n", find(b, e));
//				}
//				else if (c == b) {
//					printf("%d\n", find(a, d));
//				}
//				else {
//					printf("%d\n", find(a, d) + find(b, e) - (query(pos[d]) == query(pos[e])));
//				}
//			}
//			else {
//				scanf("%d", &c);
//				work(a, b, c);
//			}
//		}
//	}
//#ifdef __ACM
//	int iwannastop;
//	scanf("%d", &iwannastop);
//	system("pause");
//#endif
//}
//
//
//
