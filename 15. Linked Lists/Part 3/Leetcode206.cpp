// Given the head of a singly linked list, reverse the list, and return the reversed list

// Iterative method
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         //  Iterative way
//         // 3 pointer method( prev,curr, Next) 4 steps
//        if(head==NULL || head->next==NULL) return head;
//       ListNode* curr= head;
//       ListNode* prev = NULL;
//       ListNode* Next=NULL;
//       while(curr){
//         Next=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=Next;
//       }
//       return prev;
//     }
// };

// Recursive method
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
// };
