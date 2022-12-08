#include<iostream>
#include"vvod.h"
#include"sravnenie.h"
#include"prost.h"

using namespace std;
int main() {
    int matrix[100][100];
    int mas[100];
    int n;
    int x;
    cin >> n;
    cin >> x;
    OP::inputMatrix(matrix,n,x);
    if (AP::sravnMatrix(matrix, n, x)==true){
        UP::zamena(matrix,n,mas);
    }
}