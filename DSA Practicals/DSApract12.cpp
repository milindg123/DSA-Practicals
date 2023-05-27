#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;

    fout.open("One.txt" , ios::out);
    cout<<"\n Writting into the file.....\n";

    cout<<"\n Location: "<<fout.tellp();
    cout<<" Line 01: My name is Mayur";
    fout<<"I am second year computer student"<<endl;

    cout<<"\n Location: "<<fout.tellp();
    cout<<"My name is Milind";
    fout<<"I am also the second year computer student"<<endl;

    cout<<"\n Location: "<<fout.tellp();
    cout<<"";
    fout<<"Mayur and Milind is best friends"<<endl;

    cout<<"\n Location: "<<fout.tellp()<<endl;
    fout.close();
    ifstream fin;

    fin.open("One.txt" , ios::in);
    cout<<"\n Reading from the file.....\n";

    cout<<"\n Location: "<<fin.tellg();
    cout<<"\n Shift control to...";
    fin.seekg(63 , ios::beg);
    cout<<"\n Location: "<<fin.tellg();
    cout<<" Reading.... ";

    char c;
    while(!fin.eof())
    {
        fin.get(c);
        cout<<c;
    }
    cout<<"\n Conclusion: We have Directly Accessed the line-03 of the file.";
    fin.close();

    return 0;
}
