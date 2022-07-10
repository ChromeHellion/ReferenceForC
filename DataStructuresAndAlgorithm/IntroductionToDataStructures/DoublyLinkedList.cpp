#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
};



void insert(Node** head,int x){
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next =(*head);
    newNode->prev =NULL;
    if((*head) != NULL){
        (*head)->prev=newNode;
        
    }
    *head=newNode;
}


//inserting to the end 
void insertEnd(Node** head,int x){
    Node* newNode=new Node();
    newNode->data=x;
    newNode->prev=(*head);
    newNode->next=NULL;

    if((*head)==NULL){
        newNode->prev=NULL;
        *head=newNode;
    }

    Node* temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
}


void printNode(Node* node){
    Node* newNode=node;
    cout<<"Linked List: "<<endl;
    if(newNode->prev==NULL){
        cout<<"NULL <-> ";
    }
    while(newNode!=NULL){
        cout<<newNode->data<<" <-> ";
        newNode=newNode->next;
    }
    if(newNode==NULL){
        cout<<" NULL";
    }

    cout<<endl;

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
    insertEnd(&head,45);
    printNode(head);
}