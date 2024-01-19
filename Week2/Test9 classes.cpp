# include <iostream> 


using namespace std; 
class Cheft{
    private: 
    string degree;

    public : 
    string name ;
    bool isactive;
    int age;

    string cook (){
        return "I am a Chefcan make you the best meal of your life "
    }
    string supervise(){
        return "This chef can supervise"
    }
    void setDegree(string adegree){
        if (adegree == "hospitality" || adegree =="hotel management"){
            degree=adegree;
        }
        else { 
            degree = "n\a"
    }
    Chef (string aname, bool aisactive, int aage){
        name = aname ;
        isactive=aisactive ;
        age=aage;
    }
    string getDegree(){
        return degree;
    }

};

int main(){
    // creating object for class cheft
    //int a = 90;
    Chef chef1= Chef("Daniel", true, 23);
    
    cout<<chef1.name<<chef1.isactive <<chef1.age <<chef1.cook()<<chef1.supervise<< endl();
    chef1.setdegree("hotelmangemnet")
    count<< chef1.getDegree()<< endl;


    Chef chef2= Chef("damian", false, 43);
    chef2.setdegree("hotelmangemnet")
    count<< chef2.getDegree()<< endl;
    

    cout<<chef2.name<<chef2.isactive <<chef2.age <<chef2.cook()<<chef2.supervise << endl();


}



