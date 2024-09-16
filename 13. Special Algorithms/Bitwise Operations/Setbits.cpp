// Find the number of set bits for any integer n
// Set bits : Places with 1 in binary form
// Off bits: Places with 0 in binary form
#include<iostream>
using namespace std;
int count(int num){
    int ans =0;
    while(num>0){
        if(num%2!=0) ans++;
        num/=2;
    }
    return ans;
}
int count2(int n){
    int count =0;
    while(n>0){
        count++;
        n = (n&(n-1));
    }
    return count;
}
int main(){
   int n =453;
   cout<< count(n)<<endl;
   // Inbuilt function
   //  cout<< __builtin_popcount(n);

   // Brain Kerniglerns algorithm
  // Note : X & X-1 krne se 1 setbit eliminate ho jaati hai as both have a common region of same and flipped bits
  // X ki last setbit se flipped region start hota hai(there is only 1 setbit of x in this region)
   cout<<count2(n);

}