#include <stdio.h>
typedef unsigned char* byte_pointer;
void show_byte(byte_pointer start, int len){
    int i;
    for(i=0;i<len;i++){
        printf("%.2x ", start[i]);
    }
    printf("\n");
}
void show_char(char x){
    show_byte((byte_pointer) &x, sizeof(char));
}
void show_short(short x){
    show_byte((byte_pointer) &x, sizeof(short));
}
void show_ushort(unsigned short x){
    show_byte((byte_pointer) &x, sizeof(unsigned short));
}
void show_int(int x){
    show_byte((byte_pointer) &x, sizeof(int));
}
void show_uint(unsigned int x){
    show_byte((byte_pointer) &x, sizeof(unsigned int));
}
void show_float(float x){
    show_byte((byte_pointer) &x, sizeof(float));
}
void show_long(long x){
    show_byte((byte_pointer) &x, sizeof(long));
}
void show_longlong(long long x){
    show_byte((byte_pointer) &x, sizeof(long long));
}
void show_double(double x){
    show_byte((byte_pointer) &x, sizeof(double));
}
int main(){
    short sx=-12345;
    unsigned short usx=sx;
    int x=sx;
    unsigned ux =usx;
    printf("sx = %d:\t", sx);
    show_short(sx);
    printf("usx = %u:\t", usx);
    show_ushort(usx);
    printf("x = %d:\t", x);
    show_int(x);
    printf("ux = %u:\t", ux);
    show_uint(ux);
    return 0;
}
