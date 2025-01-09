#include <string>
#include <iostream>
#include <cmath>
using namespace std;

class Student
{
private:
    int id;
public:
    string name;
    string surname;
    string kurs;
    
    Student(){};
    Student(const string& nm, const string& snm, const string& krs) : name(nm), surname(snm), kurs(krs)
    {
        name = nm;
        surname = snm;
        kurs = krs;
        id = random();
    }
    int get_id(){
        return id;
    }

void get_info(){
    cout << name << ", " << surname << ", " << kurs << "id = " << get_id() << endl;
};

};
int main()
{
    Student a1;
    Student a2;
    Student a3;
    Student a4;
    Student a5;
    cout << "Name: " << endl;
    cin >> a1.name;
    cout << "Surname: " << endl;
    cin >> a1.surname;
    cout << "Class: " << endl;
    cin >> a1.kurs;
    a1.get_info();

    return 0;
}
