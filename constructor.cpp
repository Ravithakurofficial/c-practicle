// given two complex numbers addition using real and imaginary numbers by calling parameterized and default constructor, and constructor overloading
#include <iostream.h>
#include <conio.h>

class Complex
{
    // Declaring variable
public:
    int real, imaginary;
    // constructor to accept
    // real and imaginary
    Complex(int tempReal = 0, int tempImaginary = 0)
    {
        real = tempReal;
        imaginary = tempImaginary;
    }

    // defining addcomp() method
    // for adding two comple number
    Complex addComp(Complex C1, Complex C2)
    {
        // creating temp variable
        Complex temp;
        // adding real parts of complex numbers
        temp.real = C1.real + C2.real;
        // adding imaginary parts of complex numbers
        temp.imaginary = C1.imaginary + C2.imaginary;
        // returning the sum
        return temp;
    }
};

// main class
int main()
{
    clrscr();
    // first complex no.
    Complex C1(3,2);
    cout << "complex number 1 : " << C1.real << " + i" << C1.imaginary << endl;

    // second complex no.
    Complex C2(9, 5);
    // printing second complex no.
    cout << "complex number 2 : " << C2.real << " + i" << C2.imaginary << endl;
    // for storing the sum
    Complex C3;
    // calling addcomp() method
    C3 = C3.addComp(C1, C2);
    // printing the sum
    cout << "Sum of complex number : " << C3.real << " + i" << C3.imaginary;
    cout<<"\nRavi kumar thakur\n";
    cout<<"\n IT Shift 2";
    getch();
    return 0;
}