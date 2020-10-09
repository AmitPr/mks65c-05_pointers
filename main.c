#include <stdio.h>

int main()
{
    int i = 1;
    char c = 'c';
    long l = 1202l;
    printf("INITIAL VALUES\n--------------\n");
    printf("int i:\t %d\n", i);
    printf("char c:\t %c\n", c);
    printf("long l:\t %ld\n", l);
    printf("\n");

    printf("ADDRESSES\n---------\n");
    printf("int i:\t %p\n", &i);
    printf("char c:\t %p\n", &c);
    printf("long l:\t %p\n", &l);
    printf("\n");

    int *ip = &i;
    char *cp = &c;
    long *lp = &l;
    printf("POINTERS\n--------\n");
    printf("int *ip:\t %p\n", ip);
    printf("char *cp:\t %p\n", cp);
    printf("long *lp:\t %p\n", lp);
    printf("\n");

    *ip = -1;
    *cp = 'z';
    *lp = 2147483647l;
    printf("MODIFIED\n--------\n");
    printf("int i:\t %d\n", i);
    printf("char c:\t %c\n", c);
    printf("long l:\t %ld\n", l);
    printf("\n");

    int ui = 17762020;
    int *int_ptr = &ui;
    char *chr_ptr = &ui;
    printf("CHAR/INT STUFF\n--------------\n");
    printf("uint ui:\t %u(DECIMAL) %x(HEX)\n", ui, ui);
    printf("int* int_ptr:\t %p points to value: %u\n", int_ptr, *int_ptr);
    printf("char* chr_ptr:\t %p points to value: %u\n", chr_ptr, *chr_ptr);
    printf("\n");

    printf("BYTES STUFF\n-----------\n");
    printf("Bytes of ui:\t ");
    int j;
    for (j = 0; j < 4; ++j)
    {
        printf("%hhu\t", *(chr_ptr + j));
    }
    printf("\n\n");
    int amount = 1;
    printf("Incrementing each byte by %d...\n", amount);
    printf("uint ui:\t %u(DECIMAL) %x(HEX) - At start\n", ui, ui);
    for (j = 0; j < 4; ++j)
    {
        *(chr_ptr + j) += amount;
        printf("uint ui:\t %u(DECIMAL) %x(HEX) - After incrementing byte #%d\n", ui, ui, j);
    }
    printf("Bytes of ui:\t ");
    for (j = 0; j < 4; ++j)
    {
        printf("%hhu\t", *(chr_ptr + j));
    }
    printf("\n");
    amount = 16;
    printf("Incrementing each byte by %d...\n", amount);
    printf("uint ui:\t %u(DECIMAL) %x(HEX) - At start\n", ui, ui);
    for (j = 0; j < 4; ++j)
    {
        *(chr_ptr + j) += amount;
        printf("uint ui:\t %u(DECIMAL) %x(HEX) - After incrementing byte #%d\n", ui, ui, j);
    }
    printf("Bytes of ui:\t ");
    for (j = 0; j < 4; ++j)
    {
        printf("%hhu\t", *(chr_ptr + j));
    }
    printf("\n");
}