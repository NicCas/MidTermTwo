#include <iostream>
#include <cstdio>
#include <string>

// Base class
class Human
{
private:
    // Declare base class var
    std::string _name;
    int _age;
    char _sex;

    // Base class constructor
    Human();

protected:
    // Protected constructor for name age sex
    Human (const std::string & n, const int & a, const char & s) : _name(n), _age(a), _sex(s)
    {
        std::cout<<"Human Constructed\n";
    }

    ~Human()
    {
        std::cout<< "Destructing\n";
    }

public:
    const std::string & name() const {return _name;}
    const int & age() const {return _age;}
    const char & sex() const {return _sex;}

};

class Parent {

};

class Child {

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}