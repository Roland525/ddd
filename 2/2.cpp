#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int user;
    float a;
    float b;
    float c;
    float d;
    float pi = 3.14;
    float result;

    cout << "choose option:" << endl << "(1) circle" << "(2) triangle" << "(3) square" << endl;
    cin >> user;

    if(user == 1){
        cout << "enter integer:" << endl;
        cin >> a;
        result = a * 3.14;
        cout << result << endl;
    }
    else if(user == 2){
        cout << "enter first integer" << endl;
        cin >> a;
        cout << "enter second number" << endl;
        cin >> b;
        cout << "enter third number" << endl;
        cin >> c;

        result = sqrt(pi * (pi - a) * (pi - b) * (pi - c));
        cout << result << endl;

    }

}