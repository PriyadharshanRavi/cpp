/*Inheritance: when a class's features are used by another class thats inheritence*/

#include <iostream>

using namespace std;

class Chef{ //super class
    public:
        void makesBiryani(){
            cout<<"chef makes good biryani"<<endl;
        }
        void makesGrillChicken(){
            cout<<"chef makes good grill chicken"<<endl;
        }
        void makesSpecialDishes(){
            cout << "chef makes butter chicken" << endl;
        }
};

/*So the chef makes all these but he also bakes things so we are creating a separate class for bake 
and gonna inherit all the above*/

class Bake : public Chef{ //sub class
    public:
        void bakesCake(){
            cout<<"chef bakes good cakes"<<endl;
        }
        /*here i can use the function from chef and override*/
        void makesSpecialDishes(){
            cout << "chef bakes brownies" << endl;
        }
};

int main(){
    Chef priyan;
    priyan.makesBiryani();
    Bake kaviya;
    kaviya.makesGrillChicken();
    kaviya.bakesCake();
    /*So even if the class Bake is empty it can use functions from inherited class Chef and it works*/
    kaviya.makesSpecialDishes();
    priyan.makesSpecialDishes();
    /*Here I have used the overridden function so now my chef makes butter chicken and baker 
    makes brownies*/
    return 0;
}