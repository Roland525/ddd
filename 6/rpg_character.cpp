#include <iostream>
#include <string>
#include <cmath>
#include <random>
using namespace std;

class User {
    
    public:
        string name;
        int hp;

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

int rndm(int lower, int upper) {
    // Генератор случайных чисел
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(lower, upper);

    return dist(gen);
}

int main(){
    int answer = 0;
    string name_for_first_player;

    cout << "Enter name for 1 player: ";
    cin >> name_for_first_player;


    cout << "(1) one hand weapon or (2) two hand weapon:" << endl;
    cin >> answer;
    if (answer == 1){
        answer = 0;
        cout << "Choose 1 hand weapon for first hand: ";
        for(int i= 0; i < 0; i++){
            cout << "(" << i << ")" << 
        };
        cout << "You answer: ";
        cin >> answer;
        }


    if (answer == 2){
        answer = 0;
        cout << "Choose 2 hand weapon for first hand: ";

        for(int i= 0; i < 0; i++){
            cout << "(" << i << ")" << ;
        };

        cout << "You answer: ";
        cin >> answer;
    }


    cout << "Choose armor for first player"; 
    answer = 0;
    

    return 0;
}

