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
//#define INF 0x3f3f3f3f
//#define MAXN 100005
//using namespace std;
//#define LL long long
//
////int c[MAXN];
//vector<int> odds;
//vector<int> evens;
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	int T;
//	while (cin >> T) {
//		int n;
//		int s = 0;
//		cin >> n;
//		odds.clear();
//		evens.clear();
//		for (int i = 0; i < n; i++)
//		{
//			int tmp;
//			cin >> tmp;
//			s += tmp;
//			if (tmp & 1) {
//				// odd
//				odds.push_back(tmp);
//			}
//			else {
//				evens.push_back(tmp);
//			}
//		}
//		int left, right, mid;
//		left = 1;
//		if (odds.size() == 0) {
//			right = 1;
//		}
//		else {
//			right = s / odds.size();
//		}
//		while (left < right) {
//			mid = (left + right) >> 1;
//			// mid表示此时的最短回文串长度
//		}
//		cout << right << endl;
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
