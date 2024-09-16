// You are given the head of a linked list.

// The nodes in the linked list are sequentially assigned to non-empty groups whose lengths form the sequence of the natural numbers (1, 2, 3, 4, ...). The length of a group is the number of nodes assigned to it. In other words,

// The 1st node is assigned to the first group.
// The 2nd and the 3rd nodes are assigned to the second group.
// The 4th, 5th, and 6th nodes are assigned to the third group, and so on.
// Note that the length of the last group may be less than or equal to 1 + the length of the second to last group.

// Reverse the nodes in each group with an even length, and return the head of the modified linked list
// Input: head = [5,2,6,3,9,1,7,3,8,4]
// Output: [5,6,2,3,9,1,4,8,3,7]

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
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
//     ListNode* reverseBetween(ListNode* head, int left, int right) {
//         if(left==right) return head;
//       ListNode* a = NULL;
//       ListNode* b = NULL;
//       ListNode* c = NULL;
//       ListNode* d = NULL;
//       int n =1;
//       ListNode* temp = head;
// while(temp){
//     if(n==left-1) a = temp;
//     if(n==left) b= temp;
//     if(n== right) c= temp;
//     if(n==right+1) d= temp;
//     temp=temp->next;
//     n++;
// }
//      if(a) a->next = NULL;
//     if(c) c->next = NULL;
//    c= reverseList(b);
//    if(a) a->next= c;
//    b->next = d;
//     if(a)return head;
//     return c;
//     }
//     ListNode* reverseEvenLengthGroups(ListNode* head) {
//         ListNode* temp = head;
//         int gap =1;
//         while(temp && temp->next){
//          int reml =0;
//          ListNode* t= temp->next;
//          for(int i=1;i<=gap+1 && t!=NULL; i++){
//             t=t->next;
//             reml++;
//          }
//          if(reml<gap+1) gap= reml-1;   
//          if(gap%2!=0) reverseBetween(temp,2,2+gap);
//           gap++;
//           for(int i=1;temp!=NULL && i<=gap;i++){
//             temp =temp->next;
//           }
//         }
//         return head;
//     }
// };
