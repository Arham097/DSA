#include<iostream>
#include<cstring>
using namespace std;

class Hero{
    int health;
    char level;

    public:
    char *name;

    static int timetoComplete; 
    Hero(){
        cout<<"Simple constructor called"<<endl;
        name = new char[100];
    }

    //parametrized constructor
    Hero(int health){
        this->health = health;
        cout<<"health is: "<<health<<endl;;
        cout<<"Address of this: "<<this<<endl;
    }


    //copy constructor

    Hero(Hero& obj){
        char *temp = new char[strlen(obj.name)+1];
        strcpy(temp,obj.name);
        this->name  = temp;

        this->health = obj.health;
        this->level = obj.level;
        this->name = obj.name;
    }
    void print(){
        cout<<"health: "<<health<<endl;
        cout<<"level: "<<level<<endl;
        cout<<"name: "<<name<<endl;
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(char l){
        level = l;
    }

    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }

    static int random(){
        return timetoComplete ;
    }

    ~Hero(){
        cout<<"Destructor called: "<<endl;
    }
};

int Hero::timetoComplete = 5;

int main(){


    cout<<Hero::timetoComplete<<endl;
    cout<<Hero::random()<<endl;


    // Hero h1;

    // Hero* h2 = new Hero;
    // delete h2;
   


    // Hero h1;
    // h1.setHealth(90);
    // h1.setLevel('D');
    // char name[6] = "Arham";
    // h1.setName(name);

    // // h1.print();
    
    // Hero h2(h1) ;
    // // h2.print();

    // h1.name[0] = 'B';
    // h1.print();

    // h2.print();



    // Hero h1;  
    // h1.setHealth(40);
    // h1.setLevel('A');  
    // h1.print();

    // // Hero h2(80);

    // // cout<<"Address of h2: "<<&h2<<endl;

    // Hero h3=h1;
    // h3.print();


    //static allocation
    // Hero h1;
    // h1.setHealth(80);
    // h1.setLevel('A');

    // cout<<"health is: "<<h1.getHealth()<<endl;;
    // cout<<"level is: "<<h1.getLevel()<<endl;


    // //dynamic allocation

    // Hero* b = new Hero;
    // b->setHealth(70);
    // b->setLevel('B');

    // cout<<"health is : "<<b->getHealth()<<endl;
    // cout<<"level is: "<<b->getLevel()<<endl;

    
    // cout<<"health is : "<<(*b).getHealth()<<endl;
    // cout<<"level is: "<<(*b).getLevel()<<endl;

    // h1.setHealth(46);
    // h1.setLevel('B');

    // cout<<h1.getHealth()<<endl;
    // cout<<h1.getLevel()<<endl;
    
    return 0;

}