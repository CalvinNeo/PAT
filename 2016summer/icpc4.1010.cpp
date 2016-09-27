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
//#define INF 0x3f3f3f3f
//#define MAXN 105
//using namespace std;
//#define LL long long
//
//int N, M, C, E;
//
//struct Character {
//	int index;
//	int HP;
//	int AT;
//	int MV;
//	int AD1;
//	int AD2;
//	int STx;
//	int STy;
//	int GR;
//	int oriMV;
//	bool isd;
//};
//
//int G[MAXN][MAXN];
//Character Cha[MAXN];
//char cmd[200];
//char dum1[200];
//char dum2[200];
//int gr = 0;
//int cha = 0;
//
//
//bool near(int i, int j) {
//	bool cx, cy;
//	if( ((Cha[i].STx - Cha[j].STx == 1 || Cha[i].STx - Cha[j].STx == -1) && Cha[i].STy == Cha[j].STy) ||
//		((Cha[i].STy - Cha[j].STy == 1 || Cha[i].STy - Cha[j].STy == -1) && Cha[i].STx == Cha[j].STx) )
//	{
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//bool checkcan() {
//	for (int i = 1; i <= C; i++)
//	{
//		if (i != cha && near(i, cha)) {
//			return true;
//		}
//	}
//	return false;
//}
//
//bool inrect(int x, int y, int x1, int y1, int x2, int y2) {
//	if (x <= max(x1, x2) && x >= min(x1, x2) && y <= max(y1, y2) && y >= min(y1, y2)) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//bool isocc(int x, int y) {
//	for (int i = 1; i <= C; i++)
//	{
//		if (i != cha && Cha[i].STx == x && Cha[i].STy == y) {
//			return true;
//		}
//	}
//	return false;
//}
//
//int maxn = -1;//剩下的最大体力 
//int dir[4][2] = { { 1,0 },{ 0,1 },{ 0,-1 },{ -1,0 } };
//bool vis[MAXN][MAXN];
//void dfs(int n, int x, int y) {
//	//printf("%d %d mv = %d\n", Cha[n].STx, Cha[n].STy, Cha[n].MV);
//	if (Cha[n].STx == x && Cha[n].STy == y) {
//		if (Cha[n].MV > maxn) {
//			maxn = Cha[n].MV;
//		}
//		return;
//	}
//	if (Cha[n].MV < 0) {
//		return;
//	}
//	int fuckx = Cha[n].STx;
//	int fucky = Cha[n].STy;
//	int fuckmv = Cha[n].MV;
//	for (int i = 0; i < 4; i++) {
//		int dx = Cha[n].STx + dir[i][0];
//		int dy = Cha[n].STy + dir[i][1];
//		if (!vis[dx][dy] && !isocc(dx, dy) && (Cha[n].MV - G[dx][dy] >= 0) && dx >= 1 && dx <= N && dy >= 1 && dy <= M) {
//			vis[dx][dy] = true;
//			Cha[n].STx = dx;
//			Cha[n].STy = dy;
//			if (checkcan()) {
//				Cha[n].MV = 0;
//				//printf("-all- %d %d mv = %d \n", Cha[n].STx, Cha[n].STy, Cha[n].MV);
//			}
//			else {
//				//printf("-some- %d %d mv = %d delta = %d \n", Cha[n].STx, Cha[n].STy, Cha[n].MV, G[dx][dy]);
//				Cha[n].MV -= G[dx][dy];
//			}
//			dfs(n, x, y);
//			Cha[n].STx = fuckx;
//			Cha[n].STy = fucky;
//			Cha[n].MV = fuckmv;
//			vis[dx][dy] = false;
//		}
//	}
//}
//
//
//int manhat(int x1, int y1, int x2, int y2) {
//	return abs(x1 - x2) + abs(y1 - y2);
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	while (scanf("%d", &N) != EOF) {
//		scanf("%d%d%d", &M, &C, &E);
//		memset(G, 0, sizeof G);
//		memset(Cha, 0, sizeof Cha);
//		for (int i = 1; i <= N; i++)
//		{
//			for (int j = 1; j <= M; j++)
//			{
//				scanf("%d", &G[i][j]);
//			}
//		}
//		for (int i = 1; i <= C; i++)
//		{
//#define FF &Cha[i]
//			Cha[i].index = i;
//			scanf("%d %d %d %d %d %d %d %d", FF.HP, FF.AT, FF.MV, FF.AD1, FF.AD2, FF.STx, FF.STy, FF.GR);
//			Cha[i].oriMV = Cha[i].MV;
//		}
//		for (int i = 0; i < E; i++)
//		{
//			scanf("%s", cmd);
//#define DOC(XX) (strcmp(cmd, XX) == 0)
//			if (DOC("Round")) {
//				scanf("%s %d", dum1, &gr);
//			}
//			else if (DOC("Action")) {
//				int id;
//				scanf("%s %s %d", dum1, dum2, &id);
//				if (Cha[id].GR != gr) {
//					printf("INVALID\n");
//				}
//				else {
//					cha = id;
//				}
//			}
//			else if (DOC("Move")) {
//				int x, y;
//				scanf("%s (%d,%d)", dum1, &x, &y);
//				if (!Cha[cha].isd) {
//					maxn = -1;
//					memset(vis, 0, sizeof vis);
//					dfs(cha, x, y);
//					if (maxn == -1) {
//						printf("INVALID\n");
//					}
//					else {
//						Cha[cha].MV = maxn;
//						printf("%d\n", maxn);
//						Cha[i].MV = Cha[i].oriMV;
//						Cha[cha].STx = x;
//						Cha[cha].STy = y;
//					}
//				}
//				else {
//					printf("INVALID\n");
//				}
//			}
//			else if (DOC("Attack")) {
//				int id;
//				scanf("%d", &id);
//				int dis = manhat(Cha[id].STx, Cha[id].STy, Cha[cha].STx, Cha[cha].STy);
//				if (dis >= Cha[cha].AD1 && dis <= Cha[cha].AD2 && Cha[id].GR != gr) {
//					Cha[id].HP -= Cha[cha].AT;
//					//Cha[cha].isd = true;
//					printf("%d\n", Cha[id].HP);
//				}
//				else {
//					printf("INVALID\n");
//				}
//			}
//			else if (DOC("Drive")) {
//				int id;
//				scanf("%s %d", dum1, &id);
//				if (Cha[id].isd) {
//					printf("INVALID\n");
//				}
//				else {
//					int dis = manhat(Cha[id].STx, Cha[id].STy, Cha[cha].STx, Cha[cha].STy);
//					if (dis >= Cha[cha].AD1 && dis <= Cha[cha].AD2 && Cha[id].GR != gr) {
//						Cha[id].HP -= Cha[cha].AT;
//						if (Cha[id].HP > 0) {
//							printf("INVALID\n");
//							Cha[id].HP += Cha[cha].AT;
//						}
//						else {
//							Cha[cha].isd = true;
//							printf("%d\n", Cha[id].HP);
//						}
//					}
//					else {
//						printf("INVALID\n");
//					}
//				}
//			}
//		}
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
