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
////#include <numeric>
////#include <cctype>
////#include <cmath>
////
////#define INF 1000000
////#define MAXN 10000
////#define MAXE 30
////using namespace std;
////#define LL long long
////#define LD long double
////int T, cas = 0;
////
////int ans[] = { 
////	0,0,0,0,1,1,2,3,3,4,5,6,7,8,8,9,10,11,12,13,14
////};
////
////
////struct Tri {
////	int e[3];
////	Tri(int a, int b, int c){
////		e[0] = a;
////		e[1] = b;
////		e[2] = c;
////	}
////};
////
////int ca[4];
////bool valid[MAXN];
////int hit[MAXE];
////vector<Tri> vec;
////
////bool check(int a, int b, int c) {
////	memset(ca, 0, sizeof ca);
////	ca[0] = a;
////	ca[1] = b;
////	ca[2] = c;
////	sort(ca, ca + 3);
////	if (ca[0] + ca[1] > ca[2] && ca[2] - ca[0] < ca[1]) {
////		return true;
////	}
////	else {
////		return false;
////	}
////}
////
////bool lostall() {
////	for (int i = 0; i < vec.size(); i++)
////	{
////		if (valid[i]) {
////			return false;
////		}
////	}
////	return true;
////}
////
////int find_max_hit_index(int start, int at) {
////	int maxid, maxh;
////	maxid = maxh = -1;
////	for (int i = start + 1; i <= at; i++)
////	{
////		if (hit[i] > maxh) {
////			maxid = i;
////			maxh = hit[i];
////		}
////	}
////	return maxid;
////}
////
////int do_select(int at, int deep) {
////	int delc = INF;
////	if (!lostall()) {
////		int delid = 0;
////		int actual_max = hit[find_max_hit_index(delid, at)];
////		while ((delid = find_max_hit_index(delid, at)) != -1 && hit[delid] == actual_max) {
////			// 删掉最多的边
////			vector<int> rec;
////			int addhit[MAXE]; memset(addhit, 0, sizeof addhit);
////			// 删掉含这条边的所有三角形
////			for (int i = 0; i < vec.size(); i++)
////			{
////				if (valid[i] && find(vec[i].e, vec[i].e + 3, delid) != vec[i].e + 3) {
////					for (int j = 0; j < 3; j++)
////					{
////						hit[vec[i].e[j]] --;
////						addhit[vec[i].e[j]] ++;
////					}
////					valid[i] = false;
////					rec.push_back(i);
////				}
////			}
////
////			int temp;
////			if (!lostall()) {
////				temp = do_select(at, deep + 1);
////			}
////			else {
////				temp = 0;
////			}
////			if (temp < delc) {
////				//printf("deep : %d. at: %d, delid: %d, delc:  %d, temp: %d \n", deep, at, delid, delc, temp);
////				delc = temp;
////			}
////
////			// recover
////			while (!rec.empty()) {
////				valid[rec[rec.size() - 1]] = true;
////				rec.pop_back();
////			}
////			for (int j = 1; j <= at; j++)
////			{
////				hit[j] += addhit[j];
////			}
////		}
////		//printf("deep: %d, delc:  %d \n", deep, delc);
////		printf("%d\t \n", delid, delid);
////		return delc + 1;
////	}
////	else {
////		return 0;
////	}
////}
////
////int find_one(int at) {
////	memset(hit, 0, sizeof hit);
////	memset(valid, true, sizeof valid);
////	vec.clear();
////	for (int i = 1; i <= at; i++)
////	{
////		for (int j = i + 1; j <= at; j++)
////		{
////			for (int k = j + 1; k <= at; k++)
////			{
////				if (check(i, j, k)) {
////					vec.push_back(Tri(i, j, k));
////					hit[i] ++;
////					hit[j] ++;
////					hit[k] ++;
////				}
////			}
////		}
////	}
////	return do_select(at, 0);
////}
////
////void test() {
////	for (int i = 13; i <= 13; i++)
////	{
////		//printf("%d,%d\n", i, find(i));
////		printf("%d,", find_one(i));
////	}
////}
////
////int main() {
////#ifdef __ACM
////	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
////#endif
////	test();
////	scanf("%d", &T);
////	while (T--)
////	{
////		cas++;
////		int n;
////		scanf("%d", &n);
////		printf("Case #%d: %d\n", cas, ans[n]);
////	}
////#ifdef __ACM
////	system("pause");
////#endif
////}
////
//
//
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
//#include <cctype>
//#include <cmath>
//
//#define INF 0x3f3f3f3f
//#define MAXN 10000
//using namespace std;
//#define LL long long
//#define LD long double
//int T, cas = 0;
//
//int ans[] = {
//	0,0,0,0,1,1,2,3,3,4,5,6,7,8,8,9,10,11,12,13,14,15,16,17
//};
//
//
//struct Tri {
//	int e[3];
//	Tri(int a, int b, int c) {
//		e[0] = a;
//		e[1] = b;
//		e[2] = c;
//	}
//};
//
//int ca[4];
//bool valid[MAXN];
//int hit[30];
//vector<Tri> vec;
//
//bool check(int a, int b, int c) {
//	memset(ca, 0, sizeof ca);
//	ca[0] = a;
//	ca[1] = b;
//	ca[2] = c;
//	sort(ca, ca + 3);
//	if (ca[0] + ca[1] > ca[2] && ca[2] - ca[0] < ca[1]) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//bool lostall() {
//	for (int i = 0; i < vec.size(); i++)
//	{
//		if (valid[i]) {
//			return false;
//		}
//	}
//	return true;
//}
//
//int find_max_hit_index(int at) {
//	int maxid, maxh;
//	maxid = maxh = -1;
//	for (int i = 1; i <= at; i++)
//	{
//		if (hit[i] > maxh) {
//			maxid = i;
//			maxh = hit[i];
//		}
//	}
//	return maxid;
//}
//
//int find(int at) {
//	memset(hit, 0, sizeof hit);
//	memset(valid, true, sizeof valid);
//	vec.clear();
//	for (int i = 1; i <= at; i++)
//	{
//		for (int j = i + 1; j <= at; j++)
//		{
//			for (int k = j + 1; k <= at; k++)
//			{
//				if (check(i, j, k)) {
//					vec.push_back(Tri(i, j, k));
//					hit[i] ++;
//					hit[j] ++;
//					hit[k] ++;
//				}
//			}
//		}
//	}
//	int delc = 0;
//	while (!lostall()) {
//		int delid = find_max_hit_index(at);
//		delc++;
//		for (int i = 0; i < vec.size(); i++)
//		{
//			if (valid[i]) {
//				if (find(vec[i].e, vec[i].e + 3, delid) != vec[i].e + 3) {
//					for (int j = 0; j < 3; j++)
//					{
//						hit[vec[i].e[j]] --;
//					}
//					valid[i] = false;
//				}
//			}
//		}
//		printf("%d\n", delid);
//	}
//
//	return delc; 
//}
//
//void test() {
//	for (int i = 7; i <= 7; i++)
//	{
//		//printf("%d,%d\n", i, find(i));
//		printf("%d,", find(i));
//	}
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");    streambuf *cinbackup;      cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	test();
//	scanf("%d", &T);
//	while (T--)
//	{
//		cas++;
//		int n;
//		scanf("%d", &n);
//		printf("Case #%d: %d\n", cas, ans[n]);
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}