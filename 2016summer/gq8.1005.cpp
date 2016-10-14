//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <queue>
//#include <map>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//typedef pair<string, int> psi;
//psi q[200];
//int rk[200], anrk[200];
//
//bool cmp(const psi &a, const psi &b)
//{
//	if (a.second>b.second) return true;
//	if (a.second<b.second) return false;
//	return a.first.compare(b.first)<0;
//}
//
//int main()
//{
//	int n, m;
//	while (scanf("%d", &n), n) {
//		for (int i = 0; i<n; i++) {
//			cin >> q[i].first;
//			scanf("%d", &q[i].second);
//		}
//		sort(q, q + n, cmp);
//		for (int i = 0; i<n; i++) {
//			cout << q[i].first;
//			printf(" %d\n", q[i].second);
//		}
//		rk[0] = 1;
//		anrk[0] = 1;
//		for (int i = 1; i<n; i++) {
//			if (q[i].second == q[i - 1].second) {
//				rk[i] = rk[i - 1];
//				anrk[i] = anrk[i - 1] + 1;
//			}
//			else {
//				rk[i] = i + 1;
//				anrk[i] = 1;
//			}
//		}
//		scanf("%d", &m);
//		while (m--) {
//			string s;
//			cin >> s;
//			for (int i = 0; i<n; i++)
//				if (q[i].first.compare(s) == 0) {
//					if (anrk[i] == 1) printf("%d\n", rk[i]);
//					else printf("%d %d\n", rk[i], anrk[i]);
//					break;
//				}
//		}
//	}
//	return 0;
//}