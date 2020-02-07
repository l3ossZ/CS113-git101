#include<stdio.h>
#include<stdlib.h>
int main(){
    //loop whileแบบมีเงือนไข
    int i,j,n=8;
    i=0;
    while(i<n){
        if(i==(n-1)){
            printf("\n");
        }
        else{
            printf("%d ",i);
            i+=1;
        }
    }
    //loop while true +การใช้ break
    i=0;
    //1 เป็นค่าที่ทำให้เป็นจริงดังนั้น while จึงทำงานได้
    while(1){
        if(i==(n-1)){
            printf("\n");
            break;
        }
        else{
            printf("%d ",i);
            i+=1;
        }
    }
    //การใช้ for loop
    for(i=0;i<n;i++){
        if(i==(n-1)){
            printf("\n");
        }
        else{
            printf("%d ",i);
        }
    }
    //การใช้ switch
    char g='g';
    switch (g)
    {
    //เข้า case 'g'ทำแล้ว break ออก
    case 'g':
        printf("Yes");
        printf("\n");
        break;
    
    default:
        printf("No");
        printf("\n");
        break;
    }
    switch (g)
    //เข้า case default 
    {
    case 'a':
        printf("Yes");
        printf("\n");
        break;
    
    default:
        printf("No");
        printf("\n");
        break;
    }
    //ใช้ do while แบบคร่าวๆ
    i=0;
    do
    {
        printf("%d ");
        i++;
    } while (i<n);
    printf("\n");
}