#define L_STACK 1028
#include <stdio.h>
#include <stdint.h>

volatile uint8_t stack[L_STACK];
int top = -1;
void push(uint8_t byte);
uint8_t pop(void);

int main()
{
    printf("%d\n", pop());
    push(3);
    push(4);
    push(45);
    printf("%d\n", pop());
    printf("%d\n", pop());

    return 0;
}

void push(uint8_t byte)
{
    if ((top + 1) < L_STACK)
    {
        top++;
        stack[top] = byte;
    }
    else
    {
        printf("No hay lugar\n");
    }
}
uint8_t pop(void)
{
    if (top == -1)//no hay nada en stack
    {
        printf("no hay nada en stack\n");
        return NULL;
    }
    else
    {        
        int byte = stack[top];
        top--;
        return byte;
    }
}
