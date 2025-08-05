#include <iostream>

std::string get_string_input(const std::string& prompt) {
    std::string user_input;
    std::cout << prompt;
    std::getline(std::cin >> std::ws, user_input);
    return user_input;
}

int get_integer_input(const std::string& prompt) {
    int value;
    std::string user_input;

    while (true) {
        std::cout << prompt;
        std::getline(std::cin, user_input);

        try {
            value = std::stoi(user_input);
            break;
        } catch (const std::invalid_argument& e) {
            std::cerr << "Invalid input: Please enter a whole number." << std::endl;
        } catch (const std::out_of_range& e) {
            std::cerr << "Input out of range: Please enter a number within the integer limits." << std::endl;
        }
    }
    return value;
}

double get_double_input(const std::string& prompt) {
    double value;
    std::string user_input;

    while (true) {
        std::cout << prompt;
        std::getline(std::cin, user_input);

        try {
            value = std::stod(user_input);
            break;
        } catch (const std::invalid_argument& e) {
            std::cerr << "Invalid input: Please enter a decimal number." << std::endl;
        } catch (const std::out_of_range& e) {
            std::cerr << "Input out of range: Please enter a number within the decimal/double limits." << std::endl;
        }
    }
    return value;
}