// You are given two integers m and n, which represent the dimensions of a matrix.
// You are also given the head of a linked list of integers.
// Generate an m x n matrix that contains the integers in the linked list presented in spiral order (clockwise), starting from the top-left of the matrix. If there are remaining empty spaces, fill them with -1.
// Return the generated matrix
// Same as spiral matrix 2

// class Solution {
// public:
//     vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
//          vector<vector<int>> matrix(m,vector<int>(n,-1));
//           int minr=0, minc=0;
//           int maxr =m-1,maxc =n-1; 
//           ListNode* temp= head;
//         while(minr<=maxr && minc<=maxc){
//     // right
//     for(int j=minc;j<=maxc;j++){
//         if(temp==NULL) return matrix;
//          matrix[minr][j]=temp->val;
//         temp=temp->next;
//     }
//     minr++;
//       if(minr>maxr || minc>maxc) break;
//     // down
//      for(int i=minr;i<=maxr;i++){
//         if(temp==NULL) return matrix;
//          matrix[i][maxc]=temp->val;
//          temp=temp->next;
//     }
//     maxc--;
//       if(minr>maxr || minc>maxc) break;
//     // left
//     for(int j=maxc;j>=minc;j--){
//         if(temp==NULL) return matrix;
//         matrix[maxr][j]=temp->val;
//          temp=temp->next;
//     }
//     maxr--;
//       if(minr>maxr || minc>maxc) break;
//     //up
//      for(int i=maxr;i>=minr;i--){
//         if(temp==NULL) return matrix;
//         matrix[i][minc]=temp->val;
//        temp=temp->next;
//     }
//     minc++;
//        if(minr>maxr || minc>maxc) break;
//   }    
//  return matrix;
//     }
// };