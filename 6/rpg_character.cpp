#include <iostream>
#include <string>
#include <cmath>
#include <random>
#include <vector>
using namespace std;


int rndm(int lower, int upper) {
    // Генератор случайных чисел
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(lower, upper);

    return dist(gen);
}

class Armor{
    public:
        int armor_hp = 0;
        int armor_dps = 0;

};

class Leather : public Armor{
    public:
        Leather(){
            armor_hp += 50;
            armor_dps = 0;
        }
};

class Chainmail : public Armor{
    public:
        Chainmail(){
            armor_hp += 100;
            armor_dps = -30;

        }
};

class Gold : public Armor{
    public:
        Gold(){
            armor_hp += 250;
            armor_dps = -40;
        }
};



class Weapon{
    public:
        int damage;
        int dps;
        int accuracy;
        
};



class User{
    
    public:
        string name;
        int hp = 100;
        vector<Weapon*> inventory;
        vector<Armor*> armors;

    void addweapon(Weapon* weapon){
        inventory.push_back(weapon);
    }
    void addArmor(Armor* armor) {
    armors.push_back(armor);
    hp += armor->armor_hp;
    }

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

class Sword : public Twohand{
    public:
        Sword(){
            damage = rndm(80, 120);
            dps = 20;
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


int main(){
    int answer = 0;
    User player1;
    User player2;
    string name_for_first_player;
    string name_for_second_player;

//-----------------------------------------------

    cout << "Enter name for 1 player: ";
    cin >> name_for_first_player;
    player1.name = name_for_first_player;

    cout << "(1) one hand weapon or (2) two hand weapon: ";
    cin >> answer;
    if (answer == 1){
        answer = 0;
        cout << "Choose 1 hand weapon: " << endl;
        cout << "(1) Knife " << "(2) Axe" << endl;
        cout << "You answer: ";
        cin >> answer;
            if (answer == 1){
                cout << "Knfie equped" << endl;
                Knife* knife = new Knife();
                player1.addweapon(knife);
                
            }
            else if (answer == 2){
                cout << "Axe equped" << endl;
                Axe* axe = new Axe();
                player1.addweapon(axe);
            }
        }
    else if (answer == 2){
        answer = 0;
        cout << "Choose 2 hand weapon: " << endl;
        cout << "(1) Sword " << "(2) Spear" << endl;
        cout << "You answer: ";
        cin >> answer;
            if (answer == 1){
                cout << "Sword equped" << endl;
                Sword* sword = new Sword();
                player1.addweapon(sword);
            }
            else if (answer == 2){
                cout << "Spear equped" << endl;
                Spear* spear = new Spear();
                player1.addweapon(spear);
            }
        }

    answer = 0;
    cout << "Choose armor for first player" << endl;
    cout << "(1) Leather (+50 hp, -0 dps) " << "(2) Chainmail(+100 hp, -30 dps) " << "(3) Gold (+250 hp, -40 dps)" << endl;
    cout << "You answer: ";
    cin >> answer;
    if(answer == 1){
        cout << "Leather armor equped!" << endl;
        Leather* leather = new Leather();
        player1.addArmor(leather);
    }
    else if(answer == 2){
        cout << "Chainmail armor equped!" << endl;
        Chainmail* chainmail = new Chainmail();
        player1.addArmor(chainmail);
    }
    else if(answer == 3){
        cout << "Gold armor equped!" << endl;
        Gold* gold = new Gold();
        player1.addArmor(gold);
    }

//-----------------------------------------------
    answer = 0;
    cout << "Enter name for 2 player: ";
    cin >> name_for_second_player;
    player2.name = name_for_second_player;

    cout << "(1) one hand weapon or (2) two hand weapon: ";
    cin >> answer;
    if (answer == 1){
        answer = 0;
        cout << "Choose 1 hand weapon: " << endl;
        cout << "(1) Knife " << "(2) Axe" << endl;
        cout << "You answer: ";
        cin >> answer;
            if (answer == 1){
                cout << "Knfie equped" << endl;
                Knife* knife = new Knife();
                player2.addweapon(knife);
                
            }
            else if (answer == 2){
                cout << "Axe equped" << endl;
                Axe* axe = new Axe();
                player2.addweapon(axe);
            }
        }
    else if (answer == 2){
        answer = 0;
        cout << "Choose 2 hand weapon: " << endl;
        cout << "(1) Sword " << "(2) Spear" << endl;
        cout << "You answer: ";
        cin >> answer;
            if (answer == 1){
                cout << "Sword equped" << endl;
                Sword* sword = new Sword();
                player2.addweapon(sword);
            }
            else if (answer == 2){
                cout << "Spear equped" << endl;
                Spear* spear = new Spear();
                player2.addweapon(spear);
            }
        }

    answer = 0;
    cout << "Choose armor for first player" << endl;
    cout << "(1) Leather (+50 hp, -0 dps) " << "(2) Chainmail(+100 hp, -30 dps) " << "(3) Gold (+250 hp, -40 dps)" << endl;
    cout << "You answer: ";
    cin >> answer;
    if(answer == 1){
        cout << "Leather armor equped!" << endl;
        Leather* leather = new Leather();
        player2.addArmor(leather);
    }
    else if(answer == 2){
        cout << "Chainmail armor equped!" << endl;
        Chainmail* chainmail = new Chainmail();
        player2.addArmor(chainmail);
    }
    else if(answer == 3){
        cout << "Gold armor equped!" << endl;
        Gold* gold = new Gold();
        player2.addArmor(gold);
    }
//-----------------------------------------------

    if (player1.hp > 0) {
        cout << player1.name << " wins!" << endl;
    } else {
        cout << player2.name << " wins!" << endl;
    }

    return 0;
}

