//
//  university.hpp
//  hw
//
//  Created by Дима on 09.10.23.
//

#ifndef university_hpp
#define university_hpp
#include <string>
#include <iostream>
using namespace std;
#include <stdio.h>
#include "human.hpp"
#include "student.hpp"
class University: public Human, public Student{
    string name;
    string adress;
    string faculty;
    
    public:
    University();
    University(string n, string a, string f);
    University(string UniName, string ad, string fac, string gr, int s, string HumName, int age);
    void input();
    void print();
    
    string getName() const;
    string getAdress() const;
    string getFaculty() const;
};

#endif /* university_hpp */
