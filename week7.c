//pointers
#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y;
    //กำหนดค่า y =5
    y=5;
    int *ptr;
    //กำหนด x=y
    x=y;
    //กำหนด ptr= addres ของx
    ptr=&x;
    //แสดงค่าปัจจุบันของทั้ง 3 จำนวน
    printf("%d ",x);
    printf("%d ",y);
    printf("%d ",*ptr);
    *ptr+=3;
    //แสดงค่าหลังจาก *ptr+=3
    printf("%d ",x);
    printf("%d ",y);
    printf("%d ",*ptr);
    //จะเห็นได้ว่า ค่าของ *ptr = ที่อยู่ของ x 
    //ถ้า pointer ชี้ไปที่ &x ถ้าเราเปลี่ยนแปลงค่าของ x หรือ*ptr ค่าของทั้งสองตัวนี้ก็จะเปลี่ยนไปตามค่าที่เปลี่ยน
    //เช่นจากตัวอย่าง *ptr+=3 5+3=8 โดย*ptr ชี้ไปที่ค่าของxจึงทำให้ค่าของ x เปลี่ยนตาม

}