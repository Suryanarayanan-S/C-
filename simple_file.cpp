#include<iostream>
#include<fstream>
using namespace std;
 
int main() 
{
ofstream ofile; 
ofile.open ("text.txt"); 
cout << "This is my sample program" << endl;
ofile.close(); 
return 0;
}
