#include <iostream>
#include <fstream>     
using namespace std;
 
int main () 
{
ofstream ofile;
ofile.open ("file.txt");   
ofile<< "suryanarayanan", 14;
ofile.seekp (8);
ofile<< " narayanan", 10;
ofile.close();  
return 0;
}
