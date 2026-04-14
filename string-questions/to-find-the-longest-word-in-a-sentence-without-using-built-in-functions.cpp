// 10. Longest word in sentence
#include<iostream>
using namespace std;
int main(){
    char s[200]; cin.getline(s,200);
    char longest[50]="", word[50]="";
    int wi=0, li=0;
    for(int i=0;s[i];i++){
        if(s[i]!=' ') word[wi++]=s[i];
        else{
            word[wi]='\0';
            if(wi>li){ li=wi; int j=0; while(word[j]) longest[j]=word[j],j++; longest[j]='\0'; }
            wi=0;
        }
    }
    word[wi]='\0';
    if(wi>li){ int j=0; while(word[j]) longest[j]=word[j],j++; longest[j]='\0'; }
    cout<<"Longest: "<<longest;
}