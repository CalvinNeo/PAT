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
//inline int fastread() {
//	char c;
//	int ret = 0;
//	int sgn = 1;
//	do { c = getchar(); } while ((c < '0' || c > '9') && c != '-');
//	if (c == '-') sgn = -1; else ret = c - '0';
//	while ((c = getchar()) >= '0' && c <= '9') ret = ret * 10 + (c - '0');
//	return sgn * ret;
//}
//
//
//#define INF 0x3f3f3f3f
//#define MAXN 50000
//using namespace std;
//#define LL long long
//
//
//int n;
//inline int lowbit(int x) {
//	return x & (-x);
//}
//
//
//int xi[MAXN];
//int sumxi[MAXN];
//
//// ע�⵱x==0����ѭ��
//
//void add(int x, int val)   //����״����Ժ���ڵ����
//{
//	while (x<MAXN)
//	{
//		xi[x] += val;
//		x += lowbit(x);
//	}
//}
//
//int query(int x)
//{
//	int rank = 0;   //rank�������ǵĵȼ������������½��е����Ǹ���
//	while (x>0)
//	{
//		rank += xi[x];
//		x -= lowbit(x);
//	}
//	return rank;
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r", stdin);
//#endif
//
//	while (~scanf("%d", &n)) {
//		memset(xi, 0, sizeof(xi));
//		memset(sumxi, 0, sizeof(sumxi));
//		for (int i = 1; i <= n; i++)
//		{
//			int x, y;
//			scanf("%d%d", &x, &y);
//			// x==0����ѭ�� 
//			add( x + 1, 1);
//			int s = query( x + 1); // С�ڵ���x����Ŀ
//			sumxi[s - 1]++;
//		}
//		for (int i = 0; i < n; i++)
//		{
//			printf("%d\n", sumxi[i]);
//		}
//	}
//	return 0;
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
//
