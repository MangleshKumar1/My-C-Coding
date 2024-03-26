#include<iostream>
using namespace std;

int main(){

    float  c;
    float x, y ;
    cout << "Enter 2 non zero +ve number to divide a/b\n";
    cin >> x >> y;
    
    try{
        if(y==0)
            throw 0;
        if( y<0)
            throw " NUMBER LESS THAN 0";
        c = x / y;
    }catch(int e){
        cout<<"2nd Number is given as zero \n";
    }catch(const char * s){
        cout << "2nd Number is given as -ve \n";
    }catch(...){
        cout << "something wrong input "<< endl;
    }

    cout << "result of a/b =" << c << endl;
    return 0;
}