#include<conio.h>
#include<stdio.h>
int main(){
	int sdc,sdm,tiendien;
	printf("nhap vao so dien cu:");
	scanf("%d",&sdc);
	printf("nhap vao so dien moi:");
	scanf("%d",&sdm);
	int dtt=sdm-sdc;
	if(dtt<50){
	tiendien=dtt*1500;
	printf("tien dien cua thang nay la %d",tiendien);}
   else	if(50<dtt<100){
	tiendien=(50*1500)+((dtt-50)*2000);
	printf("tien dien cua thang nay la %d",tiendien);}
	else  if(dtt>100){
	tiendien=(50*1500)+(100*2000)+((dtt-150)*3000);
	printf("tien dien cua thang nay la %d",tiendien);}
}

