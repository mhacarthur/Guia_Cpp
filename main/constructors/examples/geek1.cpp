
// Link: https://www.geeksforgeeks.org/c-classes-and-objects/

#include <bits/stdc++.h>
using namespace std;

class Geeks{
    public:
    int id;
    int idlong;

    // Default Constructor
    Geeks(){
        cout << "Default Constructor called" << endl;
        id = -1;
    }

    // Constructor with a parameter
    Geeks(int x){
        cout << "Parameterized Constructor called" << endl;
        id = x;
        idlong = x + 2000;
    }

};

int main(){
    Geeks obj1;
    cout << "Geek id is: " << obj1.id << endl;

    Geeks obj2(10);
    cout << "Geek id is    : " << obj2.id << endl;
    cout << "Geek idlong is: " << obj2.idlong << endl;
    return 0;
}