//1
//01
//101
//0101
 #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" No of rows ";
    cin>>n;
   int k = 5;
   for(int i =1; i<=n; i++){
    if(i%2!=0) k=1;
    else k=0;
        for(int j=1;j<=i;j++){
            cout<< k<<" " ;
            // flipping
            if(k==1) k=0;
            else k=1;
            
       }
        cout<< endl;
    }
    // for(int i =1; i<=n; i++){
//   for(int j=1;j<=i;j++){
    // if((i+j)%2==0) cout<<1;
//}
   // }

}