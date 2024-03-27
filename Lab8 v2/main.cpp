#include "matrix.h"
#include <iostream>

int main() {
    setlocale(LC_ALL, "Ukrainian");
    std::vector<std::vector<int>> matrix = {
        {1, 1, 1, 2, 3},
        {4, 4, 4, 4, 5},
        {6, 7, 7, 7, 8}
    };

    Matrix m(matrix);
    std::cout << "Номер рядка з найдовшою серією однакових елементів: " << m.getLongestRowWithIdenticalElements() << std::endl;

    return 0;
}
