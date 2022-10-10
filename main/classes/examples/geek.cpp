
// Font: https://www.geeksforgeeks.org/c-classes-and-objects/

#include <bits/stdc++.h>
using namespace std;
class Geeks
{
    public:
    string geekname;

    void printname() // method
    {
        cout << "Geekname is: " << geekname << endl;
    }
};

int main() {
    Geeks obj1;

    obj1.geekname = "Abhi";
    obj1.printname();
    return 0;
}