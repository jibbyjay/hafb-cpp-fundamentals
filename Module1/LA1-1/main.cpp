#include <iostream> 
using namespace std;

int main() 
{
    int age;    //int: signed integers
    //cout: for system output
   std::cout <<"Lucky " << std::endl;
   cout << "This is using namespace." << endl;
   cout << "Wildcats"<<" "<<"WSU "<<"Odgen"<<endl;
   // cin: for system/user input
cout << "What is your age?" <<endl;
   cin >> age;
   // now return the input
   cout << "I see you are "<< age << "!" <<endl;
    return 0;
}
