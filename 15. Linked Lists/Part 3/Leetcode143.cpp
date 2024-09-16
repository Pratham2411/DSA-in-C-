// You are given the head of a singly linked-list. The list can be represented as:
// L0 → L1 → … → Ln - 1 → Ln
// Reorder the list to be on the following form:
// L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
// You may not modify the values in the list's nodes. Only nodes themselves may be changed.

// Input: head = [1,2,3,4]
 // Output: [1,4,2,3]


// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//          // Recursive way
//        if(head==NULL || head->next==NULL) return head;
//      ListNode* newHead=reverseList(head->next);
//     head->next->next= head;
//     head->next=NULL;
//     return newHead;
//     }

//     void reorderList(ListNode* head) {
//       // find left middle aur uske aage ka reverse kardo
//       // break it into two ll
//       // merge both picking one element from each (fake node)
//         ListNode* slow = head;
//          ListNode* fast =head;
//          while(fast->next!=NULL && fast->next->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//          }
//        // slow is at middle/ left middle
//      ListNode* b= reverseList(slow->next);
//      ListNode* a= head;
//      slow->next=NULL;  // breaking lists
//      // merge two element by element 
//      ListNode* c= new ListNode(100);
//      ListNode* tempC = c;
//      ListNode* tempA = a;
//      ListNode* tempB = b;
//      while(tempA && tempB){
//         tempC->next = tempA;
//         tempA = tempA->next;
//         tempC = tempC->next;

//         tempC->next = tempB;
//         tempB = tempB->next;
//         tempC = tempC->next;
        
//      }
//       tempC->next=tempA;
//       head = c->next;
//     }
// };