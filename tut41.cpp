#include <iostream>
using namespace std;

// Syntax for inheriting in multiple inheritance
// class DerivedC: visibility-mode base1, visibility-mode base2
// {
// Class body of class "DerivedC"
// };

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The value of Base1 is : " << base1int << endl;
        cout << "The value of Base2 is : " << base2int << endl;
        cout << "The value of Base3 is : " << base3int << endl;
        cout << "The sum of these values is : " << base1int + base2int + base3int << endl;
    }
};

// The generated derived class will look something like this:

// Data members:

// Base1int --> protected
// Base2int --> protected

// Member functions :

// Set_base1int() --> public
// Set_base2int() --> public

int main()
{
    Derived Vatsalya;
    Vatsalya.set_base1int(18);
    Vatsalya.set_base2int(2);
    Vatsalya.set_base3int(5);
    Vatsalya.show();
    return 0;
}