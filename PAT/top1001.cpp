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
//#define INF 0x3f3f3f3f
//#define MAXN 505
//using namespace std;
//#define LL long long
//
//int m[MAXN][MAXN];
//bool blocked[MAXN][MAXN];
//int v[MAXN]; // �Ƿ�����С��������
//int dis[MAXN];
//int lnk[MAXN];
//int ans[MAXN];
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	int N, M;
//	memset(v, 0, sizeof(v));
//	memset(ans, 0, sizeof(ans));
//	memset(lnk, 0, sizeof(lnk));
//	memset(m, 0, sizeof(m));
//	scanf("%d %d", &N, &M);
//	int c1, c2, c, s;
//
//	for (int i = 0; i < M; i++)
//	{
//		scanf("%d%d%d%d", &c1, &c2, &c, &s);
//		if (s == 0) {
//			// destroyed
//			blocked[c1][c2] = true;
//			blocked[c2][c1] = true;
//		}
//		else {
//			// safe
//			blocked[c1][c2] = false;
//			blocked[c2][c1] = false;
//		}
//		m[c1][c2] = c;
//		m[c2][c1] = c;
//	}
//
//	//prim
//	for (int i = 1; i < N + 1; i++)
//	{
//		dis[i] = INF;
//		// һ��ʼ���еĽڵ㶼����U����
//	}
//	// ����
//	for (int i = 1; i < N + 1; i++)
//	{
//		if (m[1][i] !=0 && m[1][i] < dis[i]) {
//			dis[i] = m[1][i];
//		}
//	}
//
//	v[1] = 1;
//	dis[1] = 0;
//	for (int i = 1; i < N + 1; i++)
//	{
//		//if (v[i] == 0) { // no this line
//			int mind = INF,  minj = 0;
//			for (int j = 1; j < N + 1; j++)
//			{
//				if (v[j] == 0 && dis[j] < mind) {
//					// find not in the tree
//					// printf("%d %d %d\n", j, dis[j], mind);
//					minj = j;
//					mind = dis[j];
//				}
//			}
//			// important
//			if (minj == 0) break;
//			v[minj] = 1;
//			// ����dis
//			for (int j = 1; j < N + 1; j++)
//			{
//				if (dis[j] > m[minj][j]){
//					dis[j] = m[minj][j];
//					lnk[j] = minj;
//					//lnk[j] ��ʾjҪ���ӵ���С������������(U��)���Ǹ��ڵ��ϲ��ܹ��õ���С��dis����
//				}
//				else {
//					
//				}
//				dis[j] = min(dis[j], m[minj][j]);
//			}
//			if (blocked[lnk[minj]][minj]) {
//				ans[lnk[minj]] += mind;
//				ans[minj] += mind;
//			}
//			else {
//
//			}
//			printf("link %d to %d\n", i, minj);
//		//}
//	}
//
//	
//	int maxi = -INF;
//	for (int i = 1; i < N + 1; i++)
//	{
//		if (ans[i] > maxi) {
//			maxi = ans[i];
//		}
//	}
//	bool flag = false;
//	if (maxi == 0) {
//		printf("0");
//	}
//	else {
//		for (int i = 1; i < N + 1; i++)
//		{
//			if (ans[i] == maxi && flag) {
//				printf(" %d", i);
//			}
//			else if (ans[i] == maxi) {
//				printf("%d", i);
//				flag = true;
//			}
//		}
//	}
//	printf("\n");
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
