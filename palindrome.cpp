#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;cin >> x;
    string s;cin >> s;

    int t=0,pw=0;
    while(x!=0){
        t+=((x%10)*pow(10,pw));
        x/=10;pw++;
    }
    if(t==x){cout << x << "is a palindrome" << endl;}
    string a;
    for(int i=s.size()-1;i>=0;i--){
        a+=s[i];
    }
    cout << ((a==s)?"Palindrome":"Not a palindrome") << endl;
}