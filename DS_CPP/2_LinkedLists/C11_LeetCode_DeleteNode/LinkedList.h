#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* nextElement;

    Node(int value) : data{value} {
        nextElement = nullptr;
    }
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList();
    Node* getHead();
    bool isEmpty();
    bool printList();
    void insertAtHead(int value);
    void insertAtTail(int value);
    bool search(int value);
    bool deleteHead();
    bool Delete(int value);
    int length();
    void reverse();
    bool detectLoop();
    void insertLoop();
    int findMid();
    void removeDuplicates();
    void Union(LinkedList list1, LinkedList list2);
    LinkedList Intersection(LinkedList list1, LinkedList list2);
    int findNth(int n);
};