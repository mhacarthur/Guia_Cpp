
// Font: https://www.geeksforgeeks.org/c-classes-and-objects/

#include <bits/stdc++.h>
using namespace std;

class Geeks
{
    public:
    string geekname;
    int geekid;

    void info()
    {
        cout << "Geek name is: " << geekname << endl;
        cout << "Geek id id  : " << geekid << endl;
    }

};

int main()
{
    Geeks geek1;
    geek1.geekname = "marcial";
    geek1.geekid = 1523;

    geek1.info();
    return 0;
}