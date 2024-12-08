// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Contacts{
    public:
    string data;
    int number;
    Contacts* next;
    
    Contacts(string data, int number){
        this->data = data;
        this->number = number;
        this->next = NULL;
    }
    
    ~Contacts(){
        string value = this-> data;
        if(this -> next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for data "<<value<<endl;
    }
};
    void insertAtBeg(Contacts* &head, string d, int n ){
        Contacts* node = new Contacts(d,n);
        node->next = head;
        head = node;
    }
    
    void insertAtTail(Contacts* &tail , string d,int n){
        Contacts* temp = new Contacts(d,n);
        tail->next = temp;
        tail = tail->next;
    }
    void insertAtPosition(Contacts* &head , int position, string d,int n){
        Contacts* temp = head;
        int c = 1;
        
        while(c < position-1){
            temp = temp->next;
            c++;
        }
        Contacts* newNode = new Contacts(d,n);
        newNode->next = temp->next ;
        temp->next = newNode;
        
        
        
    }
    void display(Contacts* &head){
        Contacts* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" : "<<temp->number<<endl;
            temp = temp->next;
        }
    }
    
    void displayMore(Contacts* &head){
        Contacts* temp = head;
        while(temp != NULL){
            cout<<"Address : "<< temp<<" , ";
            cout<<"Data: " << temp->data<<" , ";
            cout<<"Next Node Address : "<< (temp->next)<<" , "<<endl;
            temp = temp->next;
        }
    }
    
    int getLength(Contacts* &head){
        Contacts* temp = head;
        int counter = 0;
        while(temp != NULL){
         
            temp = temp->next;
            counter++;
        }
        return counter;
    }
    
    
    void RemoveFirst(Contacts* &head){
        Contacts* temp = head;
        head = head-> next;
        temp->next = NULL;
        delete temp;
    }
    
    void RemoveLast(Contacts* &head){
        Contacts* temp = head;
        Contacts* pre = NULL;
        
        while(temp->next != NULL){
            pre = temp;
            temp = temp->next;
        }
        pre->next = NULL;
        temp->next = NULL;
        delete temp;
    }
    
    void RemovePOS(Contacts* &head, int pos){
        Contacts* temp = head;
        Contacts* pre = NULL;
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
    Contacts* n1 = new Contacts("Vijay",942);
    //cout<<n1->data<<endl;
    //cout<<n1->next<<endl;
    
    Contacts* head = n1;
    Contacts* tail = n1;
    
    
    insertAtBeg(head,"Gourav",114);
    insertAtBeg(head,"Dinesh",242);
    
    insertAtTail(tail,"Rajiv",232);
    insertAtTail(tail,"Dixit",675);
    
    insertAtPosition(head,3,"Shikha",121);
    
    
    
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
