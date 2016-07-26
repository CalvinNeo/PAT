//#include <iostream> 
//#include <fstream>
//#include <vector>
//#include <queue>
//#include <iomanip>
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
//#define INF 0x3f3f3f3f
//#define MAXN 100005
//using namespace std;
//#define LL long long
//#define USE_VEC
//
//#ifdef USE_VEC
//vector<pair<int, int>> xdiff[MAXN];
//vector<pair<int, int>> ydiff[MAXN];
//#else
//int xdiff[MAXN];
//int ydiff[MAXN];
//#endif
//int x[MAXN];
//int y[MAXN];
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	int T;
//	cin >> T;
//	while (T--) {
//		int N, M, a, b;
//		cin >> N >> M;
//#ifdef USE_VEC
//		for (int i = 0; i < M; i++) {
//			xdiff[i].clear();
//			ydiff[i].clear();
//			x[i] = -1;
//			y[i] = -1;
//		}
//#else
//		memset(xdiff, 0, sizeof(xdiff));
//		memset(ydiff, 0, sizeof(ydiff));
//		fill(x, x + MAXN, -1);
//		fill(y, y + MAXN, -1);
//#endif
//		for (int i = 0; i < N; i++)
//		{
//			cin >> x[i] >> y[i];
//			for (int j = 0; j < i; j++)
//			{
//				int index = labs(x[i] - x[j]);
//
//#ifdef USE_VEC
//				xdiff[index].push_back(pair<int, int>(i, j));
//#else
//				xdiff[index]++;
//#endif
//				index = labs(y[i] - y[j]);
//#ifdef USE_VEC
//				ydiff[index].push_back(pair<int, int>(i, j));
//#else
//				ydiff[index]++;
//#endif
//			}
//		}
//		int able = false;
//		for (int mdis = 0; mdis <= 2 * M; mdis++)
//		{
//			int hit = 0;
//			for (int xpart = 0; xpart <= M; xpart++)
//			{
//				int ypart = mdis - xpart;
//
//#ifdef USE_VEC
//				if (ypart <= M && xdiff[xpart].size() >= 1 && ydiff[ypart].size() >= 1) {
//					for (int t = 0; t < xdiff[xpart].size(); t++)
//					{
//						for (int s = 0; s < ydiff[ypart].size(); s++)
//						{
//							//printf("Point %d %d and Point %d %d", x[]);
//							if ((xdiff[xpart][t].first == ydiff[ypart][s].first && xdiff[xpart][t].second == ydiff[ypart][s].second)
//								|| (xdiff[xpart][t].first == ydiff[ypart][s].second && xdiff[xpart][t].second == ydiff[ypart][s].first)
//								) {
//								hit++;
//							}
//						}
//					}
//				}
//#else
//				if (xdiff[xpart] >= 1 && ydiff[ypart] >= 1) {
//					//printf("> %d + %d = %d\n", xpart, ypart, mdis);
//					hit++;
//				}
//#endif
//			}
//			if (hit >= 2) {
//				able = true;
//				goto PRINT;
//			}
//		}
//	PRINT:
//		if (able) {
//			cout << "YES" << endl;
//		}
//		else {
//			cout << "NO" << endl;
//		}
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
