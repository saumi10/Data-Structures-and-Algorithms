#include <iostream>
using namespace std;

class Hero {
    private:
    int health;

    
    public: //need  to make constructor and getter/setter public in order to use in int main
    int getHealth() { //getter
         return health;
    }

    //own constructor
    Hero(){
        cout<<"constructor called"<<endl;
    }

    //parameterised constructor
    Hero(int x){
        cout<<"parameterised constructor being called and setting health to parameter given"<<endl;
        health = x;
    }


};

int main(){
    Hero();
    cout<<"dsgugsj"<<endl;
    //static allocation 
    Hero jake; //constructor is called ; here non parameterised constructor is being called
    cout<<"health of jake is: "<<jake.getHealth()<<endl; //garbage value printed as we have not called parameterised constructor
    
    Hero paul(78); //parameter being set as 78 and parameterised constructor is now called
    cout<<"health of paul is: "<<paul.getHealth()<<endl;

    //dynamically
    Hero *h= new Hero(21); //constructor is called automatically
    cout<<"health is: "<<(*h).getHealth()<<endl;
    cout<<"health is: "<<h->getHealth()<<endl; //arrow operator is alternative to (*h).

    
}