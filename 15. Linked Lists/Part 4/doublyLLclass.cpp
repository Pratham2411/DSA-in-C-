#include<iostream>
using namespace std;
class Node{ 
public:
    int val;
    Node*next;
    Node*prev;
   Node(int val){
    this->val=val;
    this->next=NULL;
    this->prev=NULL;
   } 
};
class DLL{ 
public:
  Node*head;
  Node*tail;
  int size;
  DLL(){
    head=tail=NULL;
    size =0;
  }

void display(){
    Node* temp = head;
   while(temp !=NULL){
      cout<<temp ->val<<" ";
      temp = temp ->next;
   }
   cout<<endl;
   }
void insertAtTail(int val){
    Node* temp = new Node(val);
    if(size==0) head =  tail = temp;
    else {
        tail->next = temp;
        temp->prev=tail;
        tail = temp;
    }
    size++;
  }

void insertAtHead(int val){
     Node* temp = new Node(val);
     if(size==0) head =  tail = temp;
     else {
        temp->next=head;
        head->prev=temp;
        head= temp;
  }
   size++;
  }

void insertAt(int idx, int val){     
  if(idx==0) insertAtHead(val);
  else if(idx==(size-1))  insertAtTail(val);
  else if(idx<0||idx>size)  cout<<"Invalid index"<<endl;
  else{
    Node* t = new Node(val);
    Node*temp = head;
    for(int i=1;i<=idx-1;i++){
        temp=temp->next;
    }
    t->next=temp->next;
    temp->next=t;
    t->prev=temp;
    t->next->prev=t;

    size++;
  }
} 


void deleteAtHead(){
    if(size==0) {
        cout<<"List is empty ";
        return;
    }
    else {
        head=head->next;
      if(head)  head->prev=NULL;
        if(!head) tail=NULL;
        size--;
    }
}

void deleteAtTail(){
     if(size==0) {
        cout<<"List is empty ";
        return;
    }
    else if(size==1){  deleteAtHead(); 
              return;
    }
    else{// better than sll
       Node* temp= tail->prev;
       temp->next=NULL;
       tail=temp;
       size--;
    }
}

void deleteAt(int idx){
   if(size==0) {
        cout<<"List is empty ";
        return;
    } 
   else if(idx<0||idx>=size){
    cout<<"Invalid Index "<<endl;
    return ;
 }    
  else if(idx==0) deleteAtHead();
  else if(idx==(size-1)) deleteAtTail();
  else{
    Node*temp=head;
    for(int i=1;i<=idx-1;i++){
        temp=temp->next;
    } 
     temp->next = temp->next->next;
     temp->next->prev=temp;
    size--;
  }
}

int getIdx(int idx){
 if(idx<0||idx>=size){
    cout<<"Invalid Index "<<endl;
    return -1;
 }   
 else if(idx==0) return head->val;
 else if(idx==(size-1)) return tail->val;
 else{                           
     if(idx<size/2){
         Node*temp=head;
    for(int i=1;i<=idx;i++){
        temp=temp->next;
    }
    return temp->val;
    }
    else{
      Node*temp=tail;
       for(int i=1;i<=size-idx;i++){
        temp=temp->next;
      }
       return temp->val;
    }
     }
}

};
int main(){
   DLL dll;
   dll.insertAtTail(10);
   dll.insertAtTail(20);
   dll.insertAtTail(30);
   dll.insertAtTail(40);
   dll.display();
   dll.insertAtHead(50);
   dll.display();
   dll.insertAt(2,60);
   dll.display();
   dll.deleteAtHead();
   dll.display();
   dll.deleteAtTail();
   dll.display();
   dll.deleteAt(3);
   dll.display();
   cout<<dll.getIdx(2);
}