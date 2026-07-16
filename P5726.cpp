#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int tmp;
    vector<int>fenshu;
    int maxi = -1e8;
    int mini = 1e8;
    int sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        maxi = max(maxi, tmp);
        mini = min(mini, tmp);
        sum += tmp;
    }
    sum -= maxi + mini;
    cout << fixed << setprecision(2) << (double)sum/(n - 2) << endl;
}