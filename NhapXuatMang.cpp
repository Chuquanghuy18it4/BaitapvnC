#include<stdio.h>
void nhapmang(int array[100],int n){
	for(int i=0;i<n;i++){
	printf("\narray[%d]=",i);
	scanf("%d",&array[i]);
}
}
void xuatmang(int array[], int n){
   printf("\n");
   for(int i = 0; i<n ; i++)
   {
      printf("mang[%d]=%d",i,array[i]);
   }
}
int main(){
	int mang[100];
	int n;
	printf("nhap n =");
	scanf("%d",&n);
	nhapmang(mang,n);
	xuatmang(mang,n);
}
