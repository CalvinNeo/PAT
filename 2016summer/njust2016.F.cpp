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
//#define INF 10005
//using namespace std;
//#define LL long long
//
//int seq[INF];
//bool marked[INF];
//
//const int MAXN = 1010;
//int n;
//int stk[INF];
//
//
//
//int main() {
//#ifdef __ACM
//	ifstream fin("111.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	int cas = 1;
//	int T;
//	cin >> T;
//	while (T--) {
//		int N;
//		int count = 0;
//		cin >> N;
//		memset(seq, 0, sizeof(int) * INF);
//		memset(marked, false, sizeof(bool) * INF);
//		for (int i = 0; i < N; i++)
//		{
//			cin >> seq[i];
//		}
//		bool not_fi = true;
//		while(not_fi) {
//			int top = 0;
//			not_fi = false;
//			memset(stk, 0, sizeof(int) * INF);
//			for (int j = 0; j < N; j++)
//			{
//				if (!marked[j]) {
//					not_fi = true;
//					/* 比栈顶元素大数就入栈 */
//					if (top == 0 || seq[j] > seq[stk[top]])
//					{
//						stk[++top] = j;
//					}
//					else
//					{
//						int low = 1, high = top;
//						int mid;
//						/* 二分检索栈中比temp大的第一个数 */
//						while (low <= high)
//						{
//							mid = (low + high) / 2;
//							if (seq[j] > seq[stk[mid]])
//							{
//								low = mid + 1;
//							}
//							else
//							{
//								high = mid - 1;
//							}
//						}
//						stk[low] = j;
//					}
//				}
//			}
//			for (int k = 1; k <= top; k++)
//				marked[stk[k]] = true;
//			count++;
//		}
//		cout << count-1 << endl;
//		cas++;
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//	return 0;
//}
//
