#include<bits/stdc++.h>
using namespace std;
int space[102][102];
vector<pair<int, int>> point;
int dx[] = {-1, 0, 1 ,0};
int dy[] = {0 , 1, 0 ,-1};
int n, m;

void dfs(int x, int y){
    space[x][y] = 0;
    for(int i = 0; i < 4; i++){
        int x2 = x + dx[i];
        int y2 = y + dy[i];
        if( x2 >= 0 && y2 >= 0 && x2 < n && y2 < m && space[x2][y2] != 0){
            dfs(x2, y2);
        }
    }
    
}
int main(){    
    cin >> n >> m;
    char a;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a;
            space[i][j] = a - '0';
            if(space[i][j] != 0){
                point.push_back({i, j});
            }
        }
    }
    int cnt = 0;
    for(int i = 0; i < point.size(); i++){
        int x = point[i].first;
        int y = point[i].second;
        if(space[x][y] == 0) continue;
        dfs(x, y);
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}