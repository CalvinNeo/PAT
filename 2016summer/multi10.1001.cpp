////#include <iostream> 
////#include <fstream>
////#include <vector>
////#include <queue>
////#include <cstring>
////#include <string>
////#include <algorithm>
////#include <stack>
////#include <functional>
////#include "stdlib.h" 
////#include "time.h"
////#include <set>
////#include <map>
////#include <queue>
////#include <string.h>
////#include <numeric>
////
////inline int fastread() {
////
////	char c;
////	int ret = 0;
////	int sgn = 1;
////	do { c = getchar(); } while ((c < '0' || c > '9') && c != '-');
////	if (c == '-') sgn = -1; else ret = c - '0';
////	while ((c = getchar()) >= '0' && c <= '9') ret = ret * 10 + (c - '0');
////	return sgn * ret;
////}
////
////
////#define INF 0x3f3f3f3f
////#define MAXN 100010
////using namespace std;
////#define LL long long
////#define PI 3.1415926535
////const double eps = 1e-5;
////
////#define SC1(X) scanf("%d", &X)
////#define SC2(X, Y) scanf("%d %d", &X, &Y)
////
////int a[MAXN];
////
////double find(int l1, int r1, int l2, int r2) {
////	int len1 = r1 - l1 + 1, len2 = r2 - l2 + 1;
////	int mid1 = (l1 + r1) / 2;
////	int mid2 = (l2 + r2) / 2;
////
////}
////
////int main() {
////#ifdef __ACM
////	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
////	//freopen("1.txt", "r", stdin);
////#endif
////	int T;
////	SC1(T);
////	while (T--) {
////		int l;
////		int n, m;
////		SC2(n, m);
////		for (int i = 1; i <= n; i++)
////		{
////			SC1(a[i]);
////		}
////		while (m--) {
////			int l1, r1, l2, r2;
////			SC2(l1, r1);
////			SC2(l2, r2);
////			printf("%.1f\n", find(l1, r1, l2, r2));
////		}
////	}
////#ifdef __ACM
////	int iwannastop;
////	scanf("%d", &iwannastop);
////	system("pause");
////#endif
////}
////
////
//
//#include <iostream>
//#include <string.h>
//using namespace std;
//int a[100005];
//
//
//int BinarySearch(int *nums, int start, int end, int value) {
//	int mid;
//	while (start <= end) {
//		mid = start + (end - start) / 2;
//		if (nums[mid] >= value)
//			end = mid - 1;
//		else
//			start = mid + 1;
//	}
//
//	return start;
//}
//
//
//double recusiveFindMedian(int m, int n, int A_Start, int A_End, int B_Start, int B_End) {
//
//	int A_Mid = A_Start + (A_End - A_Start) / 2;
//	int A_Mid_Pos_In_B = BinarySearch(a, B_Start, B_End, a[A_Mid]);
//	int A_Mid_Final = A_Mid + A_Mid_Pos_In_B - B_Start;
//
//	if (A_Mid_Final == (m + n) / 2) {
//
//		if ((m + n) & 1)
//			return a[A_Mid];
//
//		int prev;
//		if (A_Mid > A_Start && A_Mid_Pos_In_B > B_Start)
//			prev = a[A_Mid - 1] > a[A_Mid_Pos_In_B - 1] ? a[A_Mid - 1] : a[A_Mid_Pos_In_B - 1];
//		else if (A_Mid > A_Start)
//			prev = a[A_Mid - 1];
//		else if (A_Mid_Pos_In_B > B_Start)
//			prev = a[A_Mid_Pos_In_B - 1];
//		else
//			prev = a[A_Mid_Pos_In_B];
//
//		return (a[A_Mid] + prev) / 2.0;
//	}
//	else if (A_Mid_Final < (m + n) / 2) {
//		A_Start = A_Mid + 1;
//		B_Start = A_Mid_Pos_In_B;
//		if ((A_End - A_Start) >(B_End - B_Start))
//			return recusiveFindMedian(m, n, A_Start, A_End, B_Start, B_End);
//		return recusiveFindMedian(n, m, B_Start, B_End, A_Start, A_End);
//	}
//	else {
//		A_End = A_Mid - 1;
//		B_End = A_Mid_Pos_In_B - 1;
//		if ((A_End - A_Start) > (B_End - B_Start))
//			return recusiveFindMedian(m, n, A_Start, A_End, B_Start, B_End);
//		return recusiveFindMedian(n, m, B_Start, B_End, A_Start, A_End);
//	}
//}
//
//double findMedianSortedArrays(int l1, int r1, int l2, int r2) {
//	int nums1Size = r1 - l1 + 1, nums2Size = r2 - l2 + 1;
//	if (nums1Size == 0 && nums2Size == 0)
//		return 0.0;
//
//	if (nums1Size == 0)
//		return (nums2Size % 2 == 1 ? a[l2 + nums2Size / 2] : (a[l2 + nums2Size / 2 - 1] + a[l2 + nums2Size / 2]) / 2.0);
//
//	if (nums2Size == 0)
//		return (nums1Size % 2 == 1 ? a[l1 + nums1Size / 2] : (a[l1 + nums1Size / 2 - 1] + a[l1 + nums1Size / 2]) / 2.0);
//
//	if (nums1Size > nums2Size)
//		return recusiveFindMedian(nums1Size, nums2Size, l1, r1, l2, r2);
//
//	return recusiveFindMedian(nums2Size, nums1Size, l2, r2, l1, r1);
//}
//
//
//int main() {
//
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		int n, m;
//		scanf("%d %d", &n, &m);
//		for (int i = 1; i <= n; i++) {
//			scanf("%d", &a[i]);
//		}
//		while (m--) {
//			int l1, l2, r1, r2;
//			scanf("%d %d %d %d", &l1, &r1, &l2, &r2);
//			double ans = 0.0;
//			if (r2 - l2 > r1 - l1) {
//				ans = findMedianSortedArrays(l1, r1, l2, r2);
//			}
//			else {
//				ans = findMedianSortedArrays(l2, r2, l1, r1);
//			}
//			printf("%.1f\n", ans);
//		}
//	}
//	return 0;
//}
//
