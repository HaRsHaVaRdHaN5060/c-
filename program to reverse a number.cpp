#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int number,reversed_num=0;
    cout << "Enter number to be reversed :";

    cin>>number; 

    for(; number!=0;){
        reversed_num=reversed_num*10;
       reversed_num=reversed_num+number%10;
       number=number/10;
    }
    cout << "\nReversed number is: "<<reversed_num;
    getch();
    return 0;
}
