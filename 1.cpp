#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    string sname;
    int grade;
    string rang;

    cout << "enter name: ";
    cin >> name;

    cout << "enter sname: ";
    cin >> sname;

    cout << "enter average grade: ";
    cin >> grade;

    if (grade < 5){
        rang = " bad";
    }  
    else if (grade > 5){
        rang = " good";
    }
    cout << sname << " " << name << rang << endl; 
}