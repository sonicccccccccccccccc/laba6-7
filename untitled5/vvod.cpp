#include "vvod.h"
#include <iostream>
namespace OP {
    void inputMatrix(int matrix[100][100], int n, int x) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < x; j++) {
                std::cin >> matrix[i][j];
            }
        }
    }
}

