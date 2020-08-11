/*objective of this program is 
user have to type the file name and the c++ program will read take that file and read through the content*/

#include <iostream>
#include <fstream>
#include <cstdlib> //this helps to use many functions in c standard library
using namespace std;

int main(){
    char filename[50]; //we made a variable called filename coz whenever we create a file and the filename needs to be stored somewhere
    ifstream myfiles; //we have then build an object so that we can work with files
    cout << "please enter the file name" << endl;
    cin.getline(filename, 50); //then we have to put an input on the screen which is the filename and the getline is helped to get the curser
    myfiles.open(filename);//then we open the filename
    if(!myfiles.is_open()){//check if the file is open
        exit(EXIT_FAILURE);//if not exit program
    }

    //if its open then do the instrcutions below
    char word[50];//to store the values inside the file
    myfiles >> word; // it captures the word inside the file and store it inside the variable word
    while (myfiles.good()) //it is a builtin function and while the file is good and arent at the end of the file and open ahead and do the while loop
    {
        cout << word << " ";
        myfiles >> word;
    }
    
    return 0;
}

/*Ofstream: File handling class that signifies the output file stream and is used for writing data to files.
Ifstream: File handling class that signifies the input file stream and is used for reading data from the file.
Fstream: File handling class that has the ability to handle both ifstream and ofstream. It can be used to read from and write to a file.*/


/*
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
    char storefilename[50];
    ifstream myfiles;
    cout<<"please enter the file name here..." << endl;
    cin.getline(storefilename, 50);
    myfiles.open(storefilename);

    if(!myfiles.is_open()){
        exit(EXIT_FAILURE);
    }

    char word[100];
    myfiles >> word;
    while (myfiles.good())
    {
        cout << word << " ";
        myfiles >> word;
    }
    
    return 0;
}
*/