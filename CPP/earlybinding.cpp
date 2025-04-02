#include<iostream>

class Animal
{
public:
    void makesound()
    {
        std::cout << "Animals make sound" << std::endl;
    }

};
class Dog : public Animal
{
public:
    void makesound()
    {
        std::cout << "Dogs bark";
    }

};
int main()
{
    Animal an;
    Dog dog;
    an.makesound();
    Animal* ptr;
    ptr = &dog;
    ptr->makesound();

    return 0;
};