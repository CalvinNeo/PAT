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
//#define MAXN 10000
//using namespace std;
//#define LL long long
//#define LD long double
//int T, cas = 0;
//
//string truc0(string x) {
//	string p = "";
//	int i = 0;
//	for (i = 0; i < x.size(); i++)
//	{
//		if (x[i] != '0')
//			break;
//	}
//	for (i; i < x.size(); i++)
//	{
//		p += x[i];
//	}
//	if (p == "")
//		return "0";
//	return p;
//}
//
//
//string sub(string a, const string & b) {
//	// a > b
//	int i = a.size() - 1;
//	int j = b.size() - 1;
//	while (i != -1 && j != -1) {
//		if (a[i] < b[j]) {
//			for (int ii = i - 1; ii >= 0; ii--)
//			{
//				if (a[ii] != '0') {
//					a[ii] --;
//				}
//				else {
//					a[ii] = '9';
//				}
//			}
//			a[i] = a[i] + 10 - b[j] + '0';
//		}
//		else {
//			a[i] -= (b[j] - '0');
//		}
//		i--; j--;
//	}
//	return truc0(a);
//}
//
//
//string next(string & x) {
//	if (x.size() == 1) {
//		string ans = x;
//		x = "0";
//		return ans;
//	}
//	else if (x.size() == 2) {
//		if (x[0] == '0') {
//			return string(1, x[1]);
//		}
//		else if (x[0] == '1') {
//			string ans = "9";
//			x = sub(x, ans);
//			return truc0(ans);
//		}
//		else {
//			string ans = string(2, x[0] - 1);
//			x = sub(x, ans);
//			return truc0( ans );
//		}
//	}
//	else {
//		if (x[0] == '1') {
//			bool flag = false;
//			for (int i = 1; i < (x.size() - 1) / 2; i++)
//			{
//				if (x[i] != '0') {
//					flag = true;
//					break;
//				}
//			}
//			if (!flag) {
//				string ans = x;
//				x = "1";
//				return string(ans.size() - 1, '9');
//			}
//		}
//		string pa;
//		pa = x;
//		int s;
//		for (s = (x.size() - 1) / 2; s >= 0; s--)
//		{
//			if (x[s] != '0') {
//				break;
//			}
//		}
//		for (int i = 0; i < x.size() / 2; i++)
//		{
//			x[x.size() - 1 - i] = x[i];
//		}
//		if (x.size() % 2 == 0) {
//			x[s] --;
//			x[x.size() - 1 - s] --;
//		}
//		else {
//			x[s] --;
//			if (s != x.size() - 1 - s) {
//				x[x.size() - 1 - s] --;
//			}
//		}
//		string huiwen = truc0(x); // ╩ьнд
//		x = sub(pa, x);
//		return huiwen;
//	}
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");    streambuf *cinbackup;      cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	//string a, b;
//	//while (cin >> a) {
//	//	cin >> b;
//	//	cout << sub(a, b) << endl;
//	//}
//
//	scanf("%d", &T);
//	while (T--)
//	{
//		cas++;
//		string x;
//		cin >> x;
//		printf("Case #%d:\n", cas);
//		if (x.size() == 1) {
//			cout << x << endl;
//		}
//		else{
//			while (x != "0") {
//				cout << next(x) << endl;
//			}
//		}
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}