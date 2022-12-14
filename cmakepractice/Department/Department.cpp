#include "Department.h"

Department::Department(string s1)
{
    Dep_Name=s1;
}

Department::~Department()
{
    cout<<"Destructor";
}

string Department::getdata()
{
    return Dep_Name;
}
