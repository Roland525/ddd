#include <iostream>
#include <string>
using namespace std;

class User {
    public:
        string name;
        int hp;

};
class Weapon : public User{
    public:
        int damage;
};


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


    cout << ""
    return 0;
}

