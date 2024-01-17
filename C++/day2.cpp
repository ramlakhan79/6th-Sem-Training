
#include <iostream>
using namespace std;

/*==================================
    Default Constructor.
===================================*/
/*
class student{
    student(){ // Default Constructor.
        cout<<"Hello World";
    }
};
int main()
{
    student st(); // Object Creation.
    return 0;
}
*/

/*==================================
    Parameterrized Constructor.
===================================*/
/*
class student{
    student(int x){ // Parameterrized Constructor.
        cout<<"Hello World";
    }
};
int main()
{
    student st(10); // Object Creation.
    return 0;
}
*/

/*==================================
    Parameterrized Constructor.
===================================*/
/*
class student{
    student(int n){ // Parameterrized Constructor.
        cout<<"Hello World";
    }
};
int main()
{
    int n;
    cin>>n;
    student st(n); // Object Creation.
    return 0;
}
*/
/*==================================
    Copy Constructor.
===================================*/
/*
class student{
    student(student x){ // Copy Constructor.
        cout<<"Hello World";
    }
};
int main()
{
    int n;
    cin>>n;
    student st(n); // Object Creation.
    return 0;
}
*/

/*==================================
    Copy Constructor.
===================================*/
/*
class student{
    student(student x){ // Copy Constructor.
        cout<<"Hello World";
    }
};
int main()
{
    student st; // Object Creation.
    student ob(st);
    return 0;
}
*/


/*==================================
    Complex Numbers.
===================================*/
/*
class Complex{
    public:
        Complex(){
            int real1,real2,imag1,imag2;
            cout<<"Enter the real1 and imag1 : ";
            cin>>real1>>imag1;
            cout<<"Enter the real2 and imag2 : ";
            cin>>real2>>imag2;
            cout<<"Complex Number :: "<<(real1+real2)<<"+"<<(imag1+imag2)<<"i";
        }
};
int main()
{
    Complex ob;
    return 0;
}
*/



/*======================================================================================
    WAP to create a class Demo with sttributes x, y. 
    Take values for attributes by using parameterized Constructor 
    and display the value by using show() method.
========================================================================================*/
/*
class Demo{
    public:
        int a,b;
        Demo(int x, int y){
            a=x;
            b=y;
        }
        void show(){
            cout<<a<<" "<<b;
        }
};
int main()
{
    int x,y;
    cin>>x>>y;
    Demo ob(x, y);
    ob.show();
    return 0;
}
*/

/*===================================================================
    WAP to Create a class ABC initialize any new object values 
    by existing object values by using " Copy Constructor ".
=====================================================================*/
/*
class ABC{
    public:
    int a,b;
        ABC(int x, int y){
            a=x;
            b=y;
            cout<<x<<" "<<y;
        }
        ABC(ABC &d){
            cout<<d.a<<" "<<d.b;
        }
};
int main()
{
    int x,y;
    cin>>x>>y;
    ABC d(x, y);
    ABC d1(d);
    return 0;
}
*/


/*===================================================================
   WAP to create a class TAXPAYER in c++ with following description : Private members:
   -Name of type string
   -PanNo of type string 
   -Taxabincm (Taxable income ) of type float
   -TotTax (Total Tax ) of type double
   1) A function CompTax() to calculate tax according to the following slab:
   Taxable Income         Tax% 
   Up to 160000              00
   >160000 and <=300000      05
   >300000 and <=500000     10
   >500000                  15
   
   Public members:
   A parameterized constructor to initialize all the members 
   2) A function INTAX() to enter data for the tax payer and call function CompTax() to 
   3) A function OUTAX() to allow user to view the content of all the data memers.
   
=====================================================================*/

class TAXPAYER{
    private:
        string name;
        string pan_no;
        float taxable_income;
        double total_tax;
    
    public:
        void compTax(){
            if(taxable_income<=160000){
                total_tax=0;
            }
            else if(taxable_income>160000 && taxable_income<=300000){
                total_tax=(taxable_income*0.05);
            }
            else if(taxable_income>300000 && taxable_income<=500000){
                total_tax=(taxable_income*1.0);
            }
            else if(taxable_income>500000){
                total_tax=(taxable_income*1.5);
            }
        }
};
int main()
{
    int x,y;
    cin>>x>>y;
    ABC d(x, y);
    ABC d1(d);
    return 0;
}
