#include <iostream>
using namespace std;


int main(){ // validation

    long long pin;
    int count = 0;
    cout << "Enter your area pin code " << endl;
    cin >> pin;
     
     try{
        while( pin){ // counting number of digit in pin
            pin = pin / 10;
            count++;
        }

        if(count ==6){
            throw 1;}
        if(count !=6){
            throw 2;
        }
     }catch(int num){
        if(num==1)
            cout << "valid pin code as it contain 6 digit" << endl;
        if (num == 2)
            cout << "Invalid pin code as it does not contain 6 digit" << endl;
     }

     return 0;
}