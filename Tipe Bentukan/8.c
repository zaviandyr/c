/** Nama : Zukron Alviandy Rahmadhan
    NO BP: 1811081030
    Kelas: TRPL 1B
*/

#include "stdio.h"

typedef struct
{
    int x,y;
}pecahan;

void main()
{
    pecahan p1,p2,p3,p4;
    printf("Pecahan Pertama\n");
    printf("X : ");
        scanf("%d",&p1.x);
    printf("Y : ");
        scanf("%d",&p1.y);
    printf("\n");
    printf("Pecahan Kedua\n");
    printf("X : ");
        scanf("%d",&p2.x);
    printf("Y : ");
        scanf("%d",&p2.y);
    printf("\n\n");
    printf("Perkalian Pecahan");
    printf("\n");
    p3.x = p1.x*p2.x;
    p3.y = p1.y*p2.y;
    printf("%d/%d",p3.x,p3.y);
    printf("\n\nPembagian Pecahan");
    printf("\n");
    p4.x = p1.x*p2.y;
    p4.y = p1.y*p2.x;
    printf("%d/%d",p4.x,p4.y);
}
