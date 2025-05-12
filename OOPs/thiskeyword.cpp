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

    Hero(int health){ //if you make a parameterised constructor and no non parameterised constructor then you cant call without giving parameters since default constructor dies on making our own constructor (be it parameterised or not) , if we make a non parameterised constructor then we can call without giving parameters
        cout<<"this ->"<<this<<endl;
        this->health = health;
    }

    Hero(char level){
        cout<<"this ->"<<this<<endl;
        this->level = level;

    }

    Hero(int health, char level){
        cout<<"this ->"<<this<<endl;
        this -> health = health;
        this->level = level;

        //address pointed by this keyword will be different for different hero
        //wichever hero calls the constructor , this keyword will have address of it
        


    }

    


};

int main(){
    Hero Paul(78);//calling parameterised constructor
    cout<<"address of paul:"<<&Paul<<endl;
    cout<<"health of Paul is: "<<Paul.getHealth()<<endl;//to acess health , which is private , we needed getter

    Hero Jake('A');
    cout<<"address of Jake:"<<&Jake<<endl;
    cout<<"level of Jake is: "<<Jake.level<<endl; //since level is public , we can access directly like this, without getter
    
    Hero Lee(98,'A');
    cout<<"address of Lee:"<<&Lee<<endl;
    cout<<"health of Lee is: "<<Lee.getHealth()<<endl;
    cout<<"level of Lee is: "<<Lee.level<<endl;

    int x;
    cin>>x;
    Hero Drake(x,'B');
    cout<<"address of Drake:"<<&Drake<<endl;
    cout<<"health of Drake is: "<<Drake.getHealth()<<endl;

    //Hero David; 
    /* It will give error because we havent
    made any non parameterised constructor
    and the default constructor has died as we have made (some parameterised)constructor 
    hence the error*/

    Hero Lionel(Paul); //copy constructor (default)
    cout<<"address of Lionel:"<<&Lionel<<endl;
    //does not print this -> address which we have written inside constructor used by paul


}