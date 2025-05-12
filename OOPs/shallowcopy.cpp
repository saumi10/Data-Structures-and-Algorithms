#include <iostream>
using namespace std;
class Hero{
    public:
    int health;
    char level;
    char *name;

    void setHealth(int health) {
        this -> health = health;
        }

    void setLevel(char level) {
        this -> level = level;
    }    

    void setName(char name[]){
        this -> name = name;
    }

    Hero(){
        cout<<"simple constructor called"<<endl;
    }

    void print(){
        cout<<"[ name:"<<name<<", level:"<<level<<", health:"<<health<<"]"<<endl;
    }

};

int main(){
    Hero h1;
    h1.setHealth(100);
    h1.setLevel('A');
    char name[5]="Paul";
    h1.setName(name);
    h1.print(); //

    Hero h2(h1);
    h2.print(); //

    h1.name[0]='H';
    h1.print(); //
    h2.print(); //

    //both names got changed to Haul
    //this is called shallow copy and a default copy constructor creates shallow copy

}

