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

void link(node* &tail, int data){
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
int main() {
    node * n1 = new node(67);
    node * head = n1;
    node * tail = n1;
    link(tail,23);
    link(tail,87);
    link(tail,15);
    display(head);

    //finding length of LL
    length(head);
    
    return 0;
}