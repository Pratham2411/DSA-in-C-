// You are given the heads of two sorted linked lists list1 and list2.
// Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.
// Return the head of the merged linked list.

// Input: list1 = [1,2,4], list2 = [1,3,4]
// Output: [1,1,2,3,4,4]

// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
//         //  using merge sort
//         // SC: O(m+n)
//          ListNode* tempA=a;
//          ListNode* tempB=b;
//          ListNode* c = new ListNode(100); 
//          ListNode* tempC = c;
//          while(tempA!=NULL && tempB!=NULL){
//             if(tempA->val <= tempB->val){
//                   ListNode* t = new ListNode(tempA->val);
//                   tempC->next = t;
//                   tempC =t; 
//                   tempA= tempA->next;
//             }
//         else {
//           ListNode* t = new ListNode(tempB->val);
//                   tempC->next = t;
//                   tempC =t; 
//                   tempB= tempB->next;  
//         }         
//          }
//          if(!tempA) {
//             tempC->next= tempB;
//          }
//          else{
//            tempC->next= tempA; 
//          }
//          return c->next;
//     }
// };

// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode*a, ListNode* b) {
//         // O(1) space
//         ListNode* c= new ListNode(100);
//          ListNode* temp =c;
//          while(a!=NULL && b!=NULL){
//             if(a->val<=b->val){
//                 temp-> next =a;
//                 a=a->next;
//                 temp = temp->next;
//             }
//             else{
//                temp-> next =b;
//                 b=b->next;
//                 temp = temp->next; 
//             }
//          }
//          if(!a) temp->next=b;
//          else temp->next =a;
//          return c->next;
//     }
// };
