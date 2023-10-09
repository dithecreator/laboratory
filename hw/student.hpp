//
//  student.hpp
//  hw
//
//  Created by Дима on 09.10.23.
//

#ifndef student_hpp
#define student_hpp
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
class Student{
    string group;
    int* marks;
    int size;
public:
    Student();
    Student(string g, int s);
    void input();
    void print();
    int getSize() const;
    string getGroup() const;
    int* getMarks() const;
};

#endif /* student_hpp */
