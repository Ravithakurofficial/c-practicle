#include<iostream.h>
#include<conio.h>

class A
{
    public:
    A(){
        cout<<"A's constructor called"<<endl;
    }

};

class B
{
    static A a;
    public:
    B()  {
        cout<<"B' Constructor called"<<endl;
    }
};

int main()
{
    clrscr();
    B b;
    
    cout<<"Ravi kumar thakur"<<endl;
    cout<<"IT Shift 2"
    getch();
    return 0;
}