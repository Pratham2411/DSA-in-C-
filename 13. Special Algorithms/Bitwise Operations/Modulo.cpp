// print factorial of first 25 natural numbers and modulo the result by 10^9 +7
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n =25;
  vector<long long int> fact(n+1,1);
  long long int mod = 1000000000 +7;
  for(int i =2;i<=n;i++){
    fact[i] = ((i%mod) * (fact[i-1]%mod))%mod;
  }
  for(int i =0;i<=n;i++){
    cout<<i<<"! ="<<fact[i]<<"\n";
  }
}