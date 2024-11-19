#include<stdio.h>
int main(){
	const float PI = 3.14;
	double r;
	printf("Moi ban nhap ban kinh hinh tron : ");
	scanf("%lf", &r);
    double chuvi = 2 * PI * r;
	printf("Chu vi hinh tron la %.2lf\n",chuvi);
	double dientich = PI * r * r;
	printf("Dien tich hinh tron la %.2lf",dientich);
	return 0;
}
