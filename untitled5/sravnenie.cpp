#include "sravnenie.h"
namespace AP {
    bool sravnMatrix(int matrix[100][100], int n, int k) {
        int count = 0;
        //bool flag = false;
        for (int i = 0; i < n-1; i++) {
            for (int k = i+1; k < n; k++) {
                bool flag = true;
                for(int j = 0; j < n; j++){
                    if (matrix[i][j] != matrix[k][j]) flag = false;
                }
                if (flag)
                return true;

            }
            return false;
        }
    }
}


