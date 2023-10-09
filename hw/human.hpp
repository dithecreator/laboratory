//
//  human.hpp
//  hw
//
//  Created by Дима on 09.10.23.
//

#ifndef human_hpp
#define human_hpp
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;
class Human{
    string name;
    int age;
    
public:
    Human();
    Human(string n, int a);
    void input();
    void print();
    string getName() const;
    int getAge() const;
};
#endif /* human_hpp */
