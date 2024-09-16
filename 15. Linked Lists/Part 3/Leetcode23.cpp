// You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.
// Merge all the linked-lists into one sorted linked-list and return it.
// Example 1:
// Input: lists = [[1,4,5],[1,3,4],[2,6]]
// Output: [1,1,2,3,4,4,5,6]

// Sol 1
// class Solution {
// public:
// // 21 ka  merge function
//       ListNode* merge(ListNode*a, ListNode* b) {
//         // O(1) space
//         ListNode* c= new ListNode(100);
//          ListNode* temp =c;
//          while(a!=NULL && b!=NULL){
//             if(a->val<=b->val){
//                 temp-> next =a;
//                 a=a->next;
//                 temp = temp->next;
//             }
//             else{
//                temp-> next =b;
//                 b=b->next;
//                 temp = temp->next; 
//             }
//          }
//          if(!a) temp->next=b;
//          else temp->next =a;
//          return c->next;
//     }
//     ListNode* mergeKLists(vector<ListNode*>& arr) {
//         if(arr.size()==0) return NULL;
//          while(arr.size()>1){
//             ListNode* a = arr[arr.size()-1];
//             ListNode* b = arr[arr.size()-2];
//             arr.pop_back();
//             arr.pop_back();
//             ListNode* c= merge(a,b);
//             arr.push_back(c);
//          }
//          return arr[0];
//     }
// };

// Sol 2

// class Solution {
// public:
// // 21 ka  merge function
//       ListNode* merge(ListNode*a, ListNode* b) {
//         // Pop front
//         ListNode* c= new ListNode(100);
//          ListNode* temp =c;
//          while(a!=NULL && b!=NULL){
//             if(a->val<=b->val){
//                 temp-> next =a;
//                 a=a->next;
//                 temp = temp->next;
//             }
//             else{
//                temp-> next =b;
//                 b=b->next;
//                 temp = temp->next; 
//             }
//          }
//          if(!a) temp->next=b;
//          else temp->next =a;
//          return c->next;
//     }
//     ListNode* mergeKLists(vector<ListNode*>& arr) {
//         if(arr.size()==0) return NULL;
//          while(arr.size()>1){
//             ListNode* a = arr[0];
//            arr.erase(arr.begin());  // Note
//             ListNode* b = arr[0];
//            arr.erase(arr.begin());
//             ListNode* c= merge(a,b);
//             arr.push_back(c);
//          }
//          return arr[0];
//     }
// };

