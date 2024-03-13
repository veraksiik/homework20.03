#include <iostream>

int main() {
    char letters[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' };

    std::cout << "   ";
    for (int i = 0; i < 8; i++) {
        std::cout << "   " << letters[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < 8; i++) {
        std::cout << "  " << 8 - i << " ";
        for (int j = 0; j < 8; j++) {
            std::cout << "| " << letters[j] << 8 - i << " ";
        }
        std::cout << "|" << std::endl;
        std::cout << "   ";
        for (int j = 0; j < 8; j++) {
            std::cout << "-----";
        }
        std::cout << "-" << std::endl;
    }

    system("pause");
    return 0;
}
