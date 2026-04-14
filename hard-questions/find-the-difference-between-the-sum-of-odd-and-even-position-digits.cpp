// Given a maximum of 100 digit numbers as input, find the 
// difference between the sum of odd and even position digits 
// Test Cases 
// Case 1 
// • Input: 4567 
// • Expected Output: 2 
// Explanation : Odd positions are 4 and 6 as they are pos: 1 and 
// pos: 3, both have sum 10. Similarly, 5 and 7 are at even positions 
// pos: 2 and pos: 4 with sum 12. Thus, difference is 12 – 10 = 2 
// Case 2 
// • Input: 5476 
// • Expected Output: 2 
// Case 3 
// • Input: 9834698765123 
// • Expected Output: 1 


#include<iostream>
using namespace std;
int main(){
    char s[110]; cin>>s;
    int odd=0,even=0;
    for(int i=0;s[i];i++){
        int d=s[i]-'0';
        if((i+1)%2==1) odd+=d; else even+=d;
    }
    int diff=even-odd; if(diff<0) diff=-diff;
    cout<<diff;
}