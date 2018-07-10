#include <iostream>
#include <string>
using namespace std;

class author
{
char aname[10];
public:
friend class book;
};


class book
{
char bname[10];
int pages;
author a;
public:
void getdata()
{
cin>>a.aname;
cin>>bname;
cin>>pages;
}
void putdata()
{
cout<<a.aname<<"   "<<bname<<"   "<<pages;
}
};


int main()
{
book b;
b.getdata();
b.putdata();
}

