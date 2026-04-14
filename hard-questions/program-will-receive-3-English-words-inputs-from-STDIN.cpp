// The program will receive 3 English words inputs from STDIN 
// 1. These three words will be read one at a time, in three separate 
// line. 
// 2. The first word should be changed like all vowels should be 
// replaced     by *. 
// 3. The second word should be changed like all consonants 
// should be replaced by @. 
// 4. The third word should be changed like all char should be 
// converted to upper case. 
// 5. Then concatenate the three words and print them. 

 
// 6. Other than these concatenated word, no other characters/string 
// should or message should be written to STDOUT. 
// 7. For example if you print how are you then output should be 
// h*wa@eYOU. 
// 8. You can assume that input of each word will not exceed more 
// than 5 chars 
// Test Cases 
// Case 1 
// Input 
// • how 
// • are 
// • you 
// Expected Output : h*wa@eYOU 
// Case 2 
// Input 
// • how 
// • 999 
// • you 
// Expected Output : h*w999YOU 


#include<iostream>
using namespace std;
bool isVowel(char c){ c=tolower(c); return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'; }
int main(){
    char w1[10],w2[10],w3[10];
    cin>>w1>>w2>>w3;
    // word1: replace vowels with *
    for(int i=0;w1[i];i++) cout<<(isVowel(w1[i])?'*':w1[i]);
    // word2: replace consonants with @
    for(int i=0;w2[i];i++){
        char c=w2[i];
        if(c>='a'&&c<='z'||c>='A'&&c<='Z') cout<<(isVowel(c)?c:'@');
        else cout<<c;
    }
    // word3: uppercase
    for(int i=0;w3[i];i++) cout<<(char)toupper(w3[i]);
}