// Given an array Arr[] of size T, contains binary digits, where  
// • 0 represents a biker running to the north. 
// • 1 represents a biker running to the south. 
// The task is to count crossing biker in such a way that each pair of 
// crossing biker(N, S), where 0<=N<S<T, is passing when N is 
// running to the north and S is running to the south. 
// Constraints: 
// 0<=N<S<T 
// Example 1: 
// Input : 
// • 5 -> Number of elements i.e. T 
// • 0 -> Value of 1st element. 
// • 1 -> Value of 2nd element 
// • 0 -> Value of 3rd element. 
// • 1 -> Value of 4th element. 
// • 1 -> Value of 5th element. 


#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    int arr[100];
    for(int i=0;i<t;i++) cin>>arr[i];
    int count=0;
    for(int i=0;i<t;i++)
        for(int j=i+1;j<t;j++)
            if(arr[i]==0 && arr[j]==1) count++;
    cout<<count;
}