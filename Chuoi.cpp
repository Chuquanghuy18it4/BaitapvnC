#include<stdio.h>
#include<conio.h>
int main()
{
    char chuoi[100];
    int dem=0;
    printf("Nhap vao mot chuoi bat ki:");
    scanf("%s",chuoi);
    while (chuoi[dem] != '\0')
        dem++;
    printf("Tong so ki tu trong chuoi:%d",dem);
    getch();
}  
