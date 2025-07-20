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



// getlength of LL

int getLength(Node* &head){
    Node* temp = head;
    int length=0;
    while(temp!=NULL){
        
        length++;
        temp=temp->next;
    }
    cout << length << endl;
    return length;
}
//Insertion on LL
//1 insert at first

void  insertAtFirst(Node* &head, Node*&tail, int data ){

    //handling the edge cases
    if(head==NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(data);
        temp->next = head;
        head= temp;
    }
   
}


//insertion at end

void insertatTail(Node* &tail, Node* &head, int data){
    //handlign the edge cases
    if(tail==NULL){
        Node* newNode = new Node(data);
        head= newNode;
        tail= newNode;
    }
    else{
        Node* newNode = new Node(data);
        tail->next = newNode;
        tail= newNode;
        
         
    }
}


//insertion at any position

void insertAtPos(Node* &head, Node* &tail, int data , int position){
   //handle all case;
   int Length = getLength(head);
   if(position<=1){
        insertAtFirst(head, tail,data);
   }
   else if(position>Length){
        insertatTail(tail,head,data);
   }
   //agar inke beech me hai toh
   else{
    //creat a new node
    Node* newNode = new Node(data);
    //traverse through the LL to get the current Pos
    Node* prev= NULL;
    Node* curr= head;
    int count =1;
    while(count<position){
        prev=curr;
        curr=curr->next;
        count++;
    }
    //link the new node to prev and curr
    prev->next= newNode;
    newNode->next=curr;
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


//deletion of the lInkedLIst
//deletion at head

void delHead(Node* &head){
    //create an new node temp
    Node* temp = head;
    //move head to next
    head= temp->next;
    //make the temp point to null
    temp->next= NULL;
    //del temp
    delete temp;
}


void delTail(Node* &head, Node* &tail){
    Node* prev= head;
    //traverse through the ll
    while(prev->next!=tail){
        prev= prev->next;
    }
    //make the prev to null
    prev->next = NULL;
    //delete the tail

    delete tail;
    //make the tail to prev
    tail= prev;
}


void delPos(Node* &head, int position){
    Node* prev= NULL;
    Node* curr= head;
    int count =1;
    while(count<position){
        prev= curr;
        curr = curr->next;
        count++;
    }
    prev->next= curr->next;
    curr->next = NULL;
    delete curr;

}


int main()
{   
    // Node* first= new Node(10);
    // Node* second= new Node(20);
    // Node* third= new Node(30);
    // Node* fourth= new Node(40);

    // //conecting the nodes
    // first->next=second;
    // second->next= third;
    // third->next = fourth;
    // fourth->next = nullptr;

    // Node* head = first;
    // Node* tail= fourth;

    // printLL(head);
    // // insertAtFirst(head);
    // // printLL(head);
    // insertatTail(tail, head);
    // printLL(head);

    //creation of ll in a better way usign funcitons
    Node* head= NULL;
    Node* tail= NULL;

    insertAtFirst(head, tail,10);
    insertAtFirst(head, tail,20);
    insertAtFirst(head, tail,30);
    insertAtFirst(head, tail,40);
    insertAtPos(head,tail,760,1);
    //insertatTail(tail,head,500);
    printLL(head);
    //getLength(head);
    delHead(head);
    printLL(head);
    delTail(head, tail);
    printLL(head);

    delPos(head, 2);
    cout << "deleted at pos" << endl;
    printLL(head);
    return 0;
}