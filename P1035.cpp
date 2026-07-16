#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin >> k;
    int n = 1;
    double a = 1;
    while(a <= k){
        n++;
        a += (double)1/n; 
    }
    cout << n << endl;
}