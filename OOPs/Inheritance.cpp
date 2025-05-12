#include <bits/stdc++.h>
using namespace std;

class Human{

    private:
    int age;
    public:
    int height=15;
    int weight;

    //getter can be used to access a private member of parent class by object of child class, otherwise it won't be accessible 
    /*int getAge(){
        this->age=20;
        return this->age;
    }*/ 

    
    


};

class Male:protected Human{
    public:
    string color;
    void sleep(){
        cout<<"male is sleeping"<<endl;
    }

};

int main(){
    Male object1;
    Human object2;
    //object1.height inaccessible as mode of child class is protected 
    cout<<object2.height<<endl;

    object1.sleep();

    //cout<<object1.getAge()<<endl; 
    //here age accessible by object1 only because we used getter to get it
}
//more notes in notebook , types of inheritance n all