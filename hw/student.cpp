//
//  student.cpp
//  hw
//
//  Created by Дима on 09.10.23.
//

#include "student.hpp"

Student:: Student(){
    group = ' ';
    marks = nullptr;
    size = 0;
}


Student:: Student(string g, int s){
    group = g;
    size = s;
    marks = new int[size];
    for(int i = 0; i < size; i++){
        marks[i] = 1 + rand() % (11 - 1);
    }
}


void Student:: input(){
    cout << "enter your group: ";
    cin >> group;
    cout << "enter a count of marks: ";
    cin >> size;
    marks = new int[size];
    for(int i = 0; i < size; i++){
        cout << "enter a mark: ";
        cin >> marks[i];
    }
}

int Student:: getSize() const{
    return size;
}

string Student:: getGroup() const{
    return group;
}
int* Student:: getMarks() const{
    return marks;
}

void Student:: print(){
    cout << "group: " << group << endl;
    cout << "marks: ";
    for(int i = 0; i < size; i++){
        cout << marks[i] << " ";
    }
    cout << endl;
}
