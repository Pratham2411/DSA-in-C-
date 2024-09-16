// 4444444
// 4333334
// 4322234
// 4321234       For n=4
// 4322234
// 4333334
// 4444444

// phle ulta socho i.e 4 ki jagah 1 aur uska 1/4 th print kro 

#include<iostream>
using namespace std;
int main(){
int n;
    cout<< " No of rows: ";
    cin>> n;
// 1111
// 1222  till row/column 4
// 1233
// 1234

    for(int i=1; i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
           int a=i;
           int b=j;  // pseudo variables
           if(a>n) a=2*n-i;
           if(b>n) b=2*n-j;

            int x = min(a,b);  // for reverse pattern
            cout<< n - x+1;  // for correct pattern
        }
        cout<<endl;
    }

}
   