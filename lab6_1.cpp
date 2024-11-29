#include<iostream>
using namespace std;

int main(){
    int N;
    int even = 0;
    int odd = 0;
    while(true){
    cout << "Enter an integer: ";
    cin >> N;
    if(N == 0){
        break;
    }

    

    if(N%2  == 0){
        even++;
    }else{
        odd++;
    }
    }
    cout << "#Even numbers = "<< even <<"\n";
     
    cout << "#Odd numbers = "<< odd ;
    
    return 0;
}
