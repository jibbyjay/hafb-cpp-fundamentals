#include <iostream> 
using namespace std;

int main() 
{
    int age;    //int: signed integers
    int weight;
    //cout: for system output
   std::cout <<"Lucky " << std::endl;
   cout << "This is using namespace." << endl;
   cout << "Wildcats"<<" "<<"WSU "<<"Odgen"<<endl;
   // cin: for system/user input
cout << "What is your age?" <<endl;
   cin >> age;
   // now return the input
   cout << "I see you are "<< age << "!" <<endl;
   cout << "How much do you weigh?" <<endl;
   cin >> weight;
   cout << weight <<" is pretty heavy for someone who is "<<age<<endl;
   // sizeof(): get the size of the variable
   cout << "Integers are: "<< sizeof(int) << " bytes." << endl;
   cout << "Min Integer value: " << INT32_MIN << 
   " Max Integer value: " << INT32_MAX << " bytes." <<endl;

   // output the sum of two variables
   cout << "age + weight is " << age+weight<<endl;

    return 0;
}
