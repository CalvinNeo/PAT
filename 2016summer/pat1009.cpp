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
//#define MAXN 1002
//using namespace std;
//#define LL long long
//
//
////double coeff1[MAXN];
////double coeff2[MAXN];
////int k1id[15];
////int k2id[15];
//map<int, double> mp1;
//map<int, double> mp2;
//map<int, double> mp;
//vector<pair<int, double>> v;
//bool pred(const pair<int, double> & a, const pair<int, double> & b) {
//	return a.first >= b.first;
//}
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	double eps = 1e-5;
//	int k1, k2;
//	int exp;
//	double coeff;
//	int maxexp = 0;
//	//for (int i = 0; i < MAXN; i++)
//	//{
//	//	coeff1[i] = 0.0;
//	//	coeff2[i] = 0.0;
//	//}
//	scanf("%d", &k1);
//	for (int i = 0; i < k1; i++)
//	{
//		scanf("%d %lf", &exp, &coeff);
//		mp1[exp] = coeff;
//		//coeff1[exp] += coeff;
//		//k1id[i] = exp;
//	}
//	scanf("%d", &k2);
//	for (int i = 0; i < k2; i++)
//	{
//		scanf("%d %lf", &exp, &coeff);
//		mp2[exp] = coeff;
//		//coeff2[exp] += coeff;
//		//k2id[i] = exp;
//	}
//	for (map<int,double>::iterator mi1 = mp1.begin(); mi1 != mp1.end(); mi1++)
//	{
//		for (map<int, double>::iterator mi2 = mp2.begin(); mi2 != mp2.end(); mi2++)
//		{
//			exp = mi1->first + mi2->first;
//			coeff = mi1->second * mi2->second;
//			if (fabs(coeff) > eps) {
//				map<int, double>::iterator mi = mp.find(exp);
//				if (mi == mp.end()) {
//					mp[exp] = coeff;
//				}
//				else {
//					mp[exp] += coeff;
//				}
//			}
//		}
//	}
//	// important
//	for (auto it = mp.begin(); it != mp.end();) {
//		if (it->second == 0.0) {
//			mp.erase(it++);
//		}
//		else it++;
//	}
//	for (map<int, double>::iterator i = mp.begin(); i != mp.end(); i++)
//	{
//		v.push_back(*i);
//	}
//	sort(v.begin(), v.end(), pred);
//	printf("%d", v.size());
//	for (int i = 0; i < v.size(); i++)
//	{
//		printf(" %d %.1f", v[i].first, v[i].second);
//	}
//	printf("\n");
//#ifdef __ACM
//	system("pause");
//#endif
//}