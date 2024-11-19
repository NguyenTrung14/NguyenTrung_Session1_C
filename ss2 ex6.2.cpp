#include<stdio.h>
int main(){
	const float PI = 3.14;
	float r;
	printf("Moi ban nhap ban kinh hinh tron : ");
	scanf("%f", &r);
    float chuvi = 2 * PI * r;
	printf("Chu vi hinh tron la %.2f\n",chuvi);
	float dientich = PI * r * r;
	printf("Dien tich hinh tron la %.2f",dientich);
	return 0;
}
