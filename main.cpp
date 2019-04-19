#include <iostream>
#include <cstdio>

// Base class
class Human
{
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

class Parent
{

};

class Child : public Human
{
    friend class Parent;
    std::string momName;
    std::string dadName;
    int allowance;

    //default constructor needed

public:
    Child (std::string n, int a, int s, std::string momName, std::string dadName) : Human (n, a, s), allowance (0)
    {
        std::cout << "Child is constructed\n";
    }

    int getAllowence () const
    {
        std::cout << "The allowance is $ " << allowance << "\n";
    }

    void printParent()
    {
        std::cout<< "Mother: \n"<< momName << "Father: " << dadName << "\n";
    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}