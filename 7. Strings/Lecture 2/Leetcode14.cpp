// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string
 // Input: strs = ["flower","flow","flight"]
// Output: "fl"
// sort the strings
// apply operstions on 1st and last element

// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         int n = strs.size();
//         if(n==1) return strs[0];
//         sort(strs.begin(),strs.end());
//         string first = strs[0];
//         string last = strs[n-1];
//         string s="";
//         for(int i=0;i<(min(first.size(),last.size()));i++){
//           if(first[i]==last[i]) s+=first[i];
//           else return s;
//         }
//      return s;
//     }
// };
