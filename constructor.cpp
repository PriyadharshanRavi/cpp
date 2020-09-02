/*Constructor is a special type of function that is going to get called whenever we create 
an object of a class*/


#include <iostream>

using namespace std;

class Family{
    public:
        string name;
        int age;
    /*Family(){
        cout<<"creating object"<<endl;
    }   */ 
    
    Family(string aName, int aAge){
        name = aName;
        age = aAge;
    }
};

int main(){
    //Family member1();   so whenever the object is created the constrcutor gets called
    //member1.name = "Kaviya";
    //member1.age = 20;

    //Family member2();
    //member2.name = "Priyan";
    //member2.age = 24;
    /*so we cant init args everytime and type like this instead we can init it in constructor
    and pass values as args like this in below */
    
    Family member1("Kaviya", 20);
    Family member2("Priyan", 24);

    cout << member1.name << " is " << member1.age << " years old" << endl;
    cout << member2.name << " is " << member2.age << " years old" << endl;
    
    return 0;
}