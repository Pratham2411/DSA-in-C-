#include<iostream>
using namespace std;
void greeting(){             // return_type Function_name        
    cout<< "Good morning"<< endl;                              //  syntax
    cout<< "Have a nice day"<< endl;   // code peice
}
// <void/int/float> function_name(int a, int b,int c){
// function body                     ^arguments
//}
void startraingle( int x){
    
    for(int i =1; i<=x; i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<< endl;
    }
}

int main(){   
                                      
greeting();  // Function calling
startraingle(3);   
startraingle(4);
startraingle(5);

}
