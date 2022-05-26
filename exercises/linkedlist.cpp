#include<iostream>
using namespace std;

template <class T>
class Node {
public:
  Node() {
      next = nullptr;
  }

  T value;
  Node<T>* next;

};

template <class T>
void printNormal(Node<T>* node) {
    Node<T>* temp = node;
    while(temp != nullptr) {
        cout<< temp->value << "";
        temp = temp->next;
    }
}

// LO MISMO QUE print Normal
template <class T>
void printRec(Node<T>* node) {
    if(node == nullptr)
        return;
    else {
        cout<< node->value << " \n";
        return printRec(node->next);
    }
    
}

template <class T>
class LinkedList {
protected:
    Node<T>* root;
        
public:
    
    LinkedList() {
        root = nullptr;
    }
    
    void add(Node<T>* node) {
        if(root == nullptr) 
            root = node;
        else {
            Node<T>* temp = traverse(root);
        }
            
    }
    
    Node<T>* traverse(Node<T>* node) {
        if(node->next == nullptr)
            return node;
        else
            return traverse(node->next);
    }

};

int main(){

    Node<char>* node = new Node<char>();
    Node<char>* nodeEight = new Node<char>();

    node->value = '6';
    nodeEight->value = 8;

    node->next = nodeEight;

    Node<char>* nodeNine = new Node<char>();
    nodeNine->value = '9';
    nodeEight->next = nodeNine;

    printNormal(node);
    
    return 0;
}
