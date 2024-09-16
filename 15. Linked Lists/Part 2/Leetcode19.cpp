// Given the head of a linked list, remove the nth node from the end of the list and return its head.
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//                 int size =0;
//       ListNode* temp =head;
//         while(temp!=NULL){
//                  size++;
//             temp=temp->next;    
//         }
//         if(size==n) {
//             head=head->next;
//             return head;
//         }
//          temp = head;
//          int idx= size-n;
//          for(int i=1;i<=idx-1;i++){
//           temp=temp->next;
//       } 
//        temp->next = temp->next->next;
//        return head;    
//     }
// };

// Method 2

// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         // phle fast ko n+1 steps aage le jao
//         // phir slow fast ko saath move kro
//     ListNode* fast = head;
//     ListNode* slow = head;
//     for(int i=1;i<=n+1;i++){
//         if (fast == NULL) {
//             return head->next;
//         }
//         fast = fast->next;
//     }  
//    while(fast!=NULL){
//     slow=slow->next;
//     fast=fast->next;
//    }
//     slow->next= slow->next->next;
//     return head;
//     }
// };