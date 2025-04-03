#include<iostream>
using namespace std;

void print(int a){
    cout << "Priting out an integer, age: " << a;
}
void print(float w){
    cout << "\nPrinting out a float, weight: " << w;
}

int main(){
    int age;
    float wt;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter weight: ";
    cin>> wt;
    print(age);
    print(wt);
}