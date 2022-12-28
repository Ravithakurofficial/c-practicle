
#include <iostream.h>
#include <conio.h>


class a;

class b
{
    int number;

public:
    b(int x)
    {
        number = x;
    }
    void friend greatest(a a1, b b1);
};

class a
{
    int number;

public:
    a(int x)
    {
        number = x;
    }
    void friend greatest(a a1, b b1);
};

void greatest(a a1, b b1)
{
    if (a1.number > b1.number)
    {
        cout << "\nNumber in Class A is greatest i.e. " << a1.number;
    }
    else if (a1.number < b1.number)
    {
        cout << "\nNumber in Class B is greatest i.e. " << b1.number;
    }
    else
    {
        cout << "\nNumber in both class equal";
    }
}

int main()
{
    // clrscr();
    int num;
    cout << "\nEnter a number in Class A -";
    cin >> num;
    a a1(num);

    cout << "\nEnter a number in Class B -";
    cin >> num;
    b b1(num);
    greatest(a1, b1);
    cout << "\n";
    cout << "\nRavi kumar thakur" << endl;\
    cout<<"IT Shift 2"
    getch();
    return 0;
}