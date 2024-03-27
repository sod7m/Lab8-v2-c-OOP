#pragma once
#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

class Matrix {
public:
    Matrix(const std::vector<std::vector<int>>& matrix);
    int getLongestRowWithIdenticalElements() const;

private:
    std::vector<std::vector<int>> matrix;
    int longestRowWithIdenticalElements() const;
};

#endif
