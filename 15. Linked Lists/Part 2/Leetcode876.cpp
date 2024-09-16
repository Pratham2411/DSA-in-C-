// Given the head of a singly linked list, return the middle node of the linked list.
// If there are two middle nodes, return the second middle node.
// Input: head = [1,2,3,4,5]
// Output: [3,4,5]
// Input: head = [1,2,3,4,5,6]
// Output: [4,5,6]

// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         int size =0;
//       ListNode* temp =head;
//         while(temp!=NULL){
//             temp=temp->next;
//             size++;
//         }
//         if(size==1) return head;
//          ListNode* t =head;
//         for(int i=1;i<=(size/2);i++){
//             t=t->next;
//         }
//        return t;     
//     }
// };

// One pass soultion(For interveiw) 
// slow and fast pointer technique

// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//          ListNode* slow = head;
//          ListNode* fast =head;
//          while(fast!=NULL && fast->next!=NULL){ // imp to write in order
//             slow=slow->next;
//             fast=fast->next->next;
//          }
//          return slow;
//     }
// };
// Note: To find left middle change second condition to fast->next->next!= NULL