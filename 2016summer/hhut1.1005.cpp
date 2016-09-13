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
//#define INF 0x3f3f3f3f
//#define MAXN 100010
//using namespace std;
//#define LL long long
//
//#define SC1(X) scanf("%d", &X)
//#define SC2(X, Y) scanf("%d %d", &X, &Y)
//
//int T, cas = 0;
//char s[MAXN];
//int cnt[MAXN];
//int tree[MAXN * 4];
//
//void build(int l, int r, int root) {
//	if (l == r) {
//		tree[root] = cnt[l];
//		return;
//	}
//	int mid = (l + r) / 2;
//	build(l, mid, root * 2);
//	build(mid + 1, r, root * 2 + 1);
//	tree[root] = min(tree[root * 2 + 1], tree[root * 2]);
//}
//
//int query(int fr, int to, int l, int r, int root) {
//	if (fr <= l && r <= to) {
//		return tree[root];
//	}
//	else if(fr > r || to < l){
//		return INF;
//	}
//	else {
//		int mid = (l + r) / 2;
//		return min(query(fr, to, l, mid, root * 2) , query(fr, to, mid + 1, r, root * 2 + 1));
//	}
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r", stdin);
//#endif
//	SC1(T);
//	int n, m;
//	while (T--) {
//		cas++;
//		printf("Case #%d:\n", cas);
//		SC2(n, m);
//		scanf("%s", s + 1);
//		memset(tree, 0, sizeof tree);
//		memset(cnt, 0, sizeof cnt);
//		for (int i = 1; i <= n; i++)
//		{
//			s[i] = (s[i] == '(' ? 1 : -1);
//			cnt[i] = cnt[i - 1] + s[i];
//		}
//		build(1, n, 1);
//		while (m--) {
//			int a, b;
//			SC2(a, b);
//			// a, bÒª½»»», ÂèµÄÖÇÕÏ
//			if (a>b)
//				swap(a, b);
//			if (cnt[n] != 0) {
//				puts("No");
//			}
//			else {
//				if (s[a] == s[b]) {
//					puts("Yes");
//				}
//				else if (s[a] == -1) {
//					puts("Yes");
//				}
//				else {
//					int q = query(a, b - 1, 1, n, 1);
//					if (q < 2) {
//						puts("No");
//					}
//					else {
//						puts("Yes");
//					}
//				}
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
