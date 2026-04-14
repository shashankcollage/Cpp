// 5. Count words
#include<iostream>
using namespace std;
int main(){
    char s[200]; cin.getline(s,200);
    int words=0,i=0;
    while(s[i]==' ') i++;
    while(s[i]){
        if(s[i]!=' '&&(s[i+1]==' '||s[i+1]=='\0')) words++;
        i++;
    }
    cout<<"Words: "<<words;
}