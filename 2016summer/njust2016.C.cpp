//#include <cstdio>
//#include <cstring>
//#define ll long long
//
//int const MAX = 7e7 + 5;
//int fac[MAX];
//int cnt;
//ll a, b, n, num1, num2;
//
//void get_factor(ll x)
//{
//	cnt = 0;
//	for (int i = 2; i * i < MAX; i++)
//	{
//		if (x % i == 0)
//		{
//			fac[cnt++] = i;
//			while (x % i == 0)
//				x /= i;
//		}
//	}
//	if (x > 1)
//		fac[cnt++] = x;
//}
//
//void DFS(int idx, ll cur, int sgin, ll s, bool f)
//{
//	for (int i = idx; i < cnt; i++)
//	{
//		ll tmp = (ll)cur * fac[i];
//		if (f)
//			num1 += (ll)sgin * (s / tmp);
//		else
//			num2 += (ll)sgin * (s / tmp);
//		DFS(i + 1, tmp, -sgin, s, f);
//	}
//}
//
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	for (int ca = 1; ca <= T; ca++)
//	{
//		scanf("%lld %lld %lld", &a, &b, &n);
//		get_factor(n);
//		num1 = 0;
//		DFS(0, 1, 1, b, 1);
//		num2 = 0;
//		DFS(0, 1, 1, a - 1, 0);
//		ll ans = (ll)b - a + 1 - (num1 - num2);
//		printf("%lld\n", ans);
//	}
//}