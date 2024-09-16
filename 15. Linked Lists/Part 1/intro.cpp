// Idea of linking two non contiguous memory locations(nodes)
#include<iostream>
using namespace std;
class Node{  // Linked list node
public:
    int val;
    Node*next;
   Node(int val){
    this->val=val;
    this->next=NULL;
   }
};
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // forming ll
    a.next=&b;
    b.next=&c;
    c.next=&d;

  //  cout<< a.next->val<<endl;
   //  a.next->val=50;
  //  cout<<b.val<<endl;
    // (a.next)->next; (C ki adress)
   // cout<<(a.next)->next<<endl;
    // ((a.next)->next)->val;  (c ki value)
   // cout<<((a.next)->next)->val<<endl;
    // Now print value at d
   // cout<< a.next->next->next->val; 
   
   // Printing all nodes
    Node temp =a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp= *(temp.next);      
    }
    
}