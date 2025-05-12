#include <iostream>
using namespace std;

class Hero{
    private:
    int health;

    public: //need to make getter/setter public in order to use in int main
    int getHealth(){
        return health;
    }

    void setHealth(int h, string pswd){
        if(pswd=="slashsaw"){
            health=h;
        }
        else{
            health=0;
        }
        
    }


};

int main(){
    Hero paul;
    int health=70;
    string pswrd="slashsaw";
    paul.setHealth(70,pswrd);
    cout<<"Paul's health is:"<<paul.getHealth()<<endl;

}