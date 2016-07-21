#include <iostream> 
#include <fstream>
#include <vector>
#include <queue>
#include <cstring>
#include <string>
#include <algorithm>
#include <stack>
#include <functional>
#include "stdlib.h" 
#include "time.h"
#include <set>
#include <map>
#include <numeric>

#define INF 0x3f3f3f3f
#define MAXN 100005
using namespace std;
#define LL long long

//int c[MAXN];
vector<int> odds;
vector<int> evens;

int main() {
#ifdef __ACM
	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
#endif
	int T;
	while (cin >> T) {
		LL n, x, w, s;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> w;
			if (w > 0) {
				s += w;
			}
			else {
				s += -w;
			}
		}
	}
#ifdef __ACM
	system("pause");
#endif
}

