//อาเรย์
// file จากแลปโดยจากแลปนี้โจทย์คือให้รวมอาเรย์ 2 อาเรย์ให้เป็น 1อาเรย์
#include <stdio.h>

int main()
{
    // อาเรย์a=5 อาเรย์b=5 อาเรย์c=10
  int i, a[5],b[5],c[10] ;
printf("Enter array a: \n");
//เป็นการนำค่าจาก keyboard เข้าสู่อาเรย์ a โดยมีตำแหน่งกำกับที่ c[0]-c[4] 5จำนวน(ถ้านำไปรวมกับC)
    for(i=0;i<5;i++){
        printf("Please enter an integer: ");

    scanf ("%d",&a[i]);
}
    printf("Enter array b:\n");
//เป็นการนำค่าจาก keyboard เข้าสู่อาเรย์ a โดยมีตำแหน่งกำกับที่ c[5]-c[9] 5จำนวน(ถ้านำไปรวมกับC)
    for(i=0;i<5;i++){
        printf("Please enter an integer: ");

    scanf ("%d",&b[i]);
}
//เป็นการจำนวนเพิ่มค่าจาก อาเรย์aตำแหน่งa[0]-a[4]เพิ่มไปยังอาเรย์c ตำแหน่งc[0]-c[4]
    for(i=0;i<5;i++){
        c[i]=a[i];
    }
//เป็นการจำนวนเพิ่มค่าจาก อาเรย์aตำแหน่งb[0]-b[4]เพิ่มไปยังอาเรย์c ตำแหน่งc[5]-c[9]
    for(i=5;i<10;i++){
        c[i]=b[(i-5)];
    }

  printf ("Array c: ");
  for (i=0;i<10;i++)
    printf ("%d ",c[i]);

  printf ("\n");
  return 0;
}