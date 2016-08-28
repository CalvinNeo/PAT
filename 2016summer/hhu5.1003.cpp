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
//
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
//#define MAXN 2010
//using namespace std;
//#define LL long long
//
//#define SC1(X) scanf("%d", &X)
//#define SC2(X, Y) scanf("%d %d", &X, &Y)
//
//bool vis[MAXN];
//int con[MAXN];
//int e[MAXN][MAXN];
//int K, M, N;
//
//bool match(int s) {
//	for (int i = 1; i <= M; i++)
//	{
//		if (!vis[i] && e[i][s]) {
//			vis[i] = true;
//			if (con[i] == 0 || match(con[i])) {
//				con[i] = s;
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r", stdin);
//#endif
//	while (scanf("%d", &K) != EOF) {
//		if (K == 0)return 0;
//		SC2(M, N);
//		int a, b;
//		memset(e, 0, sizeof e);
//		for (int i = 0; i < K; i++)
//		{
//			SC2(a, b);
//			e[a][b] = true;
//			// no e[a][b] = true;
//		}
//		int m = 0;
//		memset(con,0, sizeof con);
//		for (int i = 1; i <= N; i++)
//		{
//			memset(vis, 0, sizeof vis);
//			if (match(i)) {
//				m++;
//			}
//		}
//		printf("%d\n", m);
//	}
//#ifdef __ACM
//	int iwannastop;
//	scanf("%d", &iwannastop);
//	system("pause");
//#endif
//}
//
//
