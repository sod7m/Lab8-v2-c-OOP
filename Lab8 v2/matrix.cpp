#include "matrix.h"
#include <algorithm>

Matrix::Matrix(const std::vector<std::vector<int>>& matrix) : matrix(matrix) {}

int Matrix::getLongestRowWithIdenticalElements() const {
    return longestRowWithIdenticalElements();
}

int Matrix::longestRowWithIdenticalElements() const {
    int longestRow = 0; //номер рядка
    int longestLength = 0; //довжина найдовшої серії

    for (int i = 0; i < matrix.size(); ++i) {
        auto it = matrix[i].begin();
        while (it != matrix[i].end()) {
            auto next = std::adjacent_find(it, matrix[i].end(), std::not_equal_to<>());
            int currentLength = std::distance(it, next);
            if (currentLength > longestLength) {
                longestLength = currentLength;
                longestRow = i;
            }
            it = next != matrix[i].end() ? next + 1 : next;
        }
    }

    return longestRow;
}
