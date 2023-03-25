#include<iostream>
using namespace std;
//write a class car with attributes speed,name,color and method getter to display data and constructor to set the values
class car{
    public:
    int speed;
    string name;
    string color;

    car(int s,string n,string c); //constructor declaraction -ousider function
    void getter(); //getter functin - outsider fiunction
};

//constructor defination
car::car(int s,string n, string c){
    speed = s;
    name = n;
    color = c;
}

//getter definatin
void car ::getter(){
    cout <<"the name of the car is-"<<name<<endl;
    cout <<"the color of the car is-"<<color<<endl;
    cout <<"the speed of the car is-"<<speed<<endl;
}


int main(){
    int speed;
    string name,color;

    cout<<"enter speed,name and color of the car"<<endl;
    cin>>speed;
    cin>>name;
    cin>>color;

    car c1(speed,name,color);
    c1.getter();
}