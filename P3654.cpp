#include<bits/stdc++.h>
using namespace std;
int r, c, k;
bool pla[102][102];
char tmp;

bool right(int i, int j, int k){
    if(k == 0) return true;
    else if(j >= c || pla[i][j] == false) return false; 
    return right(i, j + 1, k - 1);
}

bool down(int i, int j, int k){
    if(k == 0) return true;
    else if(i >= r || pla[i][j] == false) return false; 
    return down(i + 1, j, k - 1);
}
int main(){    
    cin >> r >> c >> k;
    
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> tmp;
            if(tmp == '.') pla[i][j] = true;
            else pla[i][j] = false;
        }
    }
    long long cnt = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(right(i, j, k)) cnt++;
            if(down(i,j, k)) cnt++;
        }
    }
    if(k == 1) cnt /= 2;
    cout << cnt << endl;
    return 0;
}