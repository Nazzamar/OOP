#include "functions.hpp"

int* genRandArray(int size, int maxValue)
{
    int* arr = new int[size+1];
    *arr = size;
    for( int i = 1; i<size+1; i++){
        *(arr+i) = rand()%maxValue;
    }
    return arr;
}
void print(int* arr)
{
    int size = *arr;
    std::cout << *arr << ": ";
    for(int i = 1; i<size+1; i++){
        std::cout << std::setw(4) <<*(arr + i);
    }
}


int** genRandMatrix(int size, int maxValue)
{
    int **matrix = new int* [size+1];
    **matrix = size;
    for(int i = 1; i < size+1; i++){
        size = rand()%10;
        *(matrix+i) = genRandArray(size, maxValue);
    }
}
void printMatrix(int** matrix)
{
    std::cout << **matrix << "\n";
    for(int i = 1; i < **matrix+1; i++){
        for(int j = 1; j < **(matrix+); j++){
            std::cout << std::setw(1) << matrix[i][j];
        }
    }

}