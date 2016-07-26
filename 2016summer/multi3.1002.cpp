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
//#define MAXN 1005
//using namespace std;
//#define LL long long
//
//int c[MAXN];
//
//int cp(int x, int n) {
//	if (x == 1) {
//		return n;
//	}
//	else {
//		return n * (n - 1) / 2;
//	}
//}
//long double pw(int n) {
//	long double a = 1.0;
//	for (int i = 2; i <= n; i++)
//	{
//		a /= (long double)i;
//	}
//	return a;
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	int n;
//	while (cin >> n) {
//		long double r = 0.0;
//		memset(c, 0, sizeof(c));
//		for (int i = 0; i < n; i++)
//		{
//			cin >> c[i];
//		}
//		long double v = pw(n);
//		long double permid = 0.0;
//		long double peredg = 0.0;
//		//for (int i = 1; i <= n; i++)
//		//{
//		//	permid += cp(2, i - 1) * 2 * v;
//		//	peredg += cp(1, i - 1) * v;
//		//}
//		//r += c[0] * peredg;
//		//if (n > 2) {
//		//	r += c[n - 1] * peredg;
//		//}
//		//for (int i = 1; i < n - 1; i++)
//		//{
//		//	r += c[i] * permid;
//		//}
//		peredg = 0.5 ; 
//		permid = 1.0 / 3.0 ;
//		if (n == 1) {
//			cout << fixed << setprecision(6) << c[0] << endl;
//		}
//		else if (n == 2) {
//			cout << fixed << setprecision(6) << (c[0] + c[1]) / 2.0 << endl;
//		}
//		else {
//			r += c[0] * peredg;
//			r += c[n - 1] * peredg;
//			for (int i = 1; i <= n - 2; i++)
//			{
//				r += c[i] * permid;
//			}
//			cout << fixed << setprecision(6) << r << endl;
//		}
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
