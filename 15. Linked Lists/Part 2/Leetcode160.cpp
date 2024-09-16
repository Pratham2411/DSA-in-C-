// Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.

// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         // find len of both lists
//         // larger ke temp ko bdhao until both length are equal
//         // then check
//         int m=size(headA);
//         int n=size(headB);
//         ListNode* temp1=headA;
//         ListNode* temp2=headB;
//         if(m>n) {
//             int diff=m-n;
//             for(int i=1;i<=diff;i++){
//                 temp1=temp1->next;
//             }
//             while(temp1!=temp2){
//                 temp1=temp1->next;
//                 temp2=temp2->next;
//             }
//             return temp1;
//         }
//         else{
//             int diff=n-m;
//             for(int i=1;i<=diff;i++){
//                 temp2=temp2->next;
//             }
//             while(temp1!=temp2){
//                 temp1=temp1->next;
//                 temp2=temp2->next;
//             }
//             return temp1;
//         }      
//     }
//     int size(ListNode* head){
//      ListNode* temp =head;
//       int n = 0;
//       while(temp!=NULL){
//       n++;
//       temp = temp->next;
//    }
//     return n;
//    }
// };