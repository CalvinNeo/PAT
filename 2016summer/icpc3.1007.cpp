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
//#include <string.h>
//#include <numeric>
//#include <sstream>
//
//#define INF 0x3f3f3f3f
//#define MAXN 1010
//#define MAXM 10010
//const int MOD = 1e9 + 7;
//using namespace std;
//#define LL long long
//
//#define SC1(X) scanf("%d", &X)
//#define SC2(X, Y) scanf("%d %d", &X, &Y)
//
//int T, cas = 0;
//
//void nop() {
//
//}
//
//void get_ans() {
//	char chs[100];
//	int cnt = 0;
//	for (int i = 1; i < 100000; i++)
//	{
//		memset(chs, 0, sizeof chs);
//		sprintf(chs, "%d", i);
//		int lens = strlen(chs);
//		int seqlen = 1;
//		bool flag = true;
//		for (int j = 1; j < lens; j++)
//		{
//			int c = chs[j] - '0';
//			int p = chs[j - 1] - '0';
//			if ((c + p) % 2 == 0) {
//				seqlen++;
//			}
//			else {
//				if (p % 2 == 0) {
//					if (seqlen % 2 == 1) {
//						flag = true;
//					}
//					else {
//						flag = false;
//					}
//				}
//				else {
//					if (seqlen % 2 == 0) {
//						flag = true;
//					}
//					else {
//						flag = false;
//					}
//				}
//				seqlen = 1;
//			}
//		}
//
//		if (flag && (chs[lens - 1] - '0') % 2 == 0) {
//			if (seqlen % 2 == 1) {
//				//printf("%d\n", i);
//				cnt++;
//			}
//		}
//		else if(flag) {
//			if (seqlen % 2 == 0) {
//				//printf("%d\n", i);
//				cnt++;
//			}
//		}
//		else {
//
//		}
//	NEXT:
//		nop();
//	}
//	printf("%d\n", cnt);
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r", stdin);
//#endif
//
//#ifdef __ACM
//	int iwannastop;
//	scanf("%d", &iwannastop);
//	system("pause");
//#endif
//}
//
