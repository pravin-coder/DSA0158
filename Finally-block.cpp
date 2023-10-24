#include <iostream>
#include <stdexcept>
void throw_an_exception() {
    throw std::runtime_error("An exception occurred");
}

int main() {
    try {
        throw_an_exception();
    } catch (const std::runtime_error& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Caught unknown exception" << std::endl;
    } finally {
        std::cerr << "Executing finally block..." << std::endl;
    }

    return 0;
}
