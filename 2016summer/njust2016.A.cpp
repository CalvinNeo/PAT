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
//LL baseparse(LL ori, int base) {
//	LL exp = 1;
//	LL result10 = 0;
//	while (ori) {
//		result10 += (ori % base) * exp;
//		exp *= base;
//		ori /= base;
//	}
//	return result10;
//}
//LL bitparse(LL ori2As10, int base) {
//	LL exp = 1;
//	LL result10 = 0;
//	while (ori2As10) {
//		result10 += (ori2As10 % 2) * exp;
//		exp *= base;
//		ori2As10 /= 2;
//	}
//	return result10;
//}
//string bitstr(LL ori2As10, LL length) {
//	string r(length,'0');
//	for (LL i = length - 1; i >= 0; i--)
//	{
//		r[i] = '0' + ori2As10 % 2;
//		ori2As10 /= 2;
//	}
//	return r;
//}
//LL strparse(string ori, int base) {
//	LL exp = 1;
//	LL result10 = 0;
//	for (LL i = ori.size() - 1; i >= 0; i--)
//	{
//		result10 += ori[i] * exp;
//		exp *= base;
//	}
//	return result10;
//}
//LL finddiv(LL tofind) {
//	LL maxf = (int)((double)sqrt(tofind) + 1);
//	for (LL i = 2; i < maxf; i++)
//	{
//		if (tofind % i == 0)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
//LL isprime() {
//	return 0;
//}
//
//LL numgen(LL x, LL length) {
//	return (1 << (length - 1)) + (x << 1) + 1;
//}
//
//int main() {
//#ifdef __ACM
//	ifstream fin("111.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	int cas = 1;
//	int T;
//	cin >> T;
//	while (T--) {
//		string x, y;
//		cin >> x >> y;
//		vector<char> vx, vy;
//		vx.push_back(x[0]);
//		for (int i = 1; i < x.size(); i++)
//		{
//			if (x[i] != vx[vx.size() - 1])
//				vx.push_back(x[i]);
//		}
//		vy.push_back(y[0]);
//		for (int i = 1; i < y.size(); i++)
//		{
//			if (y[i] != vy[vy.size() - 1])
//				vy.push_back(y[i]);
//		}
//		if (vx.size() == vy.size())
//		{
//			for (int i = 0; i < vy.size(); i++)
//			{
//				if (vx[i] != vy[i]) {
//					goto FAIL;
//				}
//			}
//			cout << "Yes" << endl;
//		}
//		else
//		{
//			FAIL:
//			cout << "No" << endl;
//		}
//		cas++;
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
