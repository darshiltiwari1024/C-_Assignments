// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class LinkedListNode{
    public:
    int data;
    LinkedListNode* next;
    
    LinkedListNode(int data){
        this->data = data;
        this->next = NULL;
    }
    
    ~LinkedListNode(){
        int value = this-> data;
        if(this -> next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for data "<<value<<endl;
    }
};
    void insertAtBeg(LinkedListNode* &head, int d ){
        LinkedListNode* node = new LinkedListNode(d);
        node->next = head;
        head = node;
    }
    
    void insertAtTail(LinkedListNode* &tail , int d){
        LinkedListNode* temp = new LinkedListNode(d);
        tail->next = temp;
        tail = tail->next;
    }
    void insertAtPosition(LinkedListNode* &head , int position, int d){
        LinkedListNode* temp = head;
        int c = 1;
        
        while(c < position-1){
            temp = temp->next;
            c++;
        }
        LinkedListNode* newNode = new LinkedListNode(d);
        newNode->next = temp->next ;
        temp->next = newNode;
        
        
        
    }
    void display(LinkedListNode* &head){
        LinkedListNode* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" , ";
            temp = temp->next;
        }
    }
    
    void displayMore(LinkedListNode* &head){
        LinkedListNode* temp = head;
        while(temp != NULL){
            cout<<"Address : "<< temp<<" , ";
            cout<<"Data: " << temp->data<<" , ";
            cout<<"Next Node Address : "<< (temp->next)<<" , "<<endl;
            temp = temp->next;
        }
    }
    
    int getLength(LinkedListNode* &head){
        LinkedListNode* temp = head;
        int counter = 0;
        while(temp != NULL){
         
            temp = temp->next;
            counter++;
        }
        return counter;
    }
    
    
    void RemoveFirst(LinkedListNode* &head){
        LinkedListNode* temp = head;
        head = head-> next;
        temp->next = NULL;
        delete temp;
    }
    
    void RemoveLast(LinkedListNode* &head){
        LinkedListNode* temp = head;
        LinkedListNode* pre = NULL;
        
        while(temp->next != NULL){
            pre = temp;
            temp = temp->next;
        }
        pre->next = NULL;
        temp->next = NULL;
        delete temp;
    }
    
    void RemovePOS(LinkedListNode* &head, int pos){
        LinkedListNode* temp = head;
        LinkedListNode* pre = NULL;
        int cnt = 1;
        while(cnt < pos){
            pre = temp;
            temp = temp->next;
            cnt++;
        }
        pre->next = temp->next;
        temp->next = NULL;
        delete temp;
    }
    
    


int main() {
    // Write C++ code here
    LinkedListNode* n1 = new LinkedListNode(10);
    //cout<<n1->data<<endl;
    //cout<<n1->next<<endl;
    
    LinkedListNode* head = n1;
    LinkedListNode* tail = n1;
    
    
    insertAtBeg(head,5);
    insertAtBeg(head,2);
    
    insertAtTail(tail,15);
    insertAtTail(tail,26);
    
    insertAtPosition(head,3,1111);
    
    
    
    display(head);
    
    cout<<endl; 
    displayMore(head);
    cout<<endl;
    
    cout<<endl<<"List length  : "<<getLength(head)<<endl;
    
    RemoveLast(head);
    display(head);
    
    RemoveFirst(head);
    display(head);
    
    RemovePOS(head, 2);
    display(head);
    
    
    

    return 0;
}
