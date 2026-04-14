// 8. Anagram check
#include<iostream>
using namespace std;
int main(){
    char a[100],b[100]; cin>>a>>b;
    int fa[26]={0},fb[26]={0};
    for(int i=0;a[i];i++) fa[tolower(a[i])-'a']++;
    for(int i=0;b[i];i++) fb[tolower(b[i])-'a']++;
    bool ok=true;
    for(int i=0;i<26;i++) if(fa[i]!=fb[i]) ok=false;
    cout<<(ok?"Anagram":"Not Anagram");
}