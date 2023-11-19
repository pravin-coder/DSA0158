#include <iostream>

int main() {
    try {
        // Some code that may throw exceptions
        int numerator, denominator;
        std::cout << "Enter numerator: ";
        std::cin >> numerator;
        std::cout << "Enter denominator: ";
        std::cin >> denominator;

        if (denominator == 0) {
            throw std::runtime_error("Cannot divide by zero.");
        }

        int result = numerator / denominator;

        // Other code that may throw exceptions

        std::cout << "Result: " << result << std::endl;

    } catch (const std::runtime_error &ex) {
        std::cerr << "Runtime Error: " << ex.what() << std::endl;

    } catch (const std::invalid_argument &ex) {
        std::cerr << "Invalid Argument: " << ex.what() << std::endl;

    } catch (...) {
        std::cerr << "An unexpected error occurred." << std::endl;
    }

    return 0;
}
