#include <iostream>
using namespace std;

class Student{
    private:
    string name;
    int age;
    int rollNo;

    public:
    int getAge() { 
        return this->age;
    }

    Student(string name ,int age , int rollNo){
        this->age=age;
        this ->name=name;
        this ->rollNo=rollNo;
        cout<<"Student name is: "<<this->name<< endl;
    }
};

int main(){
    Student a("Raj",10,23);
    Student b("Aarav", 12,1);


    cout<<"encapsulation done"<<endl<<a.getAge()<<endl<<b.getAge()<<endl;

}