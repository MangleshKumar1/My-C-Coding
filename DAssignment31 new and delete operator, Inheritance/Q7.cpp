#include <iostream>
using namespace std;

class Employee{
    protected:
    int emp_code;
    string name;

    public:


};

class Fulltime : public Employee{
    int daily_rate;
    int no_of_days;
    int salary;
};

class Parttime : public Employee
{
    int hourly_rate;
    int no_of_working_hours;
    int salary;
};

int main(){
    
}