#include<bits/stdc++.h>
using namespace std;
class Student
{
    int age;
    
    public:
    char*name;
    Student( Student const &s)
    {
        this->age=age;
        //this->name=s.name; //shallow copy
        this->name=new char[strlen(s.name)+1]; //deep copy    for copy constructor to create new array copy the content to new array they acces new new address only
      strcpy(this->name,s.name);
        
    }
    Student(int age, char *name)
    {
        this->age=age;
       //this->name=name; //shall copy  this copy the address and access same address 
      this->name=new char[strlen(name)+1]; //deep copy   to create new array copy the content to new array they acces new new address only
      strcpy(this->name,name);

    }
    void display()
    {
        cout<<name<<" "<<age<<endl;
    }

};
int main()
{
    char name[]="abcd";
    cout<<"create own constructor output"<<endl;
    Student s1(20,name);
    s1.display();
    
    Student s2(s1); //copy constructor called
    s2.name[0]='e';
    s2.display();

    s1.display();
    
    return 0;
}