// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
// Example 1:
// Input: n = 3
// Output: ["((()))","(()())","(())()","()(())","()()()"]
// Example 2:
// Input: n = 1
// Output: ["()"]


// class Solution {
// public:
//    void generate(vector<string> &v, string s, int open, int close, int n){
//         if(close==n){
//            v.push_back(s);
//            return;
//         }
//       if(open<n) generate(v,s+'(',open+1,close,n);
//       if(close<open)generate(v,s+')',open,close+1,n);  

//    }
//     vector<string> generateParenthesis(int n) {
//     // Opening brackets are always greater at any instant
//     vector<string> v;
//        generate(v,"",0,0,n); 
//        return v;
//     }
// };