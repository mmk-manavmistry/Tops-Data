// Write a program to swap the two numbers using friend function without using third variable

#include<iostream>
using namespace std;

class num1; 

class num2 {
    private:
    int a;
        a=10;
        
    public:
        friend int swap(num2, num1);
};

class num1 {
    private:
        
    int b;
        b=20;
    public:
        friend int swap(num2, num1);
};

int swap(num2 n2, num1 n1) {
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
}

int main() {
    num2 tt;
    num1 mm;
    cout << "a= " <<swap(num2,num1)<< endl;
    cout << "b= " <<swap(num2,num1)<< endl;

}
