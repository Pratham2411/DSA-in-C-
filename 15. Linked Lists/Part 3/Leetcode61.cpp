// Given the head of a linked list, rotate the list to the right by k places.
// Input: head = [1,2,3,4,5], k = 2
// Output: [4,5,1,2,3]
// APP 1 (k<n)
// s=f=h
// move fast k steps ahead
// move s and f together till f->next is null
// f->next = head
// head=slow->next
// slow->next = null
// return head


// class Solution {
// public:
//     ListNode* rotateRight(ListNode* head, int k) {
//         // 3 pointer concept
//         if(head==NULL|| head->next==NULL) return head;
//       int n =0;
//       ListNode* temp= head;
//       ListNode* tail= NULL;    
//       while(temp!=NULL){
//         if(temp->next==NULL) tail = temp;
//         temp=temp->next;
//         n++;
//       }     
//       k=k%n;
//     if(k==0) return head;
//       temp = head;
//       for(int i=1;i<n-k;i++){
//         temp=temp->next;
//       }
//       tail->next= head;
//       head= temp->next;
//       temp->next=NULL;
//       return head;
//     }
// };