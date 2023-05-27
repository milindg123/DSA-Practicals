/*#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  char var1[100];
  fstream file1;
  file1.open("abc.txt",ios::out);

  cout <<"\n writing into the file---\n";

  file1 <<"Hii my name is Milind" <<endl;
  file1 <<"I am second year computer engineering student"<<endl;
  file1.close();

  file1.open("abc.txt",ios::in);

  file1.getline(var1,100);
  cout<<"\n"<< var1;
  file1.getline(var1,100);
  cout<<"\n"<<var1;

  return 0;

}
*/
/*#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  char var1[100];
  fstream file1;
  file1.open("äbc.txt",ios::out);

  cout<<"\n writing into the file--- \n";

  file1 << "Hii my name is Milind";
  file1 << "I am second year computer engineering student";
  file1.close();

  file1.open("abc.txt",ios::in);

  file1.getline(var1,100);
  cout << "\n" << var1;
  file1.getline(var1,100);
  cout << "\n" << var1;

  return 0;

}
*/

/*#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  char var1[100];
  fstream file1;
  file1.open("abc.txt",ios::out);

  cout<<"\n writing into the file----\n";

  file1<<"Hii my name is Chhagan"<<endl;
  file1<<"I am third year diploma student"<<endl;
  file1.close();

  file1.open("abc.txt",ios::in);

  file1.getline(var1,100);
  cout <<"\n" << var1;
  file1.getline(var1,100);
  cout <<"\n" << var1;

  return 0;
}
*/
/*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  char var1[100];
  fstream file1;

  file1.open("abc.txt",ios::out);

  cout<<"\n writting into the file---\n";

  file1<<"Hii my name is Milind"<<endl;
  file1<<"I am third year computer engineering"<<endl;
  file1.close();

  file1.open("abc.txt",ios::in);

  file1.getline(var1,100);
  cout<<"\n"<<var1;
  file1.getline(var1,100);
  cout<<"\n"<<var1;

  return 0;


}
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  char var1[100];
  fstream file1;

  file1.open("abc.txt",ios::out);
  
  cout<<"\n writting into the file----\n";

  file1<<"Hii my name Milind"<<endl;
  file1<<"I am third year computer eng student"<<endl;
  file1.close();

  file1.open("abc.txt",ios::in);
  file1.getline(var1,100);
  cout<<"\n"<<var1;
  file1.getline(var1,100);
  cout<<"\n"<<var1;

  return 0;

}