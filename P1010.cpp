#include<bits/stdc++.h>
using namespace std;

int lis[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8182, 16364};
int len_list = 15;
int find_max(int a){
    for(int i = 14; i >= 0; i--){
        if(lis[i] <= a){
            return i;
        }
    }
}
void f(int a){
    int flag = 0;
    while(a != 0){
        int maxi = find_max(a);
        if(flag == 1) cout << "+";
        if(maxi == 0) cout << "2(0)";
        else if(maxi == 1) cout << "2";
        else{

            cout << "2(";
            f(maxi);
            cout << ")";
        }
        flag = 1;
        a -= pow(2, maxi);
    }
}
int main(){
    int a;
    cin >> a;
    f(a);
    return 0;
}