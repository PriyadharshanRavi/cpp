#include <iostream>

using namespace std;

class Movie{
    private:
        string rating;
    public: 
        string title;
        string director;
    Movie(string aTitle, string aDirector, string aRating){
        title = aTitle;
        director = aDirector;
    }    
    void setRating(string aRating){
        if(aRating == "G" || aRating == "P" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
            rating = aRating;
        }else{
            rating = "NR";
        }
        
    }
    string getRating(){
        return rating;
    }
};

int main(){
    Movie mov1("Vada Chennai", "Vetri Maran" , "R");
    mov1.setRating("Unwatchable");
    
    cout << mov1.getRating();
 
    return 0;
}