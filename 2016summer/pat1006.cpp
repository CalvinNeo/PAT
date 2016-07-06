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
//#define MAXN 500
//#define INF 0x3f3f3f3f
//using namespace std;
//#define LL long long
//
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	int N, h1, m1, s1, h2, m2, s2;
//	char name[16];
//	scanf("%d", &N);
//	char first[16];
//	char last[16];
//	memset(first, 0, sizeof(first));
//	memset(last, 0, sizeof(last));
//	int firsttime = INF;
//	int lasttime = 0;
//	for (int i = 0; i < N; i++)
//	{
//		memset(name, 0, sizeof(name));
//		scanf("%s %d:%d:%d %d:%d:%d", name, &h1, &m1, &s1, &h2, &m2, &s2);
//		int f = h1 * 3600 + m1 * 60 + s1;
//		int l = h2 * 3600 + m2 * 60 + s2;
//		//printf("%s %s\n", first, last);
//		if (f < firsttime) {
//			firsttime = f;
//			strcpy(first, name);
//		}
//		if (l > lasttime) {
//			lasttime = l;
//			strcpy(last, name);
//		}
//	}
//	printf("%s %s\n", first, last);
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
