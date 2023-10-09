//
//  human.cpp
//  hw
//
//  Created by Дима on 09.10.23.
//

#include "human.hpp"
Human:: Human(){
    name = ' ';
    age = 0;
}

Human:: Human(string n, int a){
    name = n;
    age = a;
}

void Human:: input(){
    cout << "enter your name: ";
    cin >> name;
    
    cout << "enter your age: ";
    cin >> age;
}

void Human:: print(){
    cout << "your name: " << name << endl;
    cout << "your age: " << age << endl;
}

string Human:: getName() const{
    return name;
}

int Human:: getAge() const{
    return age;
}
