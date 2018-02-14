#include <stdio.h>
int main(){
    unsigned int i=0xF0000000;
    int j=0xF0000000;
    unsigned int i_arith=0xF8000000;
    unsigned int i_logic=0x78000000;
    int j_arith=0xF8000000;
    int j_logic=0x78000000;
    printf("i original %u\n", i);
    printf("j Original %d\n", j);
    printf("\n");
    j=j>>1;
    i=i>>1;
    printf("i right shifted %u\n", i);
    printf("j right shifted %d\n", j);
    printf("\n");
    printf("i_arith %u\n", i_arith);
    printf("i_logic %u\n", i_logic);
    printf("j_arith %d\n", j_arith);
    printf("j_logic %d\n", j_logic);
    return 0;
}
//this is  to verify that the right shift of signed int is arithematic right shift but the right shift of unsigned int is logica right shift.