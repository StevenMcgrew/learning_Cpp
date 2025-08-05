#include <print>
#include "utils.cpp"

int main() {
    int age = get_integer_input("Enter your age: ");
    std::string name = get_string_input("Enter your full name: ");
    double gpa = get_double_input("Enter your GPA from school: ");
    std::println("Hello {}! You are {} years old, and your GPA is {:.2f}!", name, age, gpa);
    
    return 0;
}