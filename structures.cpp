#include <iostream>

using namespace std;

struct car //here i have created a blueprint of how struct is going to be
{
    char brand[20];
    char model[20];
    int rate;
};

int main(){
    car seltos={ //with the above blueprint i'm building the structure
        "Kia","Seltos",2500000
    };
    car creta={
        "Hyundai","Creta",2000000
    };
    cout<<seltos.model<<" "<<seltos.rate<<endl;
    cout<<creta.model<<" "<<creta.rate<<endl;
    return 0;
}

