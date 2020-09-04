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

/*
#include <iostream>

using namespace std;

class Reportcard{
    public:
        int maths,science,tamil,english,social;
    Reportcard(int aMaths, int aScience, int aTamil, int aEnglish, int aSocial){
        maths = aMaths;
        science = aScience;
        tamil = aTamil;
        english = aEnglish;
        social = aSocial;
    }    
    int total(){
        int sum = maths + science + tamil + english + social;
        cout << "The total of all subjects is: " << sum << endl;
        float percent = sum / 5;
        cout << "... and secured " << percent << " %!" << endl;
        return 0;
    }
};

int main(){
    Reportcard kaviya(90,98,88,95,87);
    Reportcard priyan(93,97,92,96,98);
    priyan.total();
    kaviya.total();
    return 0;
}*/