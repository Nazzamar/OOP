#include "functions.hpp" 


int* genRandArray(int size, int maxValue)
{
    int* arr = new int[size + 1];
    *arr = size;
    for(int i = 1; i<(size+1); i++){
        *(arr+i)=rand()%maxValue;
    }
    return arr;
}
void print(int* arr)
{
    cout << *arr << ":";
    for(int i = 0; i<(*arr);i++){
        cout <<setw(3)<< *(arr+i+1);
    }
    cout <<"\n";
}
int** genRandMatrix(int size, int maxValue)
{
    return;
}
void printMatrix(int** matrix)
{

}