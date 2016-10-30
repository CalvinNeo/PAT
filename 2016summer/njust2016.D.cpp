//#include <iostream> 
//#include <fstream>
//#include <vector>
//#include <queue>
//#include <cstring>
//#include <string>
//#include <algorithm>
//#include <stack>
//#include "stdlib.h" 
//#include "time.h"
//#include <set>
//#include <map>
//
//#define INF 5000
//#define MAXINF 10000001
//#define LL long long
//using namespace std;
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("111.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	int N;
//
//	while (scanf("%d", &N) != EOF) {
//		//int H, W;
//		//int maxH = 0, maxW = 0, water = 0, curH = 0;
//		//for (int i = 0; i < N; i++)
//		//{
//		//	cin >> H >> W;
//		//	if (H > curH) {
//		//		water += maxW * (H - curH) + W;
//		//	}
//		//	else {
//		//		water += W;
//		//	}
//		//	maxH = max(maxH, H);
//		//	curH = H;
//		//	maxW += W;
//		//}
//		//cout << water << endl;
//
//		LL H, W;
//		LL maxH = 0, maxW = 0, area = 0;
//		vector<LL> vh, vw;
//		if (N == 0) {
//			cout << 1 << endl;
//		}
//		else {
//			for (int i = 0; i < N; i++)
//			{
//				cin >> H >> W;
//				vh.push_back(H);
//				vw.push_back(W);
//				maxH = (LL)max(maxH, H);
//				maxW += W;
//			}
//			for (int i = 0; i < vh.size(); i++)
//			{
//				//if (vh[i] == 0)
//				//{
//				//	area += 1;
//				//}
//				//else {
//					area += vw[i] * (maxH + 1 - vh[i]);
//				//}
//			}
//			cout << area << endl;
//
//		}
//	}
//
//
//
//#ifdef __ACM
//	system("pause");
//#endif
//}
