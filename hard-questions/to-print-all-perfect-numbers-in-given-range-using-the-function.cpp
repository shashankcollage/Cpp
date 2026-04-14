// Write a program in C++ to print all perfect numbers in given 
// range using the function.   
// Remarks 
// TCS NQT 
// Test Data: 
// Input lowest search limit of perfect numbers : 1 

#include<iostream>
using namespace std;
bool isPerfect(int n){
    int sum=1;
    for(int i=2;i*i<=n;i++)
        if(n%i==0){ sum+=i; if(i!=n/i) sum+=n/i; }
    return n>1 && sum==n;
}
int main(){
    int a,b; cin>>a>>b;
    for(int i=a;i<=b;i++) if(isPerfect(i)) cout<<i<<" ";
}