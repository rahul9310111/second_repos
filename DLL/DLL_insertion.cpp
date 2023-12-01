// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class node{
  public:
  int data;
  node* next;
  node * prev;
  
  node(int data ){
      this->data = data;
      this->next = NULL;
      this->prev = NULL;
  }
};

void insertathead(node* &head , int data){
    node*temp = new node(data);
    temp->next = head;
    head->prev = temp;
    head  = temp;
}


void insertattail(node* &tail, int data){
    node * temp = new node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = tail->next;
}

void display(node* &head){
    node * temp = head ;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

void length(node* & head){
    node * temp = head;
    int count = 0;
    while(temp != NULL){
        count++;   
        temp = temp->next;
    }
    cout<<"length of LL is "<<count<<endl;
}

void insertion(int p , int data , node* & head ){
    node* temp = head;
    node* given = new node(data);
    int cnt = 1;
    if(p == 1){
        insertathead(head,data);
        return ;
        
    }
    if(temp->next == NULL){
        insertattail(head,data);
        return ;
    }
    while(cnt<p-1){
        temp = temp->next;
        cnt++;
    }
    
    given->next = temp->next;
    temp->next->prev = given;
    
     given->prev =temp->next;
     temp->next = given;
}

int main() {
    node * n1 = new node(67);
    node * head = n1;
    node * tail = n1;
    insertattail(tail,23);
    insertattail(tail,87);
    insertattail(tail,15);
    
    insertion(5,55,head);
    // insertion(4,7587,head);
    
    display(head);

    //finding length of LL
    // length(head);
    
    return 0;
}