#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
class Linkedlist{
    private:
    Node* head;
    public:
    Linkedlist(int data){
        head = new Node();
        head->data = data;
        head->next = NULL;
    }
    void insertnode(int data){
        Node* node = new Node();
        node->data = data;
        node->next = NULL;
        if(head->next == NULL){
            head->next = node;
            return;
        }
        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = node;
    }
    void printLinkedlist(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void deletenode(int data){
        Node* temp = head->next;
        Node* prev = head;
        if(head->data == data){
            head = head->next;
            return;
        }
        while(temp->next != NULL){
            if(temp->data == data){
                prev->next = temp->next;
                break;
            }
            prev = temp;
            temp = temp->next;
        }
        if(temp->next == NULL && temp->data == data){
            prev->next = NULL;
        }
    }
};
int main(){
    Linkedlist* list = new Linkedlist(1);
    list->insertnode(2);
    list->insertnode(3);
    list->printLinkedlist();
    list->deletenode(2);
    list->printLinkedlist();
    return 0;
}