#include<iostream>
using namespace std;

int main(){
    int N,Even = 0,Odd = 0;
    while (cout << "Enter an integer: "){
        cin >> N;
        if (N == 0){
            break;
        }
        if (N != 0 && N%2 == 0){
            Even++;
        }else {Odd++;}
    }
    cout << "#Even numbers = " << Even << endl;
    cout << "#Odd numbers = "<< Odd << endl;
    return 0;
}
