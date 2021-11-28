#include <stdio.h>
int* invertir(int array[], int largo);
int main()
{
    int vector[7] = { 5,3,2,8,6,9,1 };

    int* invertido = new int[7];
    invertido = invertir(vector, 7);

    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", invertido[i]);
    }

    return 0;
}
int* invertir(int array[], int largo)
{
    int* inv = new int[largo];

    for (int i = 0; i < largo; i++)
    {
        inv[i] = array[largo - 1 - i];
    }
    return inv;

}