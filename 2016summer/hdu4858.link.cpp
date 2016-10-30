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
//#include <numeric>
//#include <cctype>
//#include <cmath>
//
//#define INF 0x3f3f3f3f
//#define MAX_RESULT 100100
//#define MAXN 100100
//using namespace std;
//#define LL long long
//#define ULL unsigned long long
//#define LD long double
//typedef pair<int, int> pii;
//
//struct Edge {
//	int to;
//	int next;
//};
//
//int T, cas;
//LL ans = 0;
//int n, m;
//int head[MAXN];
//Edge eg[2 * MAXN];
//int pw[MAXN];
//
//void addedge(int u, int v, int eid) {
//	// there is edge from u to v
//	eg[eid].to = v;
//	eg[eid].next = head[u];
//	head[u] = eid;
//}
//
//int main() {
//	scanf("%d", &T);	
//	while (T--) {
//		scanf("%d%d", &n, &m);
//		memset(head, 0, sizeof head);
//		memset(pw, 0, sizeof pw);
//		memset(eg, 0, sizeof eg);
//		int a, b;
//		int tote = 0;
//		for (int i = 0; i < m; i++)
//		{
//			scanf("%d%d", &a, &b);
//			addedge(a, b, tote++);
//			addedge(b, a, tote++);
//		}
//		int Q, cmd;
//		scanf("%d", &Q);
//		for (int i = 0; i < Q; i++)
//		{
//			scanf("%d", &cmd);
//			if (cmd == 0) {
//				scanf("%d%d", &a, &b);
//				pw[a] += b;
//			}
//			else {
//				scanf("%d", &a);
//				int ans = 0;
//				for (int i = head[a]; i != 0; i = eg[i].next)
//				{
//					ans += pw[eg[i].to];
//				}
//				printf("%d\n", ans);
//			}
//		}
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}