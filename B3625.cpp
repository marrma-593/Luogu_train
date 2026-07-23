#include<bits/stdc++.h>
using namespace std;
int space[102][102];
int dx[] = {0,0,1,-1};
int dy[] = {1, -1,0,0};
int n, m;
void dfs(int x, int y){
    space[x][y] = 1;
    for(int i = 0; i <= 3; i++){
        int x2 = x + dx[i];
        int y2 = y + dy[i];
        if(space[x2][y2] == 0 && x2 >= 0 && y2 >= 0 && x2 < n && y2 < m){
            dfs(x2, y2);
        }
    }   
}
int main(){
    cin >> n >> m;
    char tmp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> tmp;
            if(tmp == '.') space[i][j] = 0;
            if(tmp =='#') space[i][j] = -1;
        }
    }
    dfs(0, 0);
    if(space[n - 1][m - 1] == 1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    return 0;
}