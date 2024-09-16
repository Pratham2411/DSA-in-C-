//   1
//  121
// 12321 
//1234321


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< " No of rows ";
    cin>> n;


    for(int i =1; i<=n; i++){
        // spaces
         for(int k=1;k<=n-i;k++){
            cout<<" ";
         }
         // pattern1

          for(int j=1;j<=i;j++){
            cout<< j;
        }
        // pattern2 ulta number traingle
         
          for(int q=i-1;q>=1;q--){
              cout<< q;
             }
    

cout<< endl;       

}
}