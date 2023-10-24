#include <iostream>
class Person {
public:
    virtual void work() {
        std::cout << "Person is working..." << std::endl;
    }
};

class Employee : public Person {
public:
    void work() override {
        std::cout << "Employee is working...";
    }}
