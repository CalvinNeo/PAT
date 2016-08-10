////#include <iostream> 
////#include <fstream>
////#include <vector>
////#include <queue>
////#include <cstring>
////#include <string>
////#include <algorithm>
////#include <stack>
////#include <functional>
////#include "stdlib.h" 
////#include "time.h"
////#include <set>
////#include <map>
////#include <queue>
////#include <numeric>
////
////inline int fastread() {
////	char c;
////	int ret = 0;
////	int sgn = 1;
////	do { c = getchar(); } while ((c < '0' || c > '9') && c != '-');
////	if (c == '-') sgn = -1; else ret = c - '0';
////	while ((c = getchar()) >= '0' && c <= '9') ret = ret * 10 + (c - '0');
////	return sgn * ret;
////}
////
////#define INF 0x3f3f3f3f
////#define MAXN 100006
////using namespace std;
////#define LL long long
////
////vector<int> m[MAXN];
////int vis[MAXN];
////int cnt;
////int nedge;
////
////void dfs(int s) {
////	vis[s] = 1;
////	for (int i = 0; i < m[s].size(); i++)
////	{
////		if (!vis[m[s][i]]) {
////			cnt++;
////			vis[m[s][i]] = 1;
////			dfs(m[s][i]);
////		}
////	}
////}
////
////int main() {
////#ifdef __ACM
////	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
////#endif
////	int i, j;
////	int st;
////	while (scanf("%d%d", &i, &j) != EOF) {
////		st = i;
////		for (int i = 0; i < MAXN; i++)
////		{
////			m[i].clear();
////		}
////		cnt = 0;
////		nedge = 0;
////		while (i != 0 && j != 0) {
////			m[i].push_back(j);
////			m[j].push_back(i);
////			scanf("%d%d", &i, &j);
////			nedge++;
////		}
////		memset(vis, 0, sizeof(vis));
////		dfs(st);
////		//printf("--- %d %d\n", nedge, cnt);
////		if (cnt == nedge) {
////			printf("Yes\n");
////		}
////		else {
////			printf("No\n");
////		}
////	}
////#ifdef __ACM
////	system("pause");
////#endif
////}
////
////
//
//
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
//#include <array>
//#include <queue>
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
//#define MAXN 100006
//using namespace std;
//#define LL long long
//#define NOP 1;
//
//int fa[MAXN];
//int vis[MAXN];
//
//void builddj() {
//	for (int i = 0; i < MAXN; i++)
//	{
//		fa[i] = i;
//	}
//}
//int find(int x) {
//	while (x != fa[x]) {
//		x = fa[x];
//	}
//	return x;
//}
//bool join(int i, int j) {
//	int fi = find(i), fj = find(j);
//	if (fi == fj) {
//		return false;
//	}
//	else {
//		fa[fi] = fj;
//		return true;
//	}
//}
//inline int min3(int st, int i, int j) {
//	return i < j ? (st < i ? st : i) : (st < j ? st : j);
//}
//inline int max3(int st, int i, int j) {
//	return i > j ? (st > i ? st : i) : (st > j ? st : j);
//}
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r+", stdin);
//#endif
//	int i, j;
//	int st = INF, ed = -INF;
//	while (scanf("%d%d", &i, &j) != EOF) {
//		if (i == -1 && j == -1)
//			return 0;
//		if (i == 0 && j == 0) {
//			puts("Yes");
//			continue;
//		}
//		int vcnt = 0;
//		builddj();
//		bool flag = false;
//		memset(vis, 0, sizeof(vis));
//		while (i != 0 && j != 0) {
//			if (!join(i, j)) {
//				flag = true;
//			}
//			st = min3(st, i, j);
//			ed = max3(ed, i, j);
//			if (!vis[i]) {
//				vcnt++;
//			}
//			if (!vis[j]) {
//				vcnt++;
//			}
//			vis[i] = 1;
//			vis[j] = 1;
//			scanf("%d%d", &i, &j);
//		}
//		int cnt = 0;
//		if(!flag)
//		for (int i = st; i <= ed; i++)
//		{
//			if (vis[i] && fa[i] == i) {
//				cnt++;
//			}
//		}
//
//		if (!flag && cnt == 1) {
//			printf("Yes\n");
//		}
//		else {
//			printf("No\n");
//		}
//
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
//
