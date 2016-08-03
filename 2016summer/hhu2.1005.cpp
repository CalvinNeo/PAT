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
//#define MAXHASH 20000
//using namespace std;
//#define LL long long
//
//int a[MAXN][6];
//vector<int> hs[MAXHASH];
//
//inline bool cmp(int i, int j) {
//	int s2;
//	bool able = false;
//	for (int s2 = 0; s2 < 6; s2++)
//	{
// 		if (a[j][s2] == a[i][0]) {
//			for (int k = 0; k < 6; k++)
//			{
//				if (a[j][(s2 + k) % 6] != a[i][k % 6]) {
//					goto NO_ABLE;
//				}
//			}
//			return true;
//		NO_ABLE:
//			for (int k = 0; k < 6; k++)
//			{
//				if (a[j][(s2 + k) % 6] != a[i][(6 - k) % 6]) {
//					goto NO_ABLE2;
//				}
//			}
//			return true;
//		NO_ABLE2:
//			int end;
//		}
//	}
//	return false;
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int s = 0;
//		for (int j = 0; j < 6; j++)
//		{
//			scanf("%d", &a[i][j]) ;
//			s += a[i][j];
//			s %= MAXHASH;
//		}
//		hs[s].push_back(i);
//	}
//	bool flag = false;
//	for (int i = 0; i < MAXHASH; i++)
//	{
//		for (int j = 0; j < hs[i].size(); j++)
//		{
//			for (int k = j + 1; k < hs[i].size(); k++)
//			{
//				if (cmp(hs[i][j], hs[i][k])) {
//					flag = true;
//					goto END;
//				}
//			}
//		}
//	}
//END:
//	if (flag) {
//		cout << "Twin snowflakes found." << endl;
//	}
//	else {
//		cout << "No two snowflakes are alike." << endl;
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
//
