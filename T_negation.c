#include <stdio.h>
typedef unsigned char* byte_pointer;
#define BIT0 (0x0001)
#define BIT1 (0x0002)
#define BIT2 (0x0004)
#define BIT3 (0x0008)
#define BIT4 (0x0010)
#define BIT5 (0x0020)
#define BIT6 (0x0040)
#define BIT7 (0x0080)
#define BIT8 (0x0100)
#define BIT9 (0x0200)
#define BITA (0x0400)
#define BITB (0x0800)
#define BITC (0x1000)
#define BITD (0x2000)
#define BITE (0x4000)
#define BITF (0x8000)

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
    short nsx=-sx;
    short nsy=-sy;
    printf("sx=%d\t\t",sx);
    show_short(sx);
    printf("sy=%d\t\t\t",sy);
    show_short(sy);
    printf("nsx=%d\t\t",nsx);
    show_short(nsx);
    printf("nsy=%d\t\t\t", nsy);
    show_short(nsy);
    short nsx_xor=((sx^0xffff)+0x0001);
    printf("nsx_xor=%d\t", nsx_xor);
    show_short(nsx_xor);
    short nsy_xor=((sy^0xffff)+0x0001);
    printf("nsy_xor=%d\t\t", nsy_xor);
    show_short(nsy_xor);
    return 0;
}
