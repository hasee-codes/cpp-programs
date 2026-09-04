#include <iostream>
using namespace std;

class Father
{
public:
    void fatherSkill()
    {
        cout << "Father: Driving" << endl;
    }
};

class Mother
{
public:
    void motherSkill()
    {
        cout << "Mother: Cooking" << endl;
    }
};

class Child : public Father, public Mother
{
public:
    void childSkill()
    {
        cout << "Child: Drawing" << endl;
    }
};

int main()
{
    Child c;

    c.fatherSkill();
    c.motherSkill();
    c.childSkill();

    return 0;
}
