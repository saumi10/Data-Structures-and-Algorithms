#include <bits/stdc++.h>
using namespace std;

class Hero{
    public:
    int health;
    char level;

    static int timeToComplete;

    static int random(){
        return timeToComplete;
    }

};
int Hero::timeToComplete=5;

int main(){
    cout<<Hero::timeToComplete<<endl;//better way is creating static function
    cout<<Hero::random()<<endl;

}