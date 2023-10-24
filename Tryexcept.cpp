#include <iostream>
#include <stdexcept>
void check_condition(bool condition, const std::string& error_message) {
    if (!condition) {
        throw std::runtime_error(error_message);
    }
}

int main() {
    try {
        try {
            bool condition = false;
            check_condition(condition, "Error in nested try block");
        } catch (const std::runtime_error& e) {
            std::cerr << "Caught exception in nested try block: " << e.what() << std::endl;
            throw; // Re-throw the exception to the outer try block
        }
    } catch (const std::runtime_error& e) {
        std::cerr << "Caught exception in outer try block: " <<
