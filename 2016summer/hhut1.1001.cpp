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
//
//#define INF 0x3f3f3f3f
//#define MAXN 100060
//using namespace std;
//#define LL long long
//
//#define SC1(X) scanf("%d", &X)
//#define SC2(X, Y) scanf("%d %d", &X, &Y)
//
//int T, cas = 0;
//LL s[MAXN];
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r", stdin);
//#endif
//	scanf("%d\n", &T);
//	while (T--) {
//		cas++;
//		int index = 0;
//		char prev = 0;
//		LL cr_len = 0LL;
//		LL mysum = 0LL;
//		LL ans = 0LL;
//		memset(s, 0, sizeof s);
//		string src;
//		cin >> src;
//		for (int i = 0; i < src.size(); i++)
//		{
//			char x = src[i];
//			if (x == '0' || x == '1') {
//				if (x != prev) {
//					s[index++] = cr_len;
//					mysum += (cr_len * cr_len);
//					cr_len = 1LL;
//				}
//				else {
//					cr_len++;
//				}
//				prev = x;
//			}
//		}
//		s[index] = cr_len;
//		mysum += (cr_len * cr_len);
//		if (index == 1) {
//			ans = mysum;
//		}
//		else {
//			for (int i = 2; i <= index; i++)
//			{
//				if (s[i] == 1) {
//					LL xmax = s[i - 1] + s[i + 1] + 1;
//					ans = max(ans, mysum + xmax * xmax - (s[i - 1] * s[i - 1] + s[i + 1] * s[i + 1] + 1));
//				}
//				else {
//					if (s[i - 1] >= s[i]) {
//						ans = max(ans, mysum + 2 * (s[i - 1] - s[i] + 1));
//					}
//					else {
//						ans = max(ans, mysum + 2 * (s[i] - s[i - 1] + 1));
//					}
//				}
//			}
//		}
//		cout << "Case #" << cas << ": " << ans << "\n";
//	}
//#ifdef __ACM
//	int iwannastop;
//	scanf("%d", &iwannastop);
//	system("pause");
//#endif
//}
