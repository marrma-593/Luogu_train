#include<bits/stdc++.h>
using namespace std;

int main(){
    int V;
    int n;
    cin >> V >> n;
    vector<int> item(n);
    for(int i = 0; i < n; i++){
        cin >> item[i]; 
    }
    vector<int> dp(V + 1, 0);
    for(int i = 0; i < n; i++){
        for(int j = V; j >= item[i]; j--){
            dp[j] = max(dp[j], dp[j - item[i]] + item[i]);
        }
    }
    cout << V - dp[V] << endl;
    return 0;
}
