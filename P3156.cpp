#include<bits/stdc++.h>
using namespace std;
vector<long long> q;
int main(){
    int n, m;
    cin >> n >> m;
    long long tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        q.push_back(tmp);
    }
    for(int i = 0; i < m; i++){
        cin >> tmp;
        cout << q[tmp - 1] << endl;
    }
    return 0;
}