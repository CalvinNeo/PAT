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
//#include <string.h>
//#include <numeric>
//#include <sstream>
//#include <math.h>
//
//#define INF 0x3f3f3f3f
//#define MAXN 1000010
//const int MOD = 1e9 + 7;
//using namespace std;
//#define LL long long
//
//#define SC1(X) scanf("%d", &X)
//#define SC2(X, Y) scanf("%d %d", &X, &Y)
//
//int T, cas = 0;
//
//LL primarr[3000000];
//LL v[3000000];
//LL q = 1, p = 1;
//char mark[30000000];
//
//
//LL pi(LL n, LL primarr[], LL len)
//{
//	LL i = 0, mark = 0;
//	for (i = len - 1; i>0; i--) {
//		if (primarr[i]<n) {
//			mark = 1;
//			break;
//		}
//	}
//	if (mark) return i + 1;
//	return 0;
//}
//
//LL phi(LL x, LL a, LL m)
//{
//	if (a == m)
//		return (x / q)*p + v[x%q];
//	if (x<primarr[a - 1])
//		return 1LL;
//	return (LL)phi(x, a - 1, m) - (LL)phi(x / primarr[a - 1], a - 1, m);
//}
//
//LL prime(LL n)
//{
//	LL mark_len;
//	LL count = 0;
//	LL i, j, m = 7LL;
//	LL sum = 0, s = 0;
//	LL len, len2, len3;
//
//	mark_len = (n < 10000) ? 10002 : ((LL)exp(2.0 / 3 * log(n)) + 1);
//	//memset(mark, 0, sizeof mark);
//	for (i = 2; i < (LL)sqrt(mark_len); i++) {
//		if (mark[i])
//			continue;
//		for (j = i + i; j < mark_len; j += i)
//			mark[j] = 1;
//	}
//	mark[0] = mark[1] = 1;
//
//	for (i = 0; i < mark_len; i++) {
//		if (!mark[i]) {
//			count++;
//		}
//	}
//	memset(primarr, 0, sizeof primarr);
//	j = 0;
//	for (i = 0; i < mark_len; i++)
//		if (!mark[i])
//			primarr[j++] = i;
//
//	if (n < 10000)
//		return pi(n, primarr, count);
//
//	len = pi((LL)exp(1.0 / 3 * log(n)), primarr, count);
//	len2 = pi((LL)sqrt(n), primarr, count);
//	len3 = pi(mark_len - 1, primarr, count);
//
//	j = mark_len - 2;
//	for (i = (LL)exp(1.0 / 3 * log(n)); i <= (LL)sqrt(n); i++) {
//		if (!mark[i]) {
//			while (i * j > n) {
//				if (!mark[j])
//					s++;
//				j--;
//			}
//			sum += s;
//		}
//	}
//	sum = (len2 - len) * len3 - sum;
//	sum += (len * (len - 1) - len2 * (len2 - 1)) / 2;
//
//	if (m > len)
//		m = len;
//	for (i = 0; i<m; i++) {
//		q *= primarr[i];
//		p *= primarr[i] - 1;
//	}
//	//v = (LL *)malloc(sizeof(LL)*q);
//	//memset(v, 0, sizeof v);
//	for (i = 0; i < q; i++)
//		v[i] = i;
//	for (i = 0; i < m; i++)
//		for (j = q - 1; j >= 0; j--)
//			v[j] -= v[j / primarr[i]];
//
//	sum = phi(n, len, m) - sum + len - 1;
//	return sum;
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r", stdin);
//#endif
//	LL n, count;
//	int ans[10] = { 0,0,1,2,2,3,3,4,4,4 };
//	while (scanf("%lld", &n) != EOF) {
//		if (n<10) {
//			printf("%d\n", ans[n]);
//			continue;
//		}
//		p = q = 1;
//		count = prime(n);
//		printf("%lld\n", count);
//	}
//#ifdef __ACM
//	int iwannastop;
//	scanf("%d", &iwannastop);
//	system("pause");
//#endif
//}
//
////
////
////#include <time.h>
////#include <stdio.h>
////#include <math.h>
////#include <memory.h>
////#include <assert.h>
////
////#define COMP 4
////#define MASKN(n) (1 << ((n >> 1) & 7))
////#define min(a, b) (a) < (b) ? (a) : (b)
////#define MULTI_THREAD
////#define THRED_NUMS 1
//////#define PRINT_DEBUG
////
////typedef unsigned int uint;
////#ifdef _WIN32
////typedef __int64 int64;
////#else
////typedef long long int64;
////#endif
////
////int *Prime;
////int *PI;
////
////int64 MAXN = (int64)1e11;
////int pt[130000]; //MAXN < 1e11, size = np
////
////int *phiTable;
////int *minfactor;
////
////int x23, x12, x13, x14, y;
////int64 x;
////
////int ST = 7, Q = 1, phiQ = 1;
//////Q    = 2*3*5*7*11*13 = 30030
//////phiQ = 1*2*4*6*10*12 = 5760
////
////int phi2(int x, int a)
////{
////	if (a == 0)
////		return x;
////	if (x < Prime[a])
////		return 1;
////	else
////		return phi2(x, a - 1) - phi2(x / Prime[a], a - 1);
////}
////
////int phi(int x, int a)
////{
////	if (a == ST)
////		return (x / Q) * phiQ + phiTable[x % Q];
////#if 0
////	else if (a < ST)
////		return phi2(x, a);
////#else
////	else if (a == 0)
////		return x;
////#endif
////	else if (x < Prime[a])
////		return 1;
////	else
////		return phi(x, a - 1) - phi(x / Prime[a], a - 1);
////}
////
////#ifdef MULTI_THREAD
////struct ThreadInfo {
////	int pindex;
////	int theadnums;
////	int64 pnums;
////}Threadparam[4 * THRED_NUMS];
////
////#ifdef _WIN32
////#include <windows.h>
////DWORD WINAPI WIN32ThreadFun(LPVOID pinfo)
////#else
////#include <pthread.h>
////void* POSIXThreadFun(void *pinfo)
////#endif
////{
////	ThreadInfo *pThreadInfo = (ThreadInfo *)(pinfo);
////	int addstep = pThreadInfo->theadnums * 2;
////
////	for (int i = pThreadInfo->pindex; pt[i] != 0; i += addstep) {
////		if (pt[i] > 0)
////			pThreadInfo->pnums -= phi(pt[i], pt[i + 1]);
////		else
////			pThreadInfo->pnums += phi(-pt[i], pt[i + 1]);
////	}
////	return 0;
////}
////
////int64 multiThread(int theadnums)
////{
////	int i;
////	int64 pnums = 0;
////
////	for (i = 0; i < theadnums; i++) {
////		Threadparam[i].pindex = 2 * i + 1;
////		Threadparam[i].theadnums = theadnums;
////		Threadparam[i].pnums = 0;
////	}
////
////#ifdef _WIN32
////	HANDLE tHand[THRED_NUMS * 2];
////	DWORD threadID[THRED_NUMS * 2];
////	for (i = 0; i < theadnums; i++) {
////		tHand[i] = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)WIN32ThreadFun, (LPVOID)(&Threadparam[i]), 0, &threadID[i]);
////		if (tHand[i] == NULL)
////			printf("create Win32 thread error\n");
////	}
////	WaitForMultipleObjects(theadnums, tHand, true, INFINITE);
////	for (i = 0; i < theadnums; i++) {
////		pnums += Threadparam[i].pnums;
////		CloseHandle(tHand[i]);
////	}
////#else
////	pthread_t tid[THRED_NUMS * 2];
////	for (i = 0; i < theadnums; i++) {
////		int error = pthread_create(&tid[i], NULL, POSIXThreadFun, &Threadparam[i]);
////		if (error != 0)
////			printf("Create pthread error: %d\n", error);
////	}
////	for (i = 0; i < theadnums; i++) {
////		pthread_join(tid[i], NULL);
////		pnums += Threadparam[i].pnums;
////	}
////#endif
////	return pnums;
////}
////#endif
////
////int freememory(int alloc)
////{
////	int memsize = (x / y) + 100;
////	if (alloc == 0) {
////		int psize = (int)(memsize / log(memsize));
////		//printf("psize = %d memeszie = %d\n", psize, (int)(psize * 1.2) );
////		PI = new int[memsize + 100];
////		Prime = new int[(int)(psize * 1.2) + 100];
////		assert(PI && Prime);
////	}
////	else {
////		delete phiTable;
////		delete minfactor;
////		delete Prime;
////		delete PI;
////	}
////	return alloc;
////}
////
////void init_phiTable()
////{
////	clock_t start = clock();
////
////	int p, i, j;
////
////	if (x < 1e10)
////		ST = 6;
////	if (ST > PI[y])
////		ST = PI[y];
////
////	for (i = 1; i <= ST; ++i) {
////		Q *= Prime[i];
////		phiQ *= Prime[i] - 1;
////	}
////
////	phiTable = new int[Q + 10];
////	for (i = 0; i < Q; ++i)
////		phiTable[i] = i;
////
////	for (i = 1; i <= ST; ++i) {
////		p = Prime[i];
////		for (j = Q - 1; j >= 0; --j)
////			phiTable[j] -= phiTable[j / p];
////	}
////
////	printf("    Q = %d, PhiQ = %d\n", Q, phiQ);
////	printf("    init_phiTable time = %ld ms\n", clock() - start);
////}
////
////void init_minFactor()
////{
////	clock_t start = clock();
////
////	int i, j, maxy = y + 10;
////	int sqrty = (int)sqrt(maxy) + 1;
////
////	minfactor = new int[maxy + 10];
////	for (i = 0; i < maxy; i++)
////		minfactor[i] = i;
////
////	for (i = 1; Prime[i] <= maxy; i++) {
////		for (j = Prime[i]; j <= maxy; j += Prime[i]) {
////			if (minfactor[j] == -j || minfactor[j] == j)
////				minfactor[j] = -Prime[i];
////			else
////				minfactor[j] = -minfactor[j];
////		}
////	}
////
////	for (i = 1; Prime[i] <= sqrty; i++) {
////		int powp = Prime[i] * Prime[i];
////		for (j = powp; j <= maxy; j += powp)
////			minfactor[j] = 0;
////	}
////	printf("    init_minFactor time = %ld ms\n", clock() - start);
////}
////
////int sieve()
////{
////	clock_t start = clock();
////
////	int primes = 1;
////	int maxp = (x / y) + 10;
////	Prime[1] = 2;
////
////	unsigned char *bitMask = (unsigned char *)PI;
////	memset(bitMask, 0, (maxp + 64) >> COMP);
////
////	for (int p = 3; p < maxp; p += 2) {
////		if (!(bitMask[p >> COMP] & MASKN(p))) {
////			Prime[++primes] = p;
////			if (p > maxp / p)
////				continue;
////			for (int j = p * p; j < maxp; j += p << 1)
////				bitMask[j >> COMP] |= MASKN(j);
////		}
////	}
////
////	Prime[0] = primes;
////	Prime[primes] = 0;
////	printf("pi(%d) = %d\n", maxp, primes);
////
////	printf("    sieve time = %ld ms\n", clock() - start);
////	return primes;
////}
////
////void init_x()
////{
////	x = (int64)MAXN;
////	x23 = (int)(pow(x, 2.0 / 3) + 0.01);
////	x12 = (int)(pow(x, 1.0 / 2) + 0.01);
////	x13 = (int)(pow(x, 1.0 / 3) + 0.01);
////	x14 = (int)(pow(x, 1.0 / 4) + 0.01);
////
////	assert((int64)x12 * x12 <= x);
////	assert((int64)x13 * x13 * x13 <= x);
////	assert((int64)x14 * x14 * x14 * x14 <= x);
////
////	y = x13;
////
////	printf("    x14 = %d, x13 = %d, x12 = %d x23 = %d, y = %d\n", x14, x13, x12, x23, y);
////
////	freememory(0);
////}
////
////int64 cal_S0()
////{
////	int64 S0 = x;
////	for (int j = 2; j <= y; j++) {
////		if (minfactor[j] > 0)
////			S0 += x / j;
////		else if (minfactor[j] < 0)
////			S0 -= x / j;
////	}
////
////	printf("S0 = %I64d\n", S0);
////
////	return S0;
////}
////
////// so bad performance in this function
////int64 cal_S3()
////{
////	clock_t start = clock();
////
////	int i, p, a;
////	int np = 1;
////	int64 S3 = 0;
////
////	for (i = 1; i <= PI[x14]; i++) {
////		p = Prime[i];
////		a = PI[p] - 1;
////#ifdef PRINT_DEBUG
////		assert(p <= x14 && a >= 0);
////#endif
////		for (int m = y / p + 1; m <= y; m++) {
////			int xx = x / (int64)(m * p);
////#ifndef MULTI_THREAD
////			if (minfactor[m] > p)
////				S3 -= phi(xx, a);
////			else if (minfactor[m] < -p)
////				S3 += phi(xx, a);
////#else
////			if (minfactor[m] > p) {
////				pt[np++] = xx;
////				pt[np++] = a;
////			}
////			else if (minfactor[m] < -p) {
////				pt[np++] = -xx;
////				pt[np++] = a;
////			}
////#endif
////		}
////	}
////
////#ifdef MULTI_THREAD
////	printf("np = %d\n", np);
////	if (np < 100)
////		S3 += multiThread(1);
////	else
////		S3 += multiThread(THRED_NUMS);
////#endif
////
////	printf("S3 = %I64d\n", S3);
////	printf("    cal S3 time = %ld ms\n", clock() - start);
////	return S3;
////}
////
////void init_PI()
////{
////	clock_t start = clock();
////
////	int Px = 1;
////	PI[0] = PI[1] = 0;
////	for (int i = 1; Prime[i]; i++, Px++) {
////		for (int j = Prime[i]; j <= Prime[i + 1]; j++)
////			PI[j] = Px;
////	}
////
////	//printf("        Px = %d, primes = %d\n", Px, Prime[0]);
////	printf("        PI[%d] = %d\n", Px, PI[Px - 1]);
////	printf("    init_PI time = %ld ms\n", clock() - start);
////}
////
////int64 cal_P2xa()
////{
////	int64 phi2 = (int64)PI[y] * (PI[y] - 1) / 2 - (int64)PI[x12] * (PI[x12] - 1) / 2;
////
////	for (int i = PI[y] + 1; i <= PI[x12] + 0; i++) {
////		int p = Prime[i];
////#ifdef PRINT_DEBUG
////		assert(p > y && p <= x12);
////#endif
////		phi2 += PI[x / p];
////	}
////	printf("P2xa(%I64d, %d) = %I64d\n", x, PI[y], phi2);
////
////	return phi2;
////}
////
////int64 cal_S1()
////{
////	int64 temp = PI[y] - PI[x13];
////	int64 S1 = temp * (temp - 1) / 2;
////	printf("S1 = %I64d\n", S1);
////
////	return S1;
////}
////
////int64 cal_U()
////{
////	int64 p, U = 0;
////	int sqrt_xdivy = (int)sqrt(x / y);
////	for (int i = PI[sqrt_xdivy] + 1; i <= PI[x13]; i++) {
////		p = Prime[i];
////		U += PI[y] - PI[x / (p * p)];
////	}
////
////	printf("U = %I64d\n", U);
////
////	return U;
////}
////
////int64 cal_V1()
////{
////	int64 V1 = 0;
////	int MINq, p;
////	for (int i = PI[x14] + 1; i <= PI[x13]; i++) {
////		p = Prime[i];
////		MINq = min((uint)y, x / ((int64)p * p));
////#ifdef PRINT_DEBUG
////		assert(p > x14 && p <= x13 && MINq >= p);
////#endif
////		V1 += (int64)(2 - PI[p]) * (PI[MINq] - PI[p]); //!!!!!!
////	}
////
////	printf("V1 = %I64d\n", V1);
////
////	return V1;
////}
////
////int64 cal_V2()
////{
////	int64 V2 = 0;
////	int i, sqrt_xdivy = (int)sqrt(x / y);
////	//    int sqrt_xdivy2 = (int)sqrt(x / (y * y));
////	//    int sqrt_xdivp = (int)sqrt(x / 1);
////	int xdivy2 = x / (y * y);
////
////#if 0
////	uint p, q;
////	uint W[6] = { 0 };
////	//W1
////	for (p = x14 + 1; p <= xdivy2; p++)
////		for (q = p + 1; q <= y; q++)
////			W[1] += PI[x / (p * q)];
////
////	//W2
////	for (p = xdivy2 + 1; p <= sqrt_xdivy; p++) {
////		sqrt_xdivp = (uint)sqrt(x / p);
////		for (q = p + 1; q <= sqrt_xdivp; q++)
////			W[2] += PI[x / (p * q)];
////	}
////
////	//W3
////	for (p = xdivy2 + 1; p <= sqrt_xdivy; p++)
////		for (q = sqrt(x / p) + 1; q <= y; q++)
////			W[3] += PI[x / (p * q)];
////
////	//W4
////	for (p = sqrt_xdivy + 1; p <= x13; p++) {
////		sqrt_xdivp = (uint)sqrt(x / p);
////		for (q = p; q <= sqrt_xdivp; q++)
////			W[4] += PI[x / (p * q)];
////	}
////
////	//W5
////	for (p = sqrt_xdivy + 1; p <= x13; p++)
////		for (q = sqrt(x / p) + 1; q <= xdivy2; q++)
////			W[5] += PI[x / (p * q)];
////	V2 = W[1] + W[2] + W[3] + W[4] + W[5];
////
////#else
////
////	for (i = PI[x14] + 1; i <= PI[sqrt_xdivy]; i++) {
////		int64 p = Prime[i];
////#ifdef PRINT_DEBUG
////		assert(p > x14 && p <= sqrt_xdivy);
////#endif
////		for (int j = PI[p] + 1; j <= PI[y]; j++) {
////			int q = Prime[j];
////#ifdef PRINT_DEBUG
////			assert(q > p && q <= y);
////#endif
////			V2 += PI[x / (p * q)];
////		}
////	}
////
////	for (i = PI[sqrt_xdivy] + 1; i <= PI[x13]; i++) {
////		int64 p = Prime[i];
////#ifdef PRINT_DEBUG
////		assert(p > sqrt_xdivy && p <= x13);
////#endif
////		xdivy2 = x / (p * p);
////		for (int j = PI[p] + 1; j <= PI[xdivy2]; j++) {
////			int q = Prime[j];
////			V2 += PI[x / (p * q)];
////		}
////	}
////
////#endif
////
////	printf("V2 = %I64d\n", V2);
////
////	return V2;
////}
////
////int main(int argc, char* argv[])
////{
////	clock_t start = clock();
////
////	if (argc > 1)
////		MAXN = _atoi64(argv[1]); //mingw vc++
////
////	init_x();
////
////	sieve();
////
////	init_PI();
////
////	init_minFactor();
////	init_phiTable();
////
////	int64 pix = PI[y] - 1;
////	pix += cal_S3(); //mul thread
////
////	pix -= cal_P2xa();
////	pix += cal_S0();
////
////	if (y != x13) {
////		pix += cal_S1();
////		pix += cal_U();
////	}
////
////	pix += cal_V2();
////	pix += cal_V1();
////
////#if 0
////	printf("phi(%u, 209) = %d, time = %ld ms\n", x, phi(x, 209), clock() - start);
////	delete phiTable;
////	return 0;
////#endif
////
////	puts("\nPi(x) = phi(x, a) + a - 1 - phi2(x,a):");
////
////	printf("pi(%I64d) = %I64d, time use %ld ms\n", x, pix, clock() - start);
////
////	freememory(1);
////	return 0;
////}
//
