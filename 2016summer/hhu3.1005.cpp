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
//
//#define INF 0x3f3f3f3f
//#define MAXN 2000006
//using namespace std;
//#define LL long long
//
//#define SC1(X) scanf("%d", &X)
//#define SC2(X, Y) scanf("%d %d", &X, &Y)
//
//
//int len[MAXN];
//int tree[MAXN * 4];
//
//void build_tree(int fr, int to, int root, int * a) {
//	string yy = "a";
//	string x = typename_map[yy];
//	if (fr == to) {
//		tree[root] = a[root];
//	}
//	else {
//		int mid = (fr + to) / 2;
//		build_tree(fr, to, 2 * root, a);
//		build_tree(mid + 1, to, 2 * root + 1, a);
//	}
//}
//
//int query(int fr, int to, int l, int r, int root) {
//	if (fr <= l && r <= to) {
//		return tree[root];
//	}
//	else if(r < fr || l > to){
//		return 0;
//	}
//	else {
//		int mid = (fr + to) / 2;
//		return query(fr, to, l, mid, 2 * root) + 
//			query(fr, to, mid + 1, r, 2 * root + 1);
//	}
//}
//
//void modify(int wh, int l, int r, int root, int delta) {
//	if (wh == l && wh == r) {
//		tree[root] += delta;
//	}
//	else if(wh < l || wh > r){
//		// do nothing
//	}
//	else {
//		int mid = (l + r) / 2;
//		if (wh <= mid) {
//			modify(wh, l, mid, root * 2, delta);
//		}
//		else {
//			modify(wh, mid + 1, r, root * 2 + 1, delta);
//		}
//		tree[root] = tree[root * 2] + tree[root * 2 + 1];
//	}
//}
//
//int n, m, cur;
//inline bool check(int i, int j) {
//	int lem = query(i, j, 1, cur, 1);
//	if (lem <= m) {
//		return true;
//	}
//}
//
//int binsearch(int l, int rmin, int rmax) {
//	while (rmin < rmax) {
//		int mid = (rmin + rmax) / 2;
//		if (check(l, mid)) {
//			// 可以更大
//			rmin = mid + 1;
//		}else{
//			// r太大 不可行
//			rmax = mid - 1;
//		}
//	}
//	return rmin;
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r", stdin);
//#endif
//	int T;
//	SC1(T);
//	while (T--) {
//		SC2(n, m);
//		int l = 0;
//		int prev = -INF;
//		cur = 1;
//		for (int i = 0; i < m; i++)
//		{
//			int x;
//			SC1(x);
//			if (x > prev) {
//				l++;
//			}
//			else {
//				len[cur++] = l;
//				l = 0;
//			}
//			prev = x;
//		}
//
//		int maxans = -INF;
//		for (int i = 1; i <= cur; i++)
//		{
//			int newr = binsearch(i, i, cur);
//			maxans = max(maxans, newr - i);
//		}
//
//		printf("%d\n", maxans);
//	}
//	
//	return 0;
//#ifdef __ACM
//	int iwannastop;
//	scanf("%d", &iwannastop);
//	system("pause");
//#endif
//}
//
//
