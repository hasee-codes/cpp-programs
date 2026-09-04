#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating" << endl;
    }
};

class Dog : virtual public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking" << endl;
    }
};

class Cat : virtual public Animal
{
public:
    void meow()
    {
        cout << "Cat is meowing" << endl;
    }
};

class Pet : public Dog, public Cat
{
public:
    void play()
    {
        cout << "Pet is playing" << endl;
    }
};

int main()
{
    Pet p;

    p.eat();
    p.bark();
    p.meow();
    p.play();

    return 0;
}
