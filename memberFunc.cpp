#include <iostream>
#include <string>
using namespace std;

class Student{
    string student_name,regNo;
    public:
        void set_name(string name){
            student_name = name;
        }

        void set_regNo(string regNumber){
            regNo = regNumber;
        }

        string get_name(){
            cout << "Name: " << student_name << endl;
        }

        string get_RegNo(){
            cout << "RegNo: " << regNo << endl;
        }

        void printDeatils(){
            get_name();
            get_RegNo();
        }
};

int main(){
    Student stud1;
    stud1.set_name("Sparsh");
    stud1.set_regNo("22BCE10441");

    //Printing the details
    stud1.printDeatils();
}