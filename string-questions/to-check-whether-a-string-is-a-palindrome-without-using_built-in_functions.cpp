// 4. Palindrome check
#include<iostream>
using namespace std;
int main(){
    char s[100]; cin>>s;
    int len=0;
    while(s[len]) len++;
    bool ok=true;
    for(int i=0;i<len/2;i++)
        if(s[i]!=s[len-1-i]) ok=false;
    cout<<(ok?"Palindrome":"Not Palindrome");
}