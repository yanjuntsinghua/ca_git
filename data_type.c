#include <stdio.h>
typedef unsigned char *byte_pointer;
void show_byte(byte_pointer start, int len){
    int i;
    for(i=0; i<len; i++){
        printf(" %.2x", start[i]);
        printf("\n");
    }
    printf("\n");
}
void show_int(int x){
    show_byte((byte_pointer) &x, sizeof(int));
}
void show_float(float x){
    show_byte((byte_pointer) &x, sizeof(float));
}
void show_pointer(void *x){
    show_byte((byte_pointer) &x, sizeof(void *));
}
int main() {
    int i;
    unsigned char *p1;
    float j;
    void *p2;
    show_int(i);
    show_float(j);
    show_pointer(p2);
    show_pointer(p1);
    return 0;
}