//object funtions

/*Object funtions are functions that we can use inside a class and objets 
related to that class can use it */

#include <iostream>

using namespace std;

class Student{
    public:
        string name;
        string major;
        float gpa;
    Student(string aName, string aMajor, float aGpa){
        name = aName;
        major = aMajor;
        gpa = aGpa;
    }   
    bool hasHonours(){ //Object funtion
        if(gpa >= 6){
            cout << "Has honours" << endl;
            return true;
        }else {
            cout << "Doesn't have one" << endl;
            return false;
        }
    } 
};

int main(){
    Student stud1("Kaviya", "English Literature", 5.5);
    Student stud2("Priyan", "Computer science", 8.5);
    Student stud3("Dinesh", "Electrical and Electronic", 8.3);
    Student stud4("Kumara", "Dental", 8.0);

    cout << stud1.hasHonours();

    return 0;
}

/*
#include <iostream>

using namespace std;

class Room{
    public:
        float length;
        float breadth;
        float height;
    Room(float aLength, float aBreadth, float aHeight){
        length = aLength;
        breadth = aBreadth;
        height = aHeight;
    }    
    float calculateArea(){
        cout << "The Area is " << length*breadth << endl;
        return 0;
    }
    float calculateVolume(){
        cout << "The Volume is " << length*breadth*height << endl;
        return 0;
    }
};

int main(){
    Room room1(10,10,50);
    Room room2(12.5,13.25,50);

    room1.calculateArea();
    room2.calculateVolume();

    return 0;
}*/