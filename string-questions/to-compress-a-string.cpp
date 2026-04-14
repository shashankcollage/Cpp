// 12. String compression
#include<iostream>
using namespace std;
int main(){
    char s[100]; cin>>s;
    for(int i=0;s[i];){
        char ch=s[i]; int cnt=0;
        while(s[i]==ch){ cnt++; i++; }
        cout<<ch<<cnt;
    }
}