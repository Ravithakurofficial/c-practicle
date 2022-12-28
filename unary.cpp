#include<iostream.h>
#include<conio.h>

class Distance{
    public:
    int feet, inch;
    Distance(int f, int i)
    {
        this ->feet = f;
        this ->inch = i;

    }

    void operator-()

    {
        feet --;
        inch--;
        cout<<"\nfeet & Inches(decrement): "<<feet << "'"<<inch;
    }
};

int main()
{
    clrscr();
    Distance d1(8,9);

    -d1;
cout<<"Ravi kumar thakur"<<endl;
    cout<<"IT Shift 2"
    getch();
    return 0;
}