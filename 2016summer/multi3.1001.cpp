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
//#define MAXN 30000005
//using namespace std;
//#define LL long long
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	int T;
//	string x;
//	while (cin >> x) {
//		LL y = 0;
//		if (x.size() > 10) {
//			cout << "TAT" << endl;
//			continue;
//		}
//		for (int i = 0; i < x.size(); i++)
//		{
//			y *= (LL)10;
//			y += (LL)(x[i] - '0');
//		}
//		//cout << y << endl;
//		if (y == 0) {
//			cout << "TAT" << endl;
//		}
//		else if (y < 2) {
//			cout << 0 << endl;
//			continue;
//		}
//		else if(y < 4){
//			cout << 1 << endl;
//			continue;
//		}
//		else if (y < 16) {
//			cout << 2 << endl;
//			continue;
//		}
//		else if (y < 256) {
//			cout << 3 << endl;
//			continue;
//		}
//		else if (y < 65536) {
//			cout << 4 << endl;
//			continue;
//		}
//		else if (y < 4294967296) {
//			cout << 5 << endl;
//			continue;
//		}
//		else {
//			cout << "TAT" << endl;
//			continue;
//		}
//		x = "";
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
