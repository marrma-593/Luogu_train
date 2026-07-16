#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int>height(10);
    int a;
    for(int i = 0; i < 10; i++){
        cin >> height[i];
    }
    cin >> a;
    a += 30;
    int cnt = 0;
    for(int i = 0; i < 10; i++){
        if (height[i] <= a){
            cnt++;
        }
    }
    cout << cnt;
}