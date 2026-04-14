// Given a maximum of four digit to the base 17 (10 – A, 11 – B, 
// 12 – C, 13 – D … 16 – G} as input, output its decimal value. 
// Test Cases 
// Case 1 
// • Input – 1A 
// • Expected Output – 27 
// Case 2 
// • Input – 23GF 
// • Expected Output – 10980 

#include<iostream>
using namespace std;
int main(){
    char s[10]; cin>>s;
    int result=0;
    for(int i=0;s[i];i++){
        int val;
        if(s[i]>='0'&&s[i]<='9') val=s[i]-'0';
        else val=s[i]-'A'+10;
        result=result*17+val;
    }
    cout<<result;
}