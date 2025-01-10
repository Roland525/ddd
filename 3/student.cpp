#include <string>
#include <iostream>
#include <cmath>
#include<vector>
using namespace std;

class Student {
private:
    int id;
public:
    string name;
    string surname;
    string kurs;

    Student(){};
    Student(const string& nm, const string& snm, const string& krs)
    {
        name = nm;
        surname = snm;
        kurs = krs;
        id = random();
        }

    int get_id() const {
        return id;
    }

    void get_info() const {
        cout << "name: " << name
             << "surname: " << surname
             << "class: " << kurs
             << "ID: " << id << endl;
    }
};

int main() {
    string name, surname, kurs;
    vector<Student> student;
    int num = 5;

    for (int i = 0; i < num; i++) {
        cout << "name: ";
        cin >> name;
        cout << "surname: ";
        cin >> surname;
        cout << "class: ";
        cin >> kurs;
        cout << endl;
        student.push_back(Student(name,surname,kurs));
    }

    cout << "Studenti:" << endl;
    for (int i = 0; i < num; i++) {
        student[i].get_info();
    }

    return 0;
}