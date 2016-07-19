//#ifndef judgebylen
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
//#define MAXN 10005
//#define INF 0x3f3f3f3f
//using namespace std;
//#define LL long long
//
//int n[MAXN];
//int maxsumto[MAXN];
//int start[MAXN];
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");  streambuf *cinbackup;    cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	int K;
//	scanf("%d", &K);
//	bool allneg = true;
//	for (int i = 1; i < K + 1; i++)
//	{
//		scanf("%d", n + i);
//		if (n[i] >= 0)
//			allneg = false;
//	}
//	n[0] = 0;
//	maxsumto[0] = n[0];
//	// important
//	start[0] = 1;
//	int maxid = 0, maxv = 0;
//	for (int i = 1; i < K + 1; i++)
//	{
//		if (n[i] + maxsumto[i - 1] < n[i]) {
//			// n[i]作为新序列的第一个元素
//			maxsumto[i] = n[i];
//			start[i] = i;
//			if (maxv < maxsumto[i]) {
//				maxv = maxsumto[i];
//				maxid = start[i];
//			}
//		}
//		else {
//			// n[i]接着作为n[i - 1]的后继
//			maxsumto[i] = n[i] + maxsumto[i - 1];
//			start[i] = start[i - 1];
//			if (maxv < maxsumto[i]) {
//				maxv = maxsumto[i];
//				maxid = start[i];
//			}
//		}
//	}
//	int end;
//	int s = 0;
//	for (int i = maxid; i < K + 1; i++)
//	{
//		s += n[i];
//		if (s == maxv) {
//			end = i;
//			break;
//		}
//	}
//	//for (int i = 0; i < K; i++)
//	//{
//	//  printf("%3d ", n[i]);
//	//}
//	//printf("\n");
//	//for (int i = 0; i < K; i++)
//	//{
//	//  printf("%3d ", maxsumto[i]);
//	//}
//	//printf("\n");
//
//	if (allneg) {
//		printf("%d %d %d\n", maxv, n[1], n[K]);
//	}
//	else {
//		printf("%d %d %d\n", maxv, n[maxid], n[end]);
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
//#endif
//#ifdef judgebylen
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
//#define MAXN 10005
//#define INF 0x3f3f3f3f
//using namespace std;
//#define LL long long
//
//int n[MAXN];
//int maxsumto[MAXN];
//int start[MAXN];
//char stop[MAXN];
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	int K;
//	scanf("%d", &K);
//	for (int i = 1; i < K + 1; i++)
//	{
//		scanf("%d", n + i);
//	}
//	n[0] = 0;
//	memset(stop, 0, MAXN);
//	maxsumto[0] = n[0];
//	start[0] = 0;
//	vector<int> maxid;
//	int maxv = 0;
//	for (int i = 1; i < K; i++)
//	{
//		if (n[i] > n[i] + maxsumto[i - 1]) {
//			maxsumto[i] = n[i];
//			start[i] = i;
//			stop[i] = 1;
//			if (maxv < maxsumto[i]) {
//				maxv = maxsumto[i];
//				maxid.clear();
//				maxid.push_back(start[i]);
//			}
//			else if (maxv == maxsumto[i]) {
//				maxid.push_back(start[i]);
//			}
//		}
//		else {
//			maxsumto[i] = n[i] + maxsumto[i - 1];
//			start[i] = start[i - 1];
//			if (maxv < maxsumto[i]) {
//				maxv = maxsumto[i];
//				maxid.clear();
//				maxid.push_back(start[i]);
//			}
//			else if (maxv == maxsumto[i]) {
//				maxid.push_back(start[i]);
//			}
//		}
//	}
//	int len = INF, st, ed;
//	int s = 0;
//	for (int j = 0; j < maxid.size(); j++)
//	{
//		int curlen = 0;
//		for (int i = maxid[j]; i < K; i++)
//		{
//			s += n[i];
//			if (s == maxv) {
//				ed = i;
//				break;
//			}
//		}
//		curlen = ed - maxid[j];
//		if (curlen < len) {
//			len = curlen;
//			st = maxid[j];
//		}
//	}
//	//for (int i = 0; i < K; i++)
//	//{
//	//	printf("%3d ", n[i]);
//	//}
//	//printf("\n");
//	//for (int i = 0; i < K; i++)
//	//{
//	//	printf("%3d ", maxsumto[i]);
//	//}
//	//printf("\n");
//	//for (int i = 0; i < K; i++)
//	//{
//	//	printf("%3d ", stop[i]);
//	//}
//	//printf("\n");
//
//	//printf("%d %d %d\n", maxv, maxid, end);
//	if (maxv == 0) {
//		printf("%d %d %d\n", maxv, n[0], n[K - 1]);
//	}
//	else {
//		printf("%d %d %d\n", maxv, n[st], n[ed]);
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
//
//#endif // judgebylen
