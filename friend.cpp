#include <bits/stdc++.h>
using namespace std;

class Tutorial{
    private:
        int x;
    public:
        Tutorial(int n){x = n;}
    friend void friendFunc(Tutorial *obj);
};

void friendFunc(Tutorial *obj){
    obj->x *= 10;
    cout << obj->x << endl;
}

int main(){
    Tutorial obj(10);
    friendFunc(&obj);
}