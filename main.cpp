#include "functions.hpp"

int main()
{
srand(time(NULL));
int size = rand()%10;
int maxValue = 100;
int* arr = genRandArray(size, maxValue);
print(arr);
//очистка выделенной памяти
}