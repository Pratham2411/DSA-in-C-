// Given the head of a singly linked list and an integer k, split the linked list into k consecutive linked list parts.
// The length of each part should be as equal as possible: no two parts should have a size differing by more than one. This may lead to some parts being null.
// The parts should be in the order of occurrence in the input list, and parts occurring earlier should always have a size greater than or equal to parts occurring later.
// Input: head = [1,2,3], k = 5
// Output: [[1],[2],[3],[],[]]
// Input: head = [1,2,3,4,5,6,7,8,9,10], k = 3
// Output: [[1,2,3,4],[5,6,7],[8,9,10]]

//class Solution {
// public:
//     vector<ListNode*> splitListToParts(ListNode* head, int k) {
//          ListNode* temp =head;
//          int n=0;
//          while(temp){
//             temp=temp->next;
//             n++;
//          }

//         vector<ListNode*> ans;
//         int size= n/k; // size of each part
//         int rem =n%k;  // utne lists ka size nize+1 hoga

//       temp =head;
//      while(temp){
//         ListNode* c= new ListNode(100);
//         ListNode* tempc=c;
//         int s=size;
//         if(rem>0) s++;
//         rem--;
//         for(int i=1;i<=s;i++){
//              tempc->next=temp;
//              temp=temp->next;
//              tempc=tempc->next; 
//         }
//         tempc->next=NULL; ans.push_back(c->next);
//      }
//      if(ans.size()<k){
//         int extra = k-ans.size();
//         for(int i=1;i<=extra;i++){
//             ans.push_back(NULL);
//         }
//      }
//     return ans;
//     }
// };