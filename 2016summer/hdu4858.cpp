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
//int T, cas;
//LL ans = 0;
//int n, m;
//vector<int> eg[MAXN];
//int pw[MAXN];
//
//int main() {
//	scanf("%d", &T);	
//	while (T--) {
//		scanf("%d%d", &n, &m);
//		for (int i = 0; i <= n; i++)
//		{
//			eg[i].clear();
//		}
//		memset(pw, 0, sizeof pw);
//		int a, b;
//		for (int i = 0; i < m; i++)
//		{
//			scanf("%d%d", &a, &b);
//			eg[a].push_back(b);
//			eg[b].push_back(a);
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
//				for (int i = 0; i < eg[a].size(); i++)
//				{
//					ans += pw[eg[a][i]];
//				}
//				printf("%d\n", ans);
//			}
//		}
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}