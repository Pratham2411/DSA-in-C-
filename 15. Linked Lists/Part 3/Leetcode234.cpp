// Given the head of a singly linked list, return true if it is a palindrome or false otherwise
// Method 1
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         //  Iterative way
//         // 3 pointer method( prev,curr, Next) 4 steps
//         if (head == NULL || head->next == NULL)
//             return head;
//         ListNode* curr = head;
//         ListNode* prev = NULL;
//         ListNode* Next = NULL;
//         while (curr) {
//             Next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = Next;
//         }
//         return prev;
//     }
//     bool isPalindrome(ListNode* head) {
     // Deep copy
//         ListNode* c = new ListNode(10);
//         ListNode* temp = head;
//         ListNode* tempC = c;
//         while (temp) {
//             ListNode* node = new ListNode(temp->val);
//             tempC->next = node;
//             temp = temp->next;
//             tempC = tempC->next;
//         }
//         c = c->next;
//         c = reverseList(c);
//         ListNode* a = head;
//         ListNode* b = c;
//         while (a) {
//             if (a->val != b->val)
//                 return false;
//             a = a->next;
//             b = b->next;
//         }
//         return true;
//     }
// };

// Method 2
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         //  Iterative way
//         // 3 pointer method( prev,curr, Next) 4 steps
//         if (head == NULL || head->next == NULL)
//             return head;
//         ListNode* curr = head;
//         ListNode* prev = NULL;
//         ListNode* Next = NULL;
//         while (curr) {
//             Next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = Next;
//         }
//         return prev;
//     }
//     bool isPalindrome(ListNode* head) {
//        // both halves are reverse of each
//        ListNode* slow = head;
//          ListNode* fast =head;
//          while(fast->next!=NULL && fast->next->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//          }
//      // slow is at middle/ left middle
//      ListNode* newHead= reverseList(slow->next);
//      ListNode* a= head;
//      ListNode* b= newHead;
//      while(b){
//         if(a->val!=b->val) return false;
//         a=a->next;
//         b=b->next;
//      }
//      return true;
//     }
// };


