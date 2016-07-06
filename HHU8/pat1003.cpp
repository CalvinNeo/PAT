////#define seetrue
//#ifndef seetrue
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
//
//#define INF 502
//using namespace std;
//#define LL long long
//
//int N; // <= 500
//int M; // raods
//int C1, C2;
//int teams[INF];
//int v[INF][INF];
//int dis[INF];
//int cnt[INF];
//int tot[INF];
//bool vis[INF];
//const int MAXN = 1 << 25;
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//
//	scanf("%d %d %d %d", &N, &M, &C1, &C2);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", teams + i);
//	}
//
//
//	//for (int i = 0; i < N; i++) {
//	//	for (int j = 0; j < N; j++) {
//	//		//important
//	//		if (i == j)
//	//			v[i][j] = 0;
//	//		else
//	//			v[i][j] = MAXN;
//	//	}
//	//}
//	memset(v, 0, sizeof(v));
//
//
//	for (int i = 0; i < M; i++)
//	{
//		int c1, c2, l;
//		scanf("%d %d %d", &c1, &c2, &l);
//		v[c1][c2] = l;
//		v[c2][c1] = l;
//	}
//
//
//	memset(vis, false, sizeof(vis));
//	//for (int i = 0; i < N; i++)
//	//{
//	//	dis[i] = v[C1][i];
//	//}
//
//	// 这边不能用memset
//	for (int i = 0; i < N; i++)
//	{
//		// 初始化除了起点其他都是不可达的
//		dis[i] = -1;
//		cnt[i] = 0;
//		tot[i] = 0;
//	}
//	//memset(dis, MAXN, sizeof(dis));
//	//memset(cnt, 0, sizeof(cnt));
//	//memset(tot, 0, sizeof(tot));
//
//	// important
//	dis[C1] = 0;
//	cnt[C1] = 1;
//	tot[C1] = teams[C1];
//	for (int loop = 0; loop < N; loop++) {
//		int minindex = -1;
//		for (int i = 0; i < N; i++)
//		{
//			// important in "|| xxx == -1"
//			if (!vis[i] && ( (dis[i] < dis[minindex]) || minindex==-1) && dis[i] != -1) {
//				minindex = i; //找到距离s最近的一点
//			}
//		}
//		
//		if (minindex != -1)
//		{
//			vis[minindex] = true;
//			for (int i = 0; i < N; i++) {
//				if (!vis[i] && v[i][minindex] ) {
//					int newdis = dis[minindex] + v[i][minindex];
//					// impoertant must "|| dis[i] == -"
//					if (newdis < dis[i] || dis[i] == -1) {
//						cnt[i] = cnt[minindex];
//						// 下面错了
//						//tot[i] += teams[i];
//						tot[i] = tot[minindex] + teams[i];
//						dis[i] = newdis;
//					}
//					else if (newdis == dis[i]) {
//						cnt[i] += cnt[minindex];
//						tot[i] = max(tot[i], teams[i] + tot[minindex]);
//					}
//				}
//			}
//		}
//
//	}
//	printf("%d %d\n", cnt[C2], tot[C2]);
//#ifdef __ACM
//	std::system("pause");
//#endif
//}
//#endif // !seetrue
//
//
//
//#ifdef seetrue
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
//
//#define INF 502
//using namespace std;
//#define LL long long
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	int N; // <= 500
//	int M; // raods
//	int C1, C2;
//	int teams[INF];
//	int v[INF][INF];
//	int dis[INF];
//	int cnt[INF];
//	int tot[INF];
//	bool vis[INF];
//	const int MAXN = 1 << 25;
//
//	scanf("%d %d %d %d", &N, &M, &C1, &C2);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", teams + i);
//	}
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			//important
//			if (i == j)
//				v[i][j] = 0;
//			else
//				v[i][j] = -1;
//		}
//	}
//	for (int i = 0; i < M; i++)
//	{
//		int c1, c2, l;
//		scanf("%d %d %d", &c1, &c2, &l);
//		v[c1][c2] = l;
//		v[c2][c1] = l;
//	}
//	// dij
//	memset(dis, -1, sizeof(dis));
//	memset(cnt, 0, sizeof(cnt));
//	memset(tot, 0, sizeof(tot));
//	memset(vis, false, sizeof(vis));
//	for (int i = 0; i < N; i++)
//	{
//		dis[i] = v[C1][i];
//	}
//
//	// important
//	cnt[C1] = 1;
//	tot[C1] = teams[C1];
//	for (int loop = 0; loop < N; loop++) {
//		int minindex = -1;
//		for (int i = 0; i < N; i++)
//		{
//			// important in "|| xxx == -1"
//			if (!vis[i] && dis[i] != -1 && (dis[i] < dis[minindex] || minindex == -1)) {
//				minindex = i;
//			}
//		}
//
//		if (minindex != -1)
//		{
//			vis[minindex] = true;
//			for (int i = 0; i < N; i++) {
//				if (!vis[i] && v[i][minindex] != -1) {
//					int newdis = dis[minindex] + v[i][minindex];
//					//printf("minindex %d i %d dis[minindex] %d v[i][minindex] %d\n", minindex, i, dis[minindex], v[i][minindex]);
//					if (newdis < dis[i]) {
//						cnt[i] = cnt[minindex];
//						//tot[i] = teams[i];
//						tot[i] += teams[i];
//						dis[i] = newdis;
//					}
//					else if (newdis == dis[i]) {
//						cnt[i] += cnt[minindex];
//						tot[i] = max(tot[i], teams[i] + tot[minindex]);
//					}
//				}
//			}
//		}
//	}
//	std::cout << cnt[C2] << " " << tot[C2] << endl;
//#ifdef __ACM
//	std::system("pause");
//#endif
//}
//#endif