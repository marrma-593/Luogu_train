#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    set<int> hash;
    int p = 0;
    int sum = 0;
    for(int i = 1; i <= k; i++){
        p += i;
    }
    for(int i = 1; i * i < p + k * (n - k); i++){
        hash.insert(i * i);
    }
    
    for(int i = 0; i < n - k + 1; i++){
        if(hash.count(p)){
            sum++;
        }
        p += k;
    }
    cout << sum << endl;
    return 0;
}