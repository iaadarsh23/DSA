#include <iostream>
using namespace std;

class Node{
    public:

        int data;
        Node* next;

        Node(int data){
            this->data= data;
            this->next=NULL;
        }
};


//Insertion on LL
//1 insert at first

void  insertAtFirst(Node* &head, Node*&tail ){

    //handling the edge cases
    if(head==NULL){
        Node* newNode = new Node(5);
        head = temp;
        tail = temp;
    }
    else{
        if(Head= NULL){
            Node* temp = new Node(5);
            head= temp;
    
        }
        Node* temp = new Node(5);
        temp->next = head;
        head= temp;
    }



   
}

//printing
void printLL(Node* head){
    Node* temp = head;
  
    while(temp != NULL){
        cout << temp->data << "->"  ;
       
        temp= temp->next;
    }
    cout << endl;
  
}   



int main()
{   
    Node* first= new Node(10);
    Node* second= new Node(20);
    Node* third= new Node(30);
    Node* fourth= new Node(40);

    //conecting the nodes
    first->next=second;
    second->next= third;
    third->next = fourth;
    fourth->next = nullptr;

    Node* head = first;

    printLL(head);
    insertAtFirst(head);
    printLL(head);
    return 0;
}