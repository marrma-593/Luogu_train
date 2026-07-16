#include<bits/stdc++.h>
using namespace std;
deque<int>neicun;
bool isin(int a){
    for(auto p : neicun){
        if(p == a) return true;
    }
    return false;
}
int main(){
    int M, N;
    int a;
    int val = 0;
    int checktime = 0;
    cin >> M >> N;
    for(int i = 0; i < N; i++){
        cin >> a;
        if(val < M){
            if(!isin(a)){
                checktime++;
                neicun.push_back(a);
                val++; 
            }
            
        }else{
             if(!isin(a)){
                checktime++; 
                 neicun.push_back(a);
                 neicun.pop_front();
            }
        }
    }
    cout << checktime << endl;
    return 0;
}