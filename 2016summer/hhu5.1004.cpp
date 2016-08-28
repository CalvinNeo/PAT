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
//#define MAXN 10010
//using namespace std;
//#define LL long long
//
//#define SC1(X) scanf("%d", &X)
//#define SC2(X, Y) scanf("%d %d", &X, &Y)
//
//int M, N;
//vector<int> m[MAXN];
//int dfn[MAXN];
//int low[MAXN];
//vector<int> s;
//int linked[MAXN];
//bool instack[MAXN];
//int index;
//int blockid;
//
//void tarjan(int u) {
//	dfn[u] = low[u] = ++index;
//	s.push_back(u);
//	instack[u] = true;
//	for (int iter = 0; iter < m[u].size(); iter++)
//	{
//		int v = m[u][iter];
//		if (!dfn[v]) {
//			tarjan(v);
//			low[u] = min(low[u], low[v]);
//		}
//		else if(instack[v]){
//			// backward edge
//			low[u] = min(low[u], dfn[v]);
//		}
//	}
//	if (low[u] == dfn[u]) {
//		blockid++;
//		int x;
//		do
//		{
//			x = s.back();
//			instack[x] = false;
//			linked[x] = blockid;
//			s.pop_back();
//		} while (x != u);//输出联通分量
//	}
//	return;
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r", stdin);
//#endif
//	while (SC2(N, M) != EOF ) {
//		if (N == 0 && M == 0) {
//			return 0;
//		}
//
//		int a, b;
//		for (int i = 0; i < MAXN; i++)
//		{
//			m[i].clear();
//		}
//		memset(linked, 0, sizeof linked);
//		memset(dfn, 0, sizeof dfn);
//		memset(instack, 0, sizeof instack);
//		memset(low, 0, sizeof low);
//		index = 0;
//		blockid = 0;
//		s.clear();
//		for (int i = 0; i < M; i++)
//		{
//			SC2(a, b);
//			m[a].push_back(b);
//		}
//		for (int i = 1; i <= N; i++)
//		{
//			if (!dfn[i]) {
//				tarjan(i);
//			}
//		}
//		if (blockid == 1) {
//			puts("Yes");
//		}
//		else {
//			puts("No");
//		}
//	}
//#ifdef __ACM
//	int iwannastop;
//	scanf("%d", &iwannastop);
//	system("pause");
//#endif
//}
