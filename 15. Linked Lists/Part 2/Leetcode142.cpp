// Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.

         // when fast==slow int temp = head
        // slow and temp ko 1-1 aage badhao
        // slow==temp jb hoga whi ans node h

// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {          
//        ListNode* slow = head;
//          ListNode* fast =head;
//          while(fast!=NULL && fast->next!=NULL){ 
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast) {
//                 ListNode* temp=head;
//                 while(temp!=slow){
//                     temp=temp->next;
//                     slow=slow->next;
//                 }
//                 return temp;
//             }
//          }
//       return NULL;
//     }
// };