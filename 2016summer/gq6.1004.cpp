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
//#define MAXN 210
//using namespace std;
//#define LL long long
//#define LD long double
//typedef pair<int, int> pii;
//
//int T, cas = 0;
//int R, C, B;
//
//int dix[] = { 1, 0, -1, 0 };
//int diy[] = { 0, 1 , 0, -1};
//
//struct Info {
//	int end;
//	bool isbad;
//	Info(int end, bool isbad) : end(end), isbad(isbad) {
//
//	}
//};
//
//pair<int, int> coco[MAXN];
//vector<int> badx, bady;
//vector<Info> mx, my;
//int m[MAXN * 2][MAXN * 2];
//bool vis[MAXN * 2][MAXN * 2];
//queue<pair<int, int>> Q;
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");    streambuf *cinbackup;      cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	scanf("%d", &T);
//	while (T--) {
//		cas++;
//		printf("Case #%d:\n", cas);
//		badx.clear(); bady.clear(); memset(coco, 0, sizeof coco); memset(m, 0, sizeof m); memset(vis, 0, sizeof vis);
//		while (!Q.empty()) {
//			Q.pop();
//		}
//		mx.clear(); my.clear();
//		scanf("%d%d", &R, &C);
//		scanf("%d", &B);
//		for (int i = 0; i < B; i++)
//		{
//			scanf("%d%d", &coco[i].first, &coco[i].second);
//			badx.push_back(coco[i].first);
//			bady.push_back(coco[i].second);
//		}
//		sort(badx.begin(), badx.end()); sort(bady.begin(), bady.end());
//		for (int i = 0; i < B; i++)
//		{
//			int x = coco[i].first, y = coco[i].second;
//			if (!mx.empty() && mx[mx.size() - 1].isbad) {
//				mx.push_back(Info(x, true));
//			}
//			else {
//				mx.push_back(Info(x - 1, false));
//				mx.push_back(Info(x, true));
//			}
//			if (!my.empty() && my[my.size() - 1].isbad) {
//				my.push_back(Info(y, true));
//			}
//			else {
//				my.push_back(Info(y - 1, false));
//				my.push_back(Info(y, true));
//			}
//		}
//		for (int i = 0; i < mx.size(); i++)
//		{
//			for (int j = 0; j < my.size(); j++)
//			{
//				if (mx[i].isbad && my[i].isbad) {
//					m[i][j] = 1;
//				}
//			}
//		}
//		if (m[1][1] == 1) {
//			Q.push(make_pair(mx.size() - 1, my.size() - 1));
//			vis[mx.size() - 1][my.size() - 1] = 1;
//		}
//		else {
//			Q.push(make_pair(1, 1));
//			vis[1][1] = 1;
//		}
//		
//		// bfs
//		while (!Q.empty()) {
//			pii pp = Q.front();
//			Q.pop();
//			for (int dire = 0; dire < 4; dire++)
//			{
//				int newx = pp.first + dix[dire];
//				int newy = pp.second + diy[dire];
//				if (!vis[newx][newy]) {
//
//				}
//			}
//		}
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}