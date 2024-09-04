#include "functions.hpp"

int main()
{
srand(time(NULL));
int size=rand()%10;
int maxValue = 100;
int** matrix = genRandMatrix(size, maxValue);
print(matrix);
//очистка памяти
}