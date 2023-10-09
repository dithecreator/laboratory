//
//  main.cpp
//  hw
//
//  Created by Дима on 09.10.23.
//

#include <iostream>
using namespace std;
#include "human.hpp"
#include "student.hpp"
#include "university.hpp"
int main() {
    University a("IT-STEP", "Sadovaya 7", "PROG", "Oleg", 3, "KH-221", 18);
//    a.Student:: print();
//    a.Human:: print();
    a.print();
}
