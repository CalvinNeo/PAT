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
//LL divisor[100];
//LL tot;
//
//void Get_divisor(LL N)
//{
//	memset(divisor, 0, sizeof(divisor));
//	for (LL i = 2; i*i <= N; i++) {
//		if (N && (N%i == 0)) {
//			divisor[tot++] = i;
//			while (N && (N%i == 0)) N /= i;
//		}
//	}
//	if (N>1) divisor[tot++] = N;
//}
//
//LL Get_num(LL num, LL m)
//{
//	LL ans = 0;
//	for (LL i = 1; i<(1 << m); i++) {
//		LL temp = 1, flag = 0;
//		for (LL j = 0; j<m; j++) {
//			if (i&(1 << j)) {
//				flag++;
//				temp *= divisor[j];
//			}
//		}
//		if (flag & 1)ans += num / temp;
//		else ans -= num / temp;
//	}
//	return ans;
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
//		LL n, a, b;
//		cin >> n >> a >> b;
//		tot = 0;
//		Get_divisor(n);
//		cout << (LL)((b - Get_num(b, tot)) - (a - 1 - Get_num(a - 1, tot))) << endl;
//		cas++;
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
