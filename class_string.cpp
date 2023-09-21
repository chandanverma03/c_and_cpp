#include <iostream>
#include <string>

using namespace std;

class Welcome {
public:
    Welcome() {
        cout << "Welcome ";
    }
};

class Hello {
public:
    Hello() {
        cout << "Hello ";
    }
};

int main() {
    string name;
    cin >> name;

    Welcome welcome;
    cout << name << endl;

    Hello hello;
    cout << name << endl;

    return 0;
}

