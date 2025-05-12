#include <iostream>
using namespace std;

class Hero{
    private:
    int health; //this->health means ye vala health

    public: //need to make constructor public in order to use it in int main
    
    char level; //this -> level means ye vala level

    int getHealth() { //getter for health since health is private , initialization should be in public for obvious reasons
        return health;
    }


    Hero(int health, char level){
        cout<<"this ->"<<this<<endl;
        this -> health = health;
        this->level = level;   
     

    }

    //creating our own copy constructor
    Hero(Hero& temp){ //& is used to use pass by refernce such that our hero paul and temp points to same thing otherwise temp will call copy constructor again n that again calls temp and this way it gets stuck in infinite loop
        cout<<"this ->"<<this<<endl;
        this -> health = temp.health;
        this->level = temp.level;
    }


    


};

int main(){
    Hero Paul(78,'A');//calling parameterised constructor
    cout<<"address of paul:"<<&Paul<<endl;
    cout<<"health of Paul is: "<<Paul.getHealth()<<endl;//to acess health , which is private , we needed getter
    cout<<"level of Paul is: "<<Paul.level<<endl;
    
    Hero Lionel(Paul); //copy constructor (default)
    cout<<"address of Lionel:"<<&Lionel<<endl;
    cout<<"health of Lionel is: "<<Lionel.getHealth()<<endl;
    cout<<"level of Lionel is: "<<Lionel.level<<endl;

    //now this -> address gets printed


}