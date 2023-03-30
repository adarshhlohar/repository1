#include<iostream>
using namespace std;

class A{
    int a;
    public:

    // It Can be returning the void data. 
    // void setData(int a){
        // (*this).a = a;
        // aliter alternate way to define a this pointer.
    //     this->a = a;
    // } 

    // The setdata Function can be returning the object as the reference by using the this
    A & setData(int a){
        this->a = a;
        return *this;
    }
    void getData(){
        cout<<"The value of a is : "<<a <<endl;
    }
};


int main(){
    // A a;
    // a.setData(5);
    // a.getData();

    A a ;
    // By using the value setdata returning we can emplicitly call the getdata
    a.setData(18).getData();
}