#include "warrior.h"
#include "mome.h"

int main() {
    cout<<"Hello world!"<<endl;
    cout<<"Well come to mid life of death"<<endl;
    cout<<"Who are you?";
    string name_of_player;
    getline(cin,name_of_player);
    cout<<"You are a girl?"<<endl;
    bool gender_male=true;
    cout<<"1. Yes"<<endl;
    cout<<"2. No"<<endl;
    int gender;
    cin>>gender;
    if(gender==1){
        gender_male=false;
    }

    string gender_type="Female";

    if(gender_male)gender_type="male";

    cout<<"How old are you warrior?"<<endl;
    int age;
    cin>>age;
    cout<<" so"<<name_of_player<<" what if I add 5+10 and deduct 12 what i am left with?"<<endl;
    int ans;
    cin>>ans;
    if(ans!=3){
        cout<<"You are not a warrior"<<endl;
        cout<<"go to dead life"<<endl;
        return 0;
    }
    Warrior w1(name_of_player,gender_type,100,age, 100, 90, 85, 95, 70, 80);
    w1.displayStats();

    Mome mome("mome","female",22,50,100,50,20,20,2,20,20);
    mome.displayStats();


    return 0;
}