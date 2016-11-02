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
//#define INF 1002
//using namespace std;
//#define LL long long
//
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	double eps = 1e-5;
//	int k;
//	double coeff1[INF];
//	int exp;
//	double coeff;
//	int maxexp = 0;
//	for (int i = 0; i < INF; i++)
//	{
//		coeff1[i] = 0.0;
//	}
//	scanf("%d", &k);
//	for (int i = 0; i < k; i++)
//	{
//		scanf("%d %lf", &exp, &coeff);
//		coeff1[exp] += coeff;
//		maxexp = max(maxexp, exp);
//	}
//	scanf("%d", &k);
//	for (int i = 0; i < k; i++)
//	{
//		scanf("%d %lf", &exp, &coeff);
//		coeff1[exp] += coeff;
//		maxexp = max(maxexp, exp);
//	}
//	int count = 0;
//	for (int i = maxexp; i >= 0; i--) {
//		if (fabs(coeff1[i]) < eps) {
//		}
//		else {
//
//			count++;
//		}
//	}
//	cout << count;
//	for (int i = maxexp; i >= 0; i--) {
//		if (fabs(coeff1[i]) < eps) {
//		}
//		else {
//			printf(" %d %.1lf", i, coeff1[i]);
//		}
//	}
//	cout << endl;
//
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
