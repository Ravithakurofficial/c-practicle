#include<iostream.h>
#include<conio.h>

class M2;
class M1{
    int x;
    public: 
    void getvalue(){
        cout<<"Enter value of x : ";
        cin>>x;
    }
    friend void multiply (M1,M2);
};
class M2{
    int y;
    public: 
    void getvalue(){
        cout<<"Enter value of y : ";
        cin>>y;
    }
    friend void multiply (M1,M2)
};
void multiply(M1 a, M2 b){
    int mul;
    mul=a.x*b.y;
    cout<<"Multiplication is: "<<mul<<endl;
}

int main(){
    clrscr
    M1 a;
    a.getvalue();
    M2 b;
    b.getvalue();
    multiply(a,b);
    getch();
    return 0;
}