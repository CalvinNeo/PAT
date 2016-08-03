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
//#define INF 0x3f3f3f3f
//#define MAXN 50006
//using namespace std;
//#define LL long long
//
//int a[MAXN];
//int temp[MAXN];
//int temp2[MAXN];
//int doarr[MAXN];
//int doarr2[MAXN];
//int n_i[MAXN];
//int n_d[MAXN];
//LL invc = 0, dirc = 0, ovrl = 0;
//
//void Merge(int first, int med, int last)
//{
//	int i = first, j = med + 1;
//	int cur = 0;
//	while (i <= med && j <= last)
//	{
//		if (doarr[i] < doarr[j])
//		{
//			// 从小到大归并
//			temp[cur++] = doarr[i++];
//		}
//		else
//		{
//			// 出现逆序
//			temp[cur] = doarr[j++];
//			invc += med - i + 1;
//			n_i[cur] = med - i + 1;
//			cur++;
//		}
//	}
//	while (i <= med)
//	{
//		temp[cur++] = doarr[i++];
//	}
//	while (j <= last)
//	{
//		temp[cur++] = doarr[j++];
//	}
//	for (int m = 0; m < cur; m++)
//	{
//		doarr[first + m] = temp[m];
//	}
//}
//void MergeSort(int first, int last)
//{
//	if (first == last)
//	{
//		return;
//	}
//	int med = first + (last - first) / 2;
//	MergeSort(first, med);
//	MergeSort(med + 1, last);
//	Merge(first, med, last);
//}
//void Merge2(int first, int med, int last)
//{
//	int i = first, j = med + 1;
//	int cur = 0;
//	while (i <= med && j <= last)
//	{
//		if (doarr2[i] > doarr2[j])
//		{
//			// 从小到大归并
//			temp2[cur++] = doarr2[i++];
//		}
//		else
//		{
//			// 出现逆序
//			temp2[cur] = doarr2[j++];
//			dirc += med - i + 1;
//			n_d[cur] = med - i + 1;
//			cur++;
//		}
//	}
//	while (i <= med)
//	{
//		temp2[cur++] = doarr2[i++];
//	}
//	while (j <= last)
//	{
//		temp2[cur++] = doarr2[j++];
//	}
//	for (int m = 0; m < cur; m++)
//	{
//		doarr2[first + m] = temp2[m];
//	}
//}
//void MergeSort2(int first, int last)
//{
//	if (first == last)
//	{
//		return;
//	}
//	int med = first + (last - first) / 2;
//	MergeSort2(first, med);
//	MergeSort2(med + 1, last);
//	Merge2(first, med, last);
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	freopen("1.txt", "r", stdin);
//#endif
//	int n;
//	while (~scanf("%d", &n)) {
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", a + i);
//		}
//		invc = 0;
//		dirc = 0;
//		LL ovrli = 0;
//		LL ovrld = 0;
//		memset(n_i, 0, sizeof(n_i));
//		memset(n_d, 0, sizeof(n_d));
//		memcpy(doarr, a, sizeof(a));
//		memcpy(doarr2, a, sizeof(a));
//		MergeSort(0, n - 1);
//		MergeSort2(0, n - 1);
//		for (int i = 0; i < n; i++)
//		{
//			ovrli += n_i[i];
//			ovrld += n_d[i];
//		}
//		LL ans = (invc-ovrli) + (dirc- ovrld) ;
//		printf("%lld\n", ans);
//		//printf("invc %d\n", invc);
//		//printf("dirc %d\n", dirc);
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
//
