#include<bits/stdc++.h>
using namespace std;
bool cmp(long long a, long long b){
    return a < b;
}
int main(){
    int n;
    cin >> n;
    vector<long long>a;
    long long tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(),a.end(), cmp);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}