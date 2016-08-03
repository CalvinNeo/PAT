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
//			temp[cur++] = doarr[j++];
//			invc += med - i + 1;
//			n_i[cur - 1] = med - i + 1;
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
//			temp2[cur++] = doarr2[j++];
//			dirc += med - i + 1;
//			n_d[cur - 1] = med - i + 1;
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
//		ovrl = 0;
//		memset(n_i, 0, sizeof(n_i));
//		memset(n_d, 0, sizeof(n_d));
//		memcpy(doarr, a, sizeof(a));
//		memcpy(doarr2, a, sizeof(a));
//		MergeSort(0, n - 1);
//		MergeSort2(0, n - 1);
//		for (int i = 0; i < n; i++)
//		{
//			ovrl += min(n_i[i], n_d[i]);
//		}
//		printf("%d\n", ovrl);
//		//printf("invc %d\n", invc);
//		//printf("dirc %d\n", dirc);
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
//
//
//
//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//#include <cstdlib>
//using namespace std;
//
//typedef long long LLint;
//const int N = 50010;
//int a[N], aa[N], c[N + 10];
//int lmuch[N], rmuch[N], lless[N], rless[N];
//int n, i;
//
//int lowbit(int x)
//{
//	return x&(-x);
//}
//
//void update(int t, int value)
//{
//	int i;
//	for (i = t; i<n + 10; i += lowbit(i))
//		c[i] += value;
//}
//
//int getsum(int x)
//{
//	int i;
//	int temp = 0;
//	for (i = x; i >= 1; i -= lowbit(i))
//		temp += c[i];
//	return temp;
//}
//
//int main()
//{
//	while (~scanf("%d", &n)) {
//		for (i = 0; i<n; i++)
//			scanf("%d", &a[i]);
//		for (i = 1; i <= n; i++)
//			aa[i] = a[i - 1];
//		sort(a, a + n);
//		int size = unique(a, a + n) - a;
//		for (i = 1; i <= n; i++)
//			aa[i] = lower_bound(a, a + size, aa[i]) - a + 1;
//		for (i = 1; i<n + 10; i++) c[i] = 0;
//		for (i = 1; i <= n; i++) {
//			lless[i] = getsum(aa[i] - 1);
//			update(aa[i], 1);
//			lmuch[i] = i - getsum(aa[i]);
//		}
//		for (i = 1; i<n + 10; i++) c[i] = 0;
//		for (i = n; i; i--) {
//			rless[i] = getsum(aa[i] - 1);
//			update(aa[i], 1);
//			rmuch[i] = n - i + 1 - getsum(aa[i]);
//		}
//		//        for (i=1;i<=n;i++)
//		//            printf("%d %d\n",lless[i],rless[i]);
//		//        for (i=1;i<=n;i++)
//		//            printf("%d %d\n",lmuch[i],rmuch[i]);
//		LLint lessp = 0;
//		for (i = 1; i <= n; i++)
//			lessp += (LLint)lless[i];
//		LLint muchp = 0;
//		for (i = 1; i <= n; i++)
//			muchp += (LLint)lmuch[i];
//		LLint ans = lessp*muchp;
//		if (!ans) puts("0");
//		else {
//			for (i = 1; i <= n; i++)
//				ans -= 1LL * lless[i] * lmuch[i] + 1LL * rless[i] * rmuch[i] + 1LL * lless[i] * rless[i] + 1LL * lmuch[i] * rmuch[i];
//			printf("%I64d\n", ans);
//		}
//	}
//	return 0;
//}