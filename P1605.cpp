#include<bits/stdc++.h>
using namespace std;
int mapp[7][7];
#define ll long long
int N, M, T;
int SX, SY, FX, FY;
int dx[] = {0, 0, 1, -1};
int dy[] = {-1, 1, 0, 0};
int cnt = 0;

void dfs(int x, int y){
    if(x == FX && y == FY){
        cnt++;
        return;
    } 
    else{
        for(int i = 0; i < 4; i++){
            int x2 = x + dx[i];
            int y2 = y + dy[i];
            if(!(x2 < 1 || x2 > N || y2 < 1 || y2 > M || mapp[x2][y2] == 1 || mapp[x2][y2] == -1)){
                mapp[x2][y2] = -1;
                dfs(x2, y2);
                mapp[x2][y2] = 0;
            }
        }
    }
}
int main(){
    cin >> N >> M >> T;
    cin >> SX >> SY >> FX >> FY;
    memset(mapp, 0,sizeof(mapp));
    int x, y;
    for(int i = 1; i <= T; i++){
        cin >> x >> y;
        mapp[x][y] = 1;
    }
    mapp[SX][SY] = -1;
    dfs(SX, SY);
    cout << cnt << endl;
}