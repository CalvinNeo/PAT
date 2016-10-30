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
//#define INF 800
//using namespace std;
//#define LL long long
//
//
//
//int main() {
//#ifdef __ACM
//	ifstream fin("111.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	int cas = 1;
//	int T;
//	while (cin >> T)
//	{
//		while (T--) {
//			int N;
//			int morethan1 = 0;
//			cin >> N;
//			int a;
//			int state;
//			state = 0;
//			for (int i = 0; i < N; i++)
//			{
//				cin >> a;
//				if (a > 1) {
//					morethan1++;
//				}
//				state = state ^ a;
//			}
//			if (morethan1 >= 1)
//			{
//				if (state == 0) {
//					cout << "Meidikeji_Shijiediyi!" << endl;
//				}
//				else {
//					cout << "Yamato_Saikou!" << endl;
//				}
//			}
//			else {
//				if (N % 2 == 1) {
//					cout << "Meidikeji_Shijiediyi!" << endl;
//				}
//				else {
//					cout << "Yamato_Saikou!" << endl;
//				}
//			}
//			cas++;
//		}
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//	return 0;
//}
//
