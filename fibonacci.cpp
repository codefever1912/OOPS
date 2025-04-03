#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
vector<int>fibb(N);

void preComp(int x){
    fibb[0] = 0;fibb[1] = 1;
    for(int i=2;i<=x;i++){
        fibb[i] = fibb[i-1]+fibb[i-2];
    }
}

int main(){
    int x;cin >> x;//x terms of fibonacci << endl;
    preComp(x);
    for(int i=0;i<x;i++){
        cout << fibb[i] << " ";
    }
    cout << endl;
}