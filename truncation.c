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
    int x=53191;
    show_int(x);
    short sx = (short) x;
    show_short(sx);
    int y=sx;
    show_int(y);
    return 0;
}
