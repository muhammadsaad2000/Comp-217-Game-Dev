# include <iostream> 


using namespace std; 

// class -> movie -> title rating catergory ('animation', 'scifi', 'action') constructor
// 2 objects -> print all the data

class Movie{

    priavte:
    string category;

    public:
    string title;
    int rating;

    void setCategory(string _catergory_){
        if(_catergory == "animation"|| _catergory=="Sci-fi"||_catergory=="action"){
            category = _catergory_;
        }
        else {
            category =" not defined'"; 
    }
    
    string getCategory(){
        return category;
    }
    Movie(string_title, int _rating){
        title=_title;
        rating=_rating;
        cout<< "Ojb is created"<< endl;
     }

};
int main() {
    // create object of the class
    Movie movie1 = Movie("harry Potter", 5);
    movie1.setCategory("animation");
    Movie movie2 = Movie("Avengers", 4);
    movie2.setCategory("Action");

    cout << "The name of the movie is: " 
    <<movie1.title << "The rating of the movie is: "
    << movie1.rating << " and it belongs to the "
    << movie1.getCategory() << endl;
cout << "The name of the movie is: " 
    <<movie2.title << "The rating of the movie is: "
    << movie2.rating << " and it belongs to the "
    << movie2.getCategory() << endl;

    return 0;
    }