#include "prost.h"
#include <iostream>
namespace UP {
    void zamena(int matrix[100][100],int n,int mas[100]) {
        int max;
        int min;
        for (int j = 0; j < n; j++) {
            min = 0;
            for (int i = 0; i < n; i++) {
                if (matrix[min][j] > matrix[i][j]) {
                    min = i;
                }
                if ((matrix[i][j] == 2 || matrix[i][j] == 3 || (matrix[i][j] * matrix[i][j]) % 24 == 1) and
                    matrix[i][j] > max) {
                    max = matrix[i][j];
                }
            }
            mas[j] = matrix[min][j];
        }
        for(int j=0;j<n;j++) {
            for (int i = 0; i < n; i++) {
                if (mas[j] == matrix[i][j]) {
                    matrix[i][j] = max;
                }
            }
        }
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                std::cout<<matrix[i][j]<<" ";
            }
        }

    }
}
