#include <iostream>
#include<string>
using namespace std;

class Animal
{
    protected:
        string name;
        int age;

    public:
        Animal(){};
        Animal(string nm, int a): name(nm), age(a){};

    void eat()
    {
        cout << name << "its eating" << endl;
    }
    void sleep()
    {
        cout << name << "is sleeping" << endl;
    }
};

class Dog: public Animal
{
    public:
     Dog(string n, int a) : Animal(n,a){};
     void bark()
     {
        cout << "bark" << endl;
    }
};

class Cat : public Animal
{
    public:
    Cat(string n, int a) : Animal(n,a){};

    void meow()
    {
        cout << "meow" << endl;
    }
};

class artem : public Animal
{
    public:
    artem(string n, int a) : Animal(n,a){};

    void golos()
    {
        cout << "artem loh" << endl;
    }

    void otpizdit()
    {
        cout << "o net" << endl;
    }

};

class Pig : public Animal
{
    public:
    Pig(string n, int a) : Animal(n,a){};

    void hrju(){
        cout << "hrju" << endl;
    }
};

class Duck : public Animal
{
    public:
    Duck(string n, int a) : Animal(n,a){};

    void ga(){
        cout << "ga" << endl;
    }
};

int main(){
    int i = 0;
    int a = 0;
    Dog spots("Spots", 5);
    Cat kurwa("Kurwa", 10);
    artem loh("loh", 12);
    Pig svin("svin", 45);
    Duck utka("Utka", 1);

    cout << "Choose animal:" << endl << "1-Dog  2-Cat  3-artem  4-Pig  5-Duck "<< endl;
    cin >> i;

    if(i == 1){
        cout << "choose option: 1-bark  2-eat  3-sleep" << endl;
        cin >> a;
        if(a == 1){
            spots.bark();
        }
        if(a == 2){
            spots.eat();
        }
        if(a == 3){
            spots.sleep();      
        }
    cout << endl;  
    }
    else if(i == 2){
    kurwa.meow();

    cout << endl;
}
    else if(i == 3){
    loh.golos();
    loh.otpizdit();
    loh.eat();
    loh.sleep();

    cout << endl;
}
    else if(i == 4){
    svin.hrju();
    svin.eat();
    svin.sleep();

    cout << endl;
}
    else if(i == 5){
    utka.ga();
    utka.eat();
    utka.sleep();
}
}