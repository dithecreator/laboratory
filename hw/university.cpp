//
//  university.cpp
//  hw
//
//  Created by Дима on 09.10.23.
//

#include "university.hpp"

University:: University(){
    name = ' ';
    adress = ' ';
    faculty = ' ';
}

University:: University(string n, string a, string f){
    name = n;
    adress = a;
    faculty = f;
}

University:: University(string UniName, string ad, string fac, string gr, int s, string HumName, int age):
Human(HumName, age), Student(gr, s){
    name = UniName;
    adress = ad;
    faculty = fac;
    
}

void University:: input(){
    cout << "enter a name of the university: ";
    cin >> name;
    
    cout << "enter an adress of the university: ";
    cin >> adress;
    
    cout << "enter the faculty: ";
    cin >> faculty;
}

void University:: print(){
    cout << "university: " << name << endl;
    cout << "adress: " << adress << endl;
    cout << "faculty: " << faculty << endl;
    cout << "your name: ";
    cout << Human:: getName() << endl;
    cout << "your age: ";
    cout << Human:: getAge() << endl;
    cout << "group: ";
    cout << Student:: getGroup() << endl;
    cout << "marks: ";
    for(int i = 0; i < getSize(); i++){
        cout << Student:: getMarks() << ", ";
    }
}

string University:: getName() const{
    return name;
}

string University:: getAdress() const{
    return adress;
}

string University:: getFaculty() const{
    return faculty;
}
