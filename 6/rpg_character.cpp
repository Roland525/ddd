#include <iostream>
#include <string>
#include <cmath>
#include <random>
#include <vector>
using namespace std;

class User {
    
    public:
        string name;
        int hp = 100;
        vector<Weapon*> inventory;

    void addweapon(Weapon* weapon){
        inventory.push_back(weapon);
    }

};
class Weapon{
    public:
        string name;
        int damage;
        int dps;
        int accuracy;
};
class Onehand : public Weapon{

};

class Knife : public Onehand{

    public:
        Knife() {
        damage = rndm(10, 30);
        dps = 80;
        accuracy = 70; 
        }

};

class Axe : public Onehand{

    public:
        Axe() {
            damage = rndm(50, 90);
            dps = 25;
            accuracy = 50;
        }
};

class Twohand : public Weapon{

};

class Sword : public Weapon{
    public:
        Sword(){
            damage = rndm(80, 120);
            dps = 10;
            accuracy = 30;
        }
};

class Spear : public Weapon{
    public:
        Spear(){
            damage = rndm(60, 90);
            dps = 50;
            accuracy = 20;
        }
};

int rndm(int lower, int upper) {
    // Генератор случайных чисел
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(lower, upper);

    return dist(gen);
}

int main(){
    int answer = 0;
    User player1;
    string name_for_first_player;

    cout << "Enter name for 1 player: ";
    cin >> name_for_first_player;
    player1.name = name_for_first_player;

    cout << "(1) one hand weapon or (2) two hand weapon: ";
    cin >> answer;
    if (answer == 1){
        answer = 0;
        cout << "Choose 1 hand weapon for first hand: " << endl;
        cout << "(1) Knife " << "(2) Axe" << endl;
        cout << "You answer: ";
        cin >> answer;
            if (answer == 1){
                cout << "Knfie equped" << endl;
                Knife* knife = new Knife();
                player1.addweapon(knife);
            }
            if (answer == 2){
                cout << "Axe equped" << endl;
                Axe* axe = new Axe();
                player1.addweapon(axe);
            }
        }
    if (answer == 2){
        answer = 0;
        cout << "Choose 2 hand weapon for first hand: " << endl;
        cout << "(1) Sword " << "(2) Spear" << endl;
        cout << "You answer: ";
        cin >> answer;
            if (answer == 1){
                cout << "Sword equped" << endl;
                Sword* sword = new Sword();
                player1.addweapon(sword);
            }
            if (answer == 2){
                cout << "Spear equped" << endl;
                Spear* spear = new Spear();
                player1.addweapon(spear);
            }
        }

    cout << "Choose armor for first player"; 
    answer = 0;
    

    return 0;
}

