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
    short sx=0x8000;
    short sy=0xFFFF;
    short sz=sx+sy;
    short smax=0x7FFF;
    short s1=0x0001;
    short pover=s1+smax;
    printf("Short data type negative overflow\n");
    printf("%d\t", sx);
    show_short(sx);
    printf("%d\t\t", sy);
    show_short(sy);
    printf("%d\t", sz);
    show_short(sz);
    printf("\n");
    printf("Short data type positive overflow\n");
    printf("%d\t", smax);
    show_short(smax);
    printf("%d\t\t", s1);
    show_short(s1);
    printf("%d\t", pover);
    show_short(pover);
    return 0;
}
