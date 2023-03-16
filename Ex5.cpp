#include <iostream>
#include <string>

using namespace std;

bool ehPrimo(int n){

    if(n<=1){
        return false;
    }

    for(int i = 2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }

    return true;
    

}

int main(){
    
    int n;
    cin>>n;

    ehPrimo(n);

    if(ehPrimo(n)){
        cout<<"eh primo"<<endl;
    }else{
        cout<<"nao eh primo"<<endl;
    }

    return 0;
}
