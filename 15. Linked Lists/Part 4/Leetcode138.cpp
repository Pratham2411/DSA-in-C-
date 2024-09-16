//  Copy List with Random Pointer
 
// Create a deep copy(without random)
  /*
class Node {
public:
    int val;
    Node* next;
    Node* random;
    }
};
*/

// class Solution {
// public:
//     Node* copyRandomList(Node* head) {
//         // Deep copy without random pointer
//        Node* dummy = new Node(0);
//        Node* temp = head;
//        Node* tempd= dummy;
//        while(temp){
//         Node* a= new Node(temp->val);
//         tempd->next= a;
//         tempd=tempd->next;
//         temp=temp->next; 
//        } 
//        Node* duplicate = dummy->next;
//     // Create alternate connections (merge both alternatively)
//      Node* a= head;
//      Node* b= duplicate;
//      dummy= new Node(-1);
//      Node* tempD = dummy;
//      while(b){
//         tempD->next = a;
//         a=a->next;
//         tempD=tempD->next;
//         tempD->next = b;
//         b=b->next;
//         tempD=tempD->next;
       
//      }
//      dummy = dummy->next; // Big list
//     // Assigning random pointer of duplicates
//       Node* t1= dummy;  // for orignal list
//       while(t1){
//        Node* t2=t1->next; // duplicate list
//         if(t1->random) t2->random = t1->random->next;
//         t1=t1->next->next;
//       }
//     // Removing the connections (Seperate the lists)
//     Node* d1= new Node(-1);
//     Node* d2 = new Node(-1);
//     t1= d1;
//     Node* t2= d2;
//     Node* t= dummy;
//     while(t){
//         t1->next =t;
//         t=t->next;
//         t1=t1->next;
//         t2->next=t;
//         t=t->next;
//         t2=t2->next;
//     }
//     t1->next=NULL;
//     t2->next=NULL;
//     d1=d1->next;  // orignal
//     d2=d2->next;  // duplicate
//     return d2;
//     }
// };