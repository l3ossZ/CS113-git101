#include<stdio.h>
//int 4 byte float 4byte char 1 byte double 8byte
//ใช้ sizeofเช็คขนาดของตัวแปร(byte)
int main(){
    char x='a';
    int y=2;
    float z=2;
    double v=2;
    long int t=2;
    long long a=2;
    //เช็คขนาดbyte
    printf("%d\n",sizeof(x));
    printf("%d\n",sizeof(y));
    printf("%d\n",sizeof(z));
    printf("%d\n",sizeof(v));
    printf("%d\n",sizeof(t));
    printf("%d\n",sizeof(a));
    // format printf("")
    printf("y= %d\n",y);
    printf("y= %02d\n",y);
    printf("y= %2d\n",y);
    printf("z= %f\n",z);
    printf("z= %02f\n",z);
    printf("z= %.2f\n",z);
    //เรื่อง if else
    //เข้าเงือนไข if
    if(y==2){
        printf("Yes");
    }
    else{
        printf("No");
    }
    //เข้าเงือนไข else
   if(y==1){
       printf("Yes");
   }
   else{
       printf("No");
   }
}