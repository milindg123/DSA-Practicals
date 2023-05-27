#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char var1[100];
    fstream file1;
    file1.open("abc.txt", ios::out);

    cout<<"\nWriting into the File.....\n";

    file1<<"Hi My name is Mayur"<<endl;
    file1<<"I am second year computer engineering student."<<endl;

    file1.close();

    file1.open("abc.txt", ios::in);


    file1.getline(var1, 100);
    cout<<"\n"<<var1;
    file1.getline(var1, 100);
    cout<<"\n"<<var1;

    return 0;
}