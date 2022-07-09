#include<iostream>
using namespace std;

//Inserting a node at the beggining of the list

//Structure of a node
struct Node{
    int data;
    Node *next;
};

//inserting in the front
void insertFront(Node** head,int x){
    Node* new_node=new Node();

    //assigning data
    new_node->data=x;

    // change the next node of this newNode 
    // to current head of Linked List
    new_node->next = *head;

    // new_node should become the new head of Linked List
    *head = new_node;
    
    cout << "Inserted Item: " << new_node->data << endl;

}

//inserting to nth position 
void insert(int data,int pos,Node** head){
    Node* new_node1= new Node();
    new_node1->data=data;
    new_node1->next=NULL;
    if(pos==1){
        new_node1->next=*head;
        *head=new_node1;
        return;
    }

    Node* new_node2=*head;
    for(int i=0;i<pos-2;i++){
        new_node2=new_node2->next;
    }
    
    new_node1->next=new_node2->next;
    new_node2->next=new_node1;
    

}

//inserting to last position
void insertLast(int data,Node** head){
    Node* new_node1=new Node();
    
    new_node1->data=data;
    new_node1->next=NULL;

    Node* temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node1;
}


//deleting Nth position
void deleteN(int n,Node** head){
    Node* new_node1=new Node();
    
    new_node1=*head;
    if(n==1){
        *head=new_node1->next;
        free(new_node1);
    }
    for(int i=0;i<n-2;i++){
        new_node1=new_node1->next;
    }
    
    Node* new_node2=new Node();
    new_node2=new_node1->next;
    new_node1->next=new_node2->next;
    free(new_node2);
}

//reversing a list 
void reverseLinkedList(Node** head){
    Node *current,*prev,*next=new Node();
    current=*head;
    prev=NULL;

    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    *head=prev;
}

void recursiveReversedLinkedList(Node* head){
    Node* node=new Node();
    if(node->next==NULL){
        head=node;
        return;
    }
    recursiveReversedLinkedList(node->next);
    // Node* node1=node->next;
    // node1->next=node;
    node->next->next=node;
    node->next=NULL;
}


void printFront(Node *node){
    cout << "Linked List : "<<endl;
    //as linked list will end when Node is Null
    
    while(node!=NULL){
        cout << node->data << " "; 
        node = node->next;
    }
    cout << endl;
    
}


void recursivePrint(Node* node){
    

    if(node==NULL){
        return;
    }
    cout<<node->data<<" ";
    recursivePrint(node->next);
}





int main(){
    Node* head;
    // creating a head pointer
    head=NULL;
    cout<<"How many numbers do you want to insert: "<<endl;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter an element: ";
        cin>>x;//Element to be inserted
        cout<<endl;
        insertFront(&head,x);
        printFront(head);
    }
    insert(5,2,&head);
    insert(3,3,&head);
    
    printFront(head);
    insertLast(9,&head);
    printFront(head);
    deleteN(2,&head);
    printFront(head);
    reverseLinkedList(&head);
    printFront(head);
    cout<<endl;
    cout<<"Linked List: "<<endl;
    recursivePrint(head);
    cout<<endl;
    recursiveReversedLinkedList(head);
    cout<<"Linked List: "<<endl;
    recursivePrint(head);

    return 0;

}