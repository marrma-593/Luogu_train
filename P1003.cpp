#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct p{
    int a,b,c,d;
}
p[10005];
int a,b,c,d;
int main(){
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++){
        cin >> a >> b >> c >> d;
        p[i] = {a,b,c,d};
    }
    int x, y;
    cin >> x >> y;
    for(int i = T; i >= 1; i--){
        if(p[i].a <= x && p[i].b <= y && (p[i].a + p[i].c - 1 >= x) && (p[i].b + p[i].d - 1 >= y)){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}