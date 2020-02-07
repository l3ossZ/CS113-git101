//ฟังก์ชั่น
#include<stdio.h>
#include<stdlib.h>
//กำหนด ชื่อ ฟังก์ชั่น เป็น plusOne นำตัวแปร ชนิด int เข้ามาใช้ในฟังก์ชั่น
int plusOne(int x){
    //เป็นการคืนค่าฟังก์ชั่น plusOne
    return x+1;
}
//ฟังก์ชัน แบบ recursive ใช้ในการหาค่าsum
int Sum(int x){
    //ใช้เป็นค่าของ Sum(0) returnค่าเป็น1 สรุปได้ว่า Sum(0)=0
    if(x==0){
        return 0;
    }
    else if(x==1){
        return 1;
    }
    else{
        //เป็นการเรียกซ้ำฟังก์ขันก่อนหน้ามาบวกกับตัวปัจจุบันคือ x เช่น Sum(5)=5+Sum(4)
        return x+Sum(x-1);
    }
}
int main(){
    int x=4,n=5;
    printf("x= %d\n",x);
    printf("plusOne x= %d\n",plusOne(x));
    printf("n= %d\n",n);
    printf("Sum n= %d\n",Sum(n));
}