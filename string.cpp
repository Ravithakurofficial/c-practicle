#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int main()
{
    char str[20], *ptr;
    int len = 0;
    clrscr();
    cout<<"enter the string : ";
    gets(str);
    ptr = &str[0];
    while (*ptr)
    {
        len++;
        ptr++;
    }
    cout<<"\n length = "<<len;
    cout<<endl;
    cout<<"Ravi kumar thakur"<<endl;
    cout<<"IT Shift 2"
    getch();
    return 0;
    
}
