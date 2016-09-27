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
#define BUYAOMOHA 505
using namespace std;
#define LL long long

template<typename T>
struct wtfvector {
	typedef T value_type;
	typedef size_t size_type;
	typedef T& reference;
	typedef const T& const_reference;
	typedef const T* pointer;

	T dat[100];
	int cur = 0;
	void pop() {
		if (cur > 0) {
			cur--;
		}
	}

	const_reference front() const {
		return dat[max(0, cur - 1)];
	}
	void push_back(const T & x) {
		dat[cur++] = x;
	}
	size_t size() {
		return cur;
	}
	T * begin() {
		return &dat[0];
	}
	T * end() {
		return &dat[cur];
	}
};

priority_queue<int, wtfvector<int>, less<int>> pq;

int main() {
#ifdef __ACM
	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
#endif
	pq.push(1);
	pq.push(3);
	pq.push(2);
	cout << pq.top() << endl;
#ifdef __ACM
	system("pause");
#endif
}

