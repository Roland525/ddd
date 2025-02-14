#include <iostream>
using namespace std;

class Node
{
private:
    int value;
    Node* next_member = nullptr;

public:
    Node(int value) : value(value) {}
    void add_next_member(Node* ptr)
    {
        next_member = ptr;
    }
    int get_value()
    {
        return value;
    }
    Node* get_next_member()
    {
        return next_member;
    }
};

class LinkedList
{
public:
    Node* first_elem = nullptr;
    LinkedList(Node* first_elem) : first_elem(first_elem) {}

    void insert(int position, int value)
    {
        Node* newNode = new Node(value);

        if (position == 0)
        {
            newNode->add_next_member(first_elem);
            first_elem = newNode;
            return;
        }
    }

    void append(int value) {
        //add elem after the last elem
        Node* newNode = new Node(value);

        if (first_elem == nullptr) {
            first_elem = newNode;
            return;
        }

        Node* current = first_elem;
        while (current->get_next_member() != nullptr) {
            current = current->get_next_member();
        }
    
        current->add_next_member(newNode);
    }

    void push(int value){
 // add elem at the beggining of the list 
        Node* newNode = new Node(value);
        newNode-> add_next_member(first_elem);
        first_elem = newNode;
    }
    void pop(int value){
  // get the first elem of the list and than delete it
        
        Node* newNode = new Node(value);
        Node* current = first_elem;
        first_elem = nullptr;

        while (current->get_next_member() != nullptr) {
            first_elem = current;
        }

    }
    void del(int position){} // delete elem that is placed in positon

    int get_len(){
        int i = 0;
        Node* current = first_elem;
        while (current != nullptr){
            i++;
            current = current->get_next_member();
        }
        return i;
    }
};

int main()
{
    Node* node0 = new Node(12);
    Node* node1 = new Node(123);
    node0->add_next_member(node1);
    LinkedList llist = LinkedList(node0);
    cout << llist.first_elem->get_value() << endl;
    cout << llist.first_elem->get_next_member()->get_value() << endl;
    cout << llist.get_len() << endl;
    llist.insert(1,123);
    llist.append(12);
    llist.push(123);
    llist.pop(1);

}