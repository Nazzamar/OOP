#include "functions.hpp"

int main()
{   
    srand(time(0));
    int size = rand()%10;
    int maxValue = 100;
    // int* arr = genRandArray(size, maxValue);
    // print(arr);
    // delete [] arr;

    int** matrix = genRandMatrix(size, maxValue);
    printMatrix(matrix);
    delete [] matrix[size];
}