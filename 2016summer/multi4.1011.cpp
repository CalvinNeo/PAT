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
//#define INF 0x3f3f3f3f
//#define MAXN 100005
//using namespace std;
//#define LL long long
//
//const LL MD = 1000000007;
//
//string S, T;
//int nxt[MAXN];
//vector<int> vec;
//int tlen;
//int slen;
//int ex[MAXN];
//int st[MAXN];
//
//void getNext()
//{
//	int j, k;
//	j = 0; k = -1; nxt[0] = -1;
//	while (j < tlen)
//		if (k == -1 || T[j] == T[k])
//			nxt[++j] = ++k;
//		else
//			k = nxt[k];
//}
///*
//* 返回模式串T在主串S中首次出现的位置
//* 返回的位置是从0开始的。
//*/
//int KMP_Index(int i)
//{
//	int j = 0;
//	while (i < slen && j < tlen)
//	{
//		if (j == -1 || S[i] == T[j])
//		{
//			i++; j++;
//		}
//		else
//			j = nxt[j];
//	}
//	if (j == tlen)
//		return i - tlen;
//	else
//		return -1;
//}
//int KMP_Count()
//{
//	int ans = 0;
//	int i, j = 0;
//	if (slen == 1 && tlen == 1)
//	{
//		if (S[0] == T[0])
//			return 1;
//		else
//			return 0;
//	}
//	getNext();
//	for (i = 0; i < slen; i++)
//	{
//		while (j > 0 && S[i] != T[j])
//			j = nxt[j];
//		if (S[i] == T[j])
//			j++;
//		if (j == tlen)
//		{
//			ans++;
//			j = nxt[j];
//		}
//	}
//	return ans;
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	int test, cas = 0;
//	cin >> test;
//	while (test--) {
//		LL ans = 0;
//		vec.clear();
//		cin >> S >> T;
//		memset(ex, 0, sizeof(ex));
//		memset(st, 0, sizeof(st));
//		slen = S.size();
//		tlen = T.size();
//		getNext();
//		cas++;
//
//		for (int i = 0; i < tlen; i++) {
//			int j = i;
//			LL cur = 0;
//			while (j != -1) {
//				j = KMP_Index(j);
//				if (j == -1)
//					break;
//				if (st[j]) {
//					j += tlen;
//					continue;
//				}
//				if (ex[j] == 1)
//					ans += 1;
//				else {
//					if (!cur)
//						cur = 1;
//					cur = (cur * 2) % MD;
//				}
//				st[j] = 1;
//				fill(ex + j, ex + j + tlen, 1);
//				j += tlen;
//			}
//			ans += cur;
//		}
//		if (ans == 0) {
//			ans = 1;
//		}
//		//LL combo = 0;
//		//int i = 0;
//		//int oldi = -1;
//		//LL curans = 0;
//		//while (i != -1 || !vec.empty())
//		//{
//		//	i = KMP_Index(i);
//		//	while (i == -1 && !vec.empty()) {
//		//		ans = (ans + curans - 1) % MD;
//		//		curans = 0;
//		//		oldi = -1;
//		//		i = vec[vec.size()-1];
//		//		vec.pop_back();
//		//		i = KMP_Index(i);
//		//	}
//		//	if (i == -1)
//		//		break;
//		//	if (oldi != -1 && i < tlen + oldi) {
//		//		vec.push_back(i);
//		//	}
//		//	else {
//		//		if (curans == 0)
//		//			curans = 1;
//		//		else
//		//			curans = (curans + 1) % MD;
//		//		oldi = i;
//		//	}
//		//	i++;
//		//}
//		//ans += curans;
//
//		printf("Case #%d: %lld\n", cas, ans);
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
