#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll d(ll p){
    ll x = 0;
    for(ll i = 1; i <= p; i++){
        x += i * (p - i);
    }
    return x;
}
int main(){
    int n, m;
    cin >> n >> m;
    ll p = min(n, m);
    ll q = max(n, m);
    ll all = (ll)m * (m + 1) /2 * n * (n + 1) /2;
    ll cnt = 0;
    cnt += (q - p + 1) * (1 + p) * p /2;
    cnt += 2 * d(p);
    //cout << d(p) << endl;
    cout << cnt << " " << all - cnt << endl;
    return 0;
}