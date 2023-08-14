/*
To compile the c++ program =>
(1) change the folder directory to where the file exist
(2) g++ <filename>.cpp
(3) run the executable (a.exe) => .\a.exe
*/


#include <iostream>
using namespace std;

int main()
{
    char str[15] = "Hello world";
    for (int i=0;str[i]!='\0';i++)
    {
        cout<<str[i];
    }
    return 0;
}