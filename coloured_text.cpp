 #include <iostream>

int main() {
    std::cout << "\033[31mThis is red" << "\n";      // Red
    std::cout << "\033[33mThis is orange" << "\n";   // Orange
    std::cout << "\033[32mThis is yellow" << "\n";   // Yellow
    std::cout << "\033[34mThis is blue" << "\n";     // Blue
    std::cout << "\033[35mThis is indigo" << "\n";   // Indigo
    std::cout << "\033[36mThis is violet" << "\n";   // Violet

    // Reset to default color
    std::cout << "\033[0m";

    return 0;
}
