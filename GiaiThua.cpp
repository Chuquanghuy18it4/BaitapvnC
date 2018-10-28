#include<stdio.h>
#include<math.h>
void nhapmang(int array[100],int n){
	for(int i=0;i<n;i++){
	printf("\narray[%d]=",i);
	scanf("%d",&array[i]);
}
}
int gt(int n){
	int gt=1;
for(int i=1;i<=n;i++){
	gt=gt*i;
}
return gt;
}
int main(){
	int mang[100];
	int n;
	printf("nhap n =");
	scanf("%d",&n);
	nhapmang(mang,n);
	int Sgt = 0 ;
  	for( int i = 0 ; i <n; i ++)
  	  Sgt = Sgt + gt (mang [i]);
  	printf ( " Tong giai thua cua cac phan tu trong mang la:%d \n " , Sgt);
}
