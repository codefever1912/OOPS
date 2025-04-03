#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    vector<int>marks;
    for(int i=1;i<=n;i++){
        cout << "Enter marks for sub " << i << "(100): ";
        int x;cin >> x;
        marks.push_back(x);
    }
    for(auto x:marks){
        bool ans = x>40;
        cout << ((ans)?"PASS":"FAIL") << endl;
    }
    int sum = accumulate(marks.begin(),marks.end(),0);
    double average = sum/n;
    double percentage = (sum/(n*100))*100;
    cout << "Total Marks: " << sum << endl;
    cout << "Avargae: " << average << endl;
    cout << "Percent obtained: " << percentage << "%" << endl;
}