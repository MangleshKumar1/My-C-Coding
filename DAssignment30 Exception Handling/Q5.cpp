#include <iostream>
using namespace std;


int main(){ // validation

    long long mobil_num;
    int count = 0;
    cout << "Enter your phone number" << endl;
    cin >> mobil_num;
     
     try{
        while( mobil_num){ // counting number of digit in mobil_num
            mobil_num = mobil_num / 10;
            count++;
        }

        if(count ==10){
            throw 1;}
        if(count !=10){
            throw 2;
        }
     }catch(int num){
        if(num==1)
            cout << "valid mobile number as it conytain 10 digit" << endl;
        if (num == 2)
            cout << "Invalid mobile number must be 10 digit!!" << endl;
     }

     return 0;
}