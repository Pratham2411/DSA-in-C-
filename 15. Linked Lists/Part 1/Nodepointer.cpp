#include<iostream>
using namespace std;
class Node{  
public:
    int val;
    Node*next;
   Node(int val){
    this->val=val;
    this->next=NULL;
   } 
};
// displaying ll iteratively      O(n)/O(1)   T/S
void display(Node* head){
   while(head!=NULL){
      cout<<head->val<<" ";
      head= head->next;
   }
   cout<<endl;
   }
// displaying ll recursively      O(n)/O(n)
void display2(Node* head){
   if(head==NULL) return;
   cout<< head->val<<" "; // switch both functions to print reverse
   display2(head->next);
 }

 // size of ll
int size(Node* head){
      Node* temp =head;
      int n = 0;
      while(temp!=NULL){
      n++;
      temp = temp->next;
   }
    return n;
   }
   
 void insertAtend(Node* head, int val){
    Node*t = new Node(val);
    while(head->next!=NULL) head=head->next;
    head->next= t;
 }

int main(){
   Node* a = new Node(10);
   Node* b = new Node(20);
   Node* c = new Node(30);
   Node* d = new Node(40);
   Node* e = new Node(50);
   a->next=b;
   b->next=c;
   c->next=d;
   d->next=e;
  //  cout<<a->next->next->next->val; // Value of d   `
 // display(a);
 // display2(a);
 //cout<<size(a);
 insertAtend(a,60);
  display(a);

}