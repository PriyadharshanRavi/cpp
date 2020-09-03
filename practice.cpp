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
}