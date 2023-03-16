#include <iostream>
#include <string>

using namespace std;

int procuraCharNaString(string str, char ch){
    for(int i=0; i<str.length(); i++){
        
        if(str[i]==ch){
            return i;  
        }
         
     }

    return -1;
}

int main(){
    
    string str;
    char ch;

    cin>>str;
    cin>>ch;
    
    int pos = procuraCharNaString(str, ch);
    if(pos==-1){
        cout<<"Caractere nao encontrado"<<endl;
    }else{
        cout<<"posicao:"<<pos + 1<<endl;
    }

    return 0;
}
