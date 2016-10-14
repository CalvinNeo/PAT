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
//#define MAXCOOR 300
//#define MAXN 40
//using namespace std;
//#define LL long long
//#define LD long double
//typedef pair<int, int> pii;
//
//int T, cas = 0;
//
//int N;
//
//
//struct RECT {
//	int x1;
//	int x2;
//	int y1;
//	int y2;
//	RECT(int x1, int y1, int x2, int y2) {
//		this->x1 = min(x1, x2);
//		this->y1 = min(y1, y2);
//		this->x2 = max(x1, x2);
//		this->y2 = max(y1, y2);
//	}
//	RECT() {
//		x1 = 0; x2 = 0; y1 = 0; y2 = 0;
//	}
//};
//
//inline bool pointin(const RECT & r, int x, int y) {
//	if (x <= r.x2 && x >= r.x1 && y <= r.y2 && y >= r.y1) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//inline bool intersect(const RECT & r1, const RECT & r2) {
//	if (pointin(r1, r2.x1, r2.y1)) return true;
//	if (pointin(r1, r2.x1, r2.y2)) return true;
//	if (pointin(r1, r2.x2, r2.y1)) return true;
//	if (pointin(r1, r2.x2, r2.y2)) return true;
//
//	if (pointin(r2, r1.x1, r1.y1)) return true;
//	if (pointin(r2, r1.x1, r1.y2)) return true;
//	if (pointin(r2, r1.x2, r1.y1)) return true;
//	if (pointin(r2, r1.x2, r1.y2)) return true;
//	return false;
//}
//
//inline bool totalin(const RECT & r1, const RECT & r2) {
//	if (r1.x1 < r2.x1 && r1.x2 > r2.x2 && r1.y1 < r2.y1 && r1.y2 > r2.y2) return true;
//	if (r2.x1 < r1.x1 && r2.x2 > r1.x2 && r2.y1 < r1.y1 && r2.y2 > r1.y2) return true;
//	return false;
//}
//
//
//inline bool edgein(const RECT & r1, const RECT & r2) {
//	if (r1.x1 == r2.x1 || r1.x2 == r2.x1 || r1.x1 == r2.x2 || r1.x2 == r2.x2) {
//		if (r1.y1 >= r2.y1 &&r1.y1 <= r2.y2 || r2.y1 >= r1.y1&&r2.y1 <= r1.y2) {
//			return true;
//		}
//	}
//	if (r1.y1 == r2.y1 || r1.y2 == r2.y1 || r1.y1 == r2.y2 || r1.y2 == r2.y2) {
//		if (r1.x1 >= r2.x1 &&r1.x1 <= r2.x2 || r2.x1 >= r1.x1&&r2.x1 <= r1.x2) {
//			return true;
//		}
//	}
//	return false;
//}
//
//inline bool isrect(const RECT & r) {
//	if (r.x2 > r.x1 && r.y2 > r.y1) return true;
//	return false;
//}
//
//inline bool able(const RECT & r1, const RECT & r2) {
//	//if (totalin(r1, r2)) return true;
//	if (!isrect(r1) || !isrect(r2)) {
//		return false;
//	}
//	if (edgein(r1, r2)) {
//		return false;
//	}
//	if (intersect(r1, r2)) {
//		return false;
//	}
//	return true;
//}
//
//inline int area(const RECT & r1) {
//	return abs((r1.x2 - r1.x1) * (r1.y2 - r1.y1));
//}
//
//
//vector<int> corx, cory;
//bool used[MAXCOOR][MAXCOOR];
//bool hit[MAXCOOR][MAXCOOR];
//vector<RECT> vecrect;
//
//int main() {
//	//cout << "---- " << able(RECT(0, 0, 2, 1), RECT(1, 1, 3, 2)) << endl;
//	while (scanf("%d", &N) != EOF) {
//		if (N == 0)return 0;
//		corx.clear();
//		cory.clear();
//		vecrect.clear();
//		memset(hit, 0, sizeof hit);
//		memset(used, 0, sizeof used);
//
//		for (int i = 1; i <= N; i++)
//		{
//			int x, y;
//			scanf("%d%d", &x, &y);
//			corx.push_back(x);
//			cory.push_back(y);
//			hit[x][y] = true;
//		}
//
//		sort(corx.begin(), corx.end());
//		sort(cory.begin(), cory.end());
//		int cntx = unique(corx.begin(), corx.end()) - corx.begin();
//		int cnty = unique(cory.begin(), cory.end()) - cory.begin();
//		for (int i1 = 0; i1 < cntx; i1++)
//		{
//			for (int i2 = i1 + 1; i2 < cntx; i2++)
//			{
//				for (int j1 = 0; j1 < cnty; j1++)
//				{
//					for (int j2 = j1 + 1; j2 < cnty; j2++)
//					{
//						int x1 = corx[i1], x2 = corx[i2];
//						int y1 = cory[j1], y2 = cory[j2];
//						if (hit[x1][y1] && hit[x1][y2] && hit[x2][y1] && hit[x2][y2]
//							/*&& !used[x1][y1] && !used[x1][y2] && !used[x2][y1] && !used[x2][y2]*/) {
//							vecrect.push_back(RECT(x1, y1, x2, y2));
//						}
//					}
//				}
//			}
//		}
//		int maxa = 0;
//		for (int i = 0; i < vecrect.size(); i++)
//		{
//			for (int j = i + 1; j < vecrect.size(); j++)
//			{
//				if (totalin(vecrect[i], vecrect[j])) {
//					maxa = max(maxa, max(area(vecrect[i]), area(vecrect[j])));
//				}
//				else {
//					if (able(vecrect[i], vecrect[j])) {
//						maxa = max(maxa, area(vecrect[i]) + area(vecrect[j]));
//					}
//				}
//
//			}
//		}
//		if (maxa == 0) {
//			puts("imp");
//		}
//		else {
//			printf("%d\n", maxa);
//		}
//	}
//}
//
///*
//13
//0 0
//0 1
//0 2
//1 0
//1 1
//2 0
//2 2
//2 3
//2 4
//5 0
//5 2
//5 3
//5 4
//8
//0 0
//2 0
//0 2
//2 2
//1 2
//3 2
//1 3
//3 3
//8
//0 0
//1 0
//0 1
//1 1
//0 2
//1 2
//0 3
//1 3
//0
//*/