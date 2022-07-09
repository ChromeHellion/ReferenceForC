#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
};

struct Node* getIntNode(int x){
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next =NULL;
    newNode->prev =NULL;
    return newNode;
}

void insert(Node** head,int x){
    Node* newNode = getIntNode(x);
    if(head == NULL){
        *head=newNode;
        return;
    }
    *head->prev =newNode;
    newNode->next =*head;
    head=newNode;
}


void printNode(Node* node){
    cout<<"Linked List"<<endl;
    while(node!=NULL){
        cout<<node->data;
        node=node->next;
    }

}
int main(){
    Node* head;
    head=NULL;
    int x;
    insert(&head,8);
    printNode(head);
    insert(&head,10);
    printNode(head);
    insert(&head,1);
    printNode(head);
    insert(&head,54);
    printNode(head);
}