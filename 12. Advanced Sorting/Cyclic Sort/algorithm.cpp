// Works only in selective questions
// O(n) time complexity O(1) space complexity { use it when specified }
// Where to use : array -> [1,n], [0,n], 1 to n me kuch karna hai
#include<iostream>
using namespace std;
int main(){
    int arr[]={4,1,6,2,5,3};
    int n = sizeof(arr)/4;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i =0;
    while(i<n){
        int correctidx = arr[i]-1;
      if(i==correctidx) i++;
      else  swap(arr[i],arr[correctidx]);
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
