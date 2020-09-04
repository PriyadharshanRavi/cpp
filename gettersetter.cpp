/*getter and setter: 
They helps control the access of certain attr and variables inside c++ classes*/

#include <iostream>

using namespace std;

class Movie{
    private:
        string rating;
    public:
        string title;
        string director;
        // string rating;
    Movie(string aTitle, string aDirector, string aRating){
        title = aTitle;
        director = aDirector;
        setRating(aRating);
    }
    void setRating(string aRating){
        if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
            cout << "You have entered a valid Rating for this movie." << endl;
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
    Movie singam("Singam 3", "Hari", "");
    /*Ratings are diff for diff movies and here we can fill even dog in the place of rating so 
    inorder to restrict the access I'm going to init this is private class*/
    singam.setRating("Dog"); //here we cannot access the arting coz its in private but we can access it via setRating/getRating
    cout << singam.getRating();
    return 0;
}