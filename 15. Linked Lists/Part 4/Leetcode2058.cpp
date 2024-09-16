// A critical point in a linked list is defined as either a local maxima or a local minima.
// A node is a local maxima if the current node has a value strictly greater than the previous node and the next node.
// A node is a local minima if the current node has a value strictly smaller than the previous node and the next node.
// Note that a node can only be a local maxima/minima if there exists both a previous node and a next node.
// Given a linked list head, return an array of length 2 containing [minDistance, maxDistance] where minDistance is the minimum distance between any two distinct critical points and maxDistance is the maximum distance between any two distinct critical points. If there are fewer than two critical points, return [-1, -1].
// Input: head = [3,1]
// Output: [-1,-1]
// Input: head = [5,3,1,2,5,1,2]
// Output: [1,3]

// class Solution {
// public:
//     vector<int> nodesBetweenCriticalPoints(ListNode* head) {
//        int idx=1;
//        int fidx=-1;
//        int sidx =-1;
//        ListNode* a =head;
//        ListNode* b= head->next;
//        ListNode* c= head->next->next;
//        // max distance
//        while(c){
//         if(b->val> a->val && b->val> c->val ||b->val< a->val && b->val< c->val){
//             if(fidx==-1) fidx = idx;
//             else{
//                 sidx= idx;
//             }
//         } 
//         a=a->next;
//         b=b->next;
//         c=c->next;
//         idx++;   
//        }
//        if(sidx ==-1) return{-1,-1};
//        int maxd = sidx-fidx;
//        // min distance
//         fidx =-1;
//         sidx =-1;
//         idx =1;
//         int mind =INT_MAX;
//          a =head;
//          b= head->next;
//          c= head->next->next;
//      if(!c) return {-1,-1};
//       while(c){
//         if(b->val> a->val && b->val> c->val ||b->val< a->val && b->val< c->val){
//            fidx = sidx;
//            sidx =idx;
//            if(fidx!=-1) {
//             int d = sidx - fidx;
//            mind = min(mind,d);
//            }       
//         } 
//         a=a->next;
//         b=b->next;
//         c=c->next;
//         idx++;   
//        }   
//     return{mind, maxd};
//     }
// };
