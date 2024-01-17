#include <iostream>
using namespace std;

/*============================================
Q.1 
=============================================*/
/*============================================

class Book{
    private:
        string title;
        string name;
        int price;
    public:    
        void get(){
            cout<<"Enter the Book Title : ";
            cin>>title;
            cout<<"Enter the Author Name : ";
            cin>>name;
            cout<<"Enter the Book Price : ";
            cin>>price;
        }
        void display(){
            cout<<endl<<"The Book Title is : "<<title<<endl;
            cout<<"The Author Name is : "<<name<<endl;
            cout<<"The Book Price is : "<<price<<endl;
        }
};
int main() {
    Book b;
    b.get();
    b.display();
    return 0;
}

=============================================*/

/*============================================
Q.2 
=============================================*/


class ElectricityBoard{
    private:
        string name;
        int unit_consume;
    public:
        void getData(){
            cout<<"Enter the Name of User :: ";
            cin>>name;
            cout<<"Enter the Number of Unit Consume :: ";
            cin>>unit_consume;
        }
        void display(){
            cout<<endl<<"Name of User :: "<<name<<endl;
            cout<<"Charge :: "<<calCharge()<<endl;
        }
        float calCharge(){
            float charge=0.0;
            if(unit_consume<=100){
                charge=unit_consume*0.6;
            }
            else if(unit_consume>100 && unit_consume<=200){
                charge=unit_consume*0.8;
            }
            else if(unit_consume>200){
                charge=unit_consume*0.92;
            }
            if(charge<50){
                charge=50;
            }
            if(charge>=300){
                charge+=(charge*15)/100;
            }
            return charge;
        }
};
int main() {
    ElectricityBoard eb;
    eb.getData();
    eb.display();
    return 0;
}


