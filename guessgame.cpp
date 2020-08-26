#include <iostream>

using namespace std;

int main(){
    int secretNum = 8;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses=false;

    while (secretNum != guess && !outOfGuesses)
    {   
        if (guessCount < guessLimit){
            cout<<"enter your guess: ";
            cin>>guess;
            guessCount++;
            cout<<"you have " << guessLimit - guessCount <<" guesses left" <<endl;
            if (guessCount == 1 && secretNum != guess)
            {
                cout<<"Hint 1: The number is below 100" << endl;
            }else if(guessCount == 2 && secretNum != guess){
                cout<<"Hint 2: The number is below 50" << endl;
            }else if(secretNum != guess){
                cout<<"The number is " << secretNum << endl; 
            }    
        }else
        {
            outOfGuesses = true;
        }
    }
    if (outOfGuesses)
    {
        cout<<"YOU LOST!!!"<<endl;
    }else
    {
        cout << "**************YOU WIN!***************" <<endl;   
    }
    return 0;
}