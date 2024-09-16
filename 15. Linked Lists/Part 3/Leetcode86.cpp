// Given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.
// You should preserve the original relative order of the nodes in each of the two partitions
// Input: head = [1,4,3,2,5,2], x = 3
// Output: [1,2,2,4,3,5]

// class Solution {
// public:
//     ListNode* partition(ListNode* head, int x) {
//       ListNode* temp=head;
//       ListNode* lo= new ListNode(2411);
//       ListNode* tempa=lo;
//       ListNode* hi= new ListNode(1142);
//       ListNode* tempb=hi;
//       while(temp){
//         if(temp->val<x){
//             tempa->next=temp;
//             temp=temp->next;
//             tempa=tempa->next;
//         }
//         else{
//             tempb->next=temp;
//             temp=temp->next;
//             tempb=tempb->next;  
//         }
//       } 
//       tempa->next=hi->next;
//       tempb->next=NULL;
//       return lo->next ;
//     }   
// };