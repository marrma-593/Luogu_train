#include<bits/stdc++.h>
using namespace std;
int s[4];
int dp[2410];
int X[22];
int res = 0;
int main(){
    for(int i = 0; i < 4; i++){
        cin >> s[i];
    }
    for(int i = 0; i < 4; i++){
        memset(dp, 0, sizeof(dp));
        int sum = 0;
        for(int j = 0; j < s[i]; j++){
            cin >> X[j];
            sum += X[j];
        }
        for(int p = 0; p < s[i]; p++){
            for(int q = sum /2; q >= X[p]; q--){
                dp[q] = max(dp[q], dp[q - X[p]] + X[p]);
            }
        }
        res += sum - dp[sum/2];
    }
    cout << res << endl;
    return 0;
}