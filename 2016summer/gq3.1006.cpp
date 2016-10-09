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
//#define MAXN 100010
//using namespace std;
//#define LL long long
//#define LD long double
//int T;
//
//int n, a[MAXN];
//int lis[MAXN];
//
//int LIS() {
//	memset(lis, 0, sizeof lis);
//	lis[0] = a[0];
//	for (int i = 1; i < n; i++)
//	{
//		lis[i] = max(lis[i - 1], lis[i]);
//	}
//	for (int i = 1; i < n; i++)
//	{
//
//	}
//	return lis[n - 1];
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	scanf("%d", &T);
//	while (T--)
//	{
//		scanf("%d", &n);
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &a[i]);
//		}
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
//
//
//
//
//// 2 1 3 4 5
//
////int main() {
////#ifdef __ACM
////	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
////#endif
////	scanf("%d", &T);
////	while (T--)
////	{
////		scanf("%d", &n);
////		for (int i = 0; i < n; i++)
////		{
////			scanf("%d", &a[i]);
////		}
////		int alert_up = 0;
////		int alert_down = 0;
////		int len_up = 0;
////		int len_down = 0;
////		int len = 1;
////		int sn = -2;
////		int ns;
////		int cur_dir = 0;
////		for (int i = 1; i < n; i++)
////		{
////			ns = ((a[i - 1] == a[i])? 0 : ( (a[i - 1] < a[i]) ? 1 : -1 ));
////			if (ns != sn)
////			{
////				if (ns == 1) {
////					if (sn == -2){
////						len ++;
////						cur_dir = ns;
////						sn = ns;
////					}
////					else {
////						len_down = max(len_down, len);
////						len = 1;
////						cur_dir = ns;
////						alert_up++;
////					}
////				}else if (ns == -1) {
////					if (sn == -2) {
////						len++;
////						cur_dir = ns;
////						sn = ns;
////					}
////					else {
////						len_up = max(len_up, len);
////						len = 1;
////						cur_dir = ns;
////						alert_down++;
////					}
////				}
////				else {
////					len++;
////				}
////				sn = ns;
////			}
////			else {
////				len++;
////			}
////		}
////		if (len != 0) {
////			if (cur_dir == 1) {
////				len_up = max(len_up, len);
////			}
////			else if (cur_dir == -1) {
////				len_down = max(len_down, len);
////			}
////		}
////		if (alert_up <= 1 && alert_down <= 1 && (min(len_up, len_down) <= 1 || (len_up == 2 && len_down == 2))) {
////			puts("YES");
////		}
////		else {
////			puts("NO");
////		}
////	}
////#ifdef __ACM
////	system("pause");
////#endif
////}
////
