// Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and return the reversed list.

// Input: head = [1,2,3,4,5], left = 2, right = 4
// Output: [1,4,3,2,5]

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
//    c->next = NULL;
//    c= reverseList(b);
//    if(a) a->next= c;
//    b->next = d;
//     if(a)return head;
//     return c;
//     }
// };