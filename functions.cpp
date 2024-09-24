#include "functions.hpp"

void print(int *arr) {
  int size = *arr;
  std::cout << *arr << ": ";
  for (int i = 1; i < size + 1; i++) {
    std::cout << std::setw(3) << *(arr + i);
  }
  std::cout << "\n";
}
int *genRandArray(int size, int maxValue) {
  int *arr = new int[size + 1];
  *arr = size;
  for (int i = 1; i < *arr + 1; i++) {
    *(arr + i) = rand() % maxValue;
  }
  return arr;
}

int **genRandMatrix(int size, int maxValue) {
  int **matrix = new int *[size + 1];
  *matrix = &size;
  for (int i = 1; i < (**matrix) + 1; i++) {
    int arrsize = rand() % 10;
    *(matrix + i) = genRandArray(arrsize, maxValue);
  }
  return matrix;
}
void printMatrix(int **matrix) {
  int size = **matrix;
  std::cout << (**matrix) << std::endl;
  for (int i = 1; i < size + 1; i++) {
    print(*(matrix + i));
  }
}
