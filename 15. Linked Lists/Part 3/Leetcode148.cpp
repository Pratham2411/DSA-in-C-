// Given the head of a linked list, return the list after sorting it in ascending order.

// class Solution {
// public:

//       ListNode* merge(ListNode*a, ListNode* b) {
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

//     ListNode* sortList(ListNode* head) {
//         // use of merge sort
//         // sc O(1)
//         // find middle element ( slow and fast pointer )
//         if(head==NULL || head->next==NULL) return head;
//         ListNode* slow = head;
//         ListNode* fast= head;
//         while(fast->next!=NULL && fast->next-> next!=NULL){
//             slow=slow->next;
//             fast=fast-> next->next;
//         }
//         // slow is at left middle
//           ListNode* a = head;
//           ListNode* b = slow->next;
//           slow->next=NULL;
//           a=sortList(a);
//           b=sortList(b);
//           ListNode* c= merge(a,b);
//           return c;
//     }
// };
