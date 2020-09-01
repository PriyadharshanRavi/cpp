// classes and objects

/* Classes are basically a blueprint to a new datatype in our program like realworld things 
eg a library/car/animal. we create our own set of rules inside the classes
*/

/*A class is a blueprint or a template to describe the thing eg. 
animal is a class where animal can have 4 legs 2 eyes (mentioning this is a class)
An object is the instance of a class for eg: lion.. animal na ipdi than irukum nu declare
panna class la one of the instance object which has the same attributes*/

#include <iostream>

using namespace std;

class Book
{
    public:
        string name;
        string author;
        int pages;
}; // specifying the template in class


int main(){
    Book book1; // init the object i.e the actual book in our program
    book1.author = "Chetan bhagat";
    book1.name = "Half Girlfriend";
    book1.pages = 250;


    cout << "The Title of 1st book in Library is: " << book1.name << " Written by " << book1.author << " and has " << book1.pages << " pages!" <<endl;
    return 0;
}