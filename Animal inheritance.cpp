#include <iostream>
class Herbivore : public Animal {
public:
    void eat() override {
        std::cout << "Herbivore is eating vegetables..." << std::endl;
    }
};
class Carnivore : public Animal {
public:
    void eat() override {
        std::cout << "Carnivore is eating meat..." << std::endl;
    }
};
int main() {
    Herbivore herbivore;
    Carnivore carnivore;

    herbivore.eat();
    carnivore.eat();

    return 0;
}
