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
        std::cout<<"Human Constructed" << std::endl;
    }

    ~Human()
    {
        std::cout<< "Destructing" << std::endl;
    }

public:
    const std::string & name() const {return _name;}
    const int & age() const {return _age;}
    const char & sex() const {return _sex;}

};

class Parent : public Human
{
    //std::vector <std::string> children;

    Parent ();

public:
    Parent (std::string n, int a, int s) : Human (n, a, s)
    {
        std::cout<< "Parent constructed" << std::endl;
    }

    /*
    void printChild(){
        for (int i  = 0; i < children.size(); i++)
        {
            std::cout << children[i] << ", ";
        }
        std::cout << std::endl;
    }


    void setChild(&Child name){
        for (int a = 0; a < 3; a++)
        {
            children.insert ()
        }
    }

    //////
    void setChildAllowence(int allowance, Child)
    {

    }
     */

};

class Child : public Human
{
    friend class Parent;
    std::string momName;
    std::string dadName;
    int allowance;

public:
    Child (std::string n, int a, int s, std::string momName, std::string dadName) : Human (n, a, s), allowance (0)
    {
        std::cout << "Child is constructed" << std::endl;
    }

    int getAllowence () const
    {
        std::cout << "The allowance is $ " << allowance << std::endl;
    }

    void printParent()
    {
        std::cout<< "Mother: "<< std::endl << momName << "Father: " << dadName << std::endl;
    }

};

int main() {
    Parent H ("Homer", 36, 'M');
    Parent M ("Marge", 34, 'F');
    Child ("Lisa", 12, 'F', "Marge", "Homer");
    Child ("Bart", 10, 'M', "Marge", "Homer");
    Child ("Maggie", 3, 'F', "Marge", "Homer");

}