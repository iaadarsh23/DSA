#include <iostream>
using namespace std;

class Node{
    public:

        int data;
        Node* next;

        //lets make a default and the parameterized contructor
        Node(){
            //cout << "Im inside default" ;
            // this->data = 0; // Optionally initialize data to 0
            this->next = NULL;
        }
        
        Node(int data){
            //cout << " Im inside parameterized";
            this->data= data;
            this->next = NULL;
        }
};

void printLL(Node* head){
    Node* temp = head;
    int count=0;
    while(temp != NULL){
        cout << temp->data << "->" ;
        count++;
        temp= temp->next;
    }
    cout << count << endl;
}   


int main()
{
    //Node n;
    Node* first= new Node(10);
    Node* second= new Node(20);
    Node* third= new Node(30);
    Node* fourth= new Node(40);   


    //insitialiting the next pointer;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = nullptr;
    
    //initializing the head pointer
    Node* head = first;
    printLL(head);
    return 0;
}