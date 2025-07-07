#include<iostream>
using namespace std;
int main(){
char word;
cin>>word;
char a,e,i,o,u;
if(word=='a' || word=='e' || word=='i' || word=='o' || word=='u'){
    cout<<"Vowel"<<word;
}
else{
    cout<<"Consonant"<<word;
}


return 0;


}
