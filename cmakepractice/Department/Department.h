#pragma once
#include<iostream>
#include<string>

using namespace std;
class Department
{
private:
    string Dep_Name;
public:
    Department(const string str);
    ~Department();
    string getdata();
};
