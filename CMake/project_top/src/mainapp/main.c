#include<stdio.h>
#include"sum.h"
#include"sub.h"
#include"mul.h"
#include"div.h"

int main(){
	double a, b, repo;
	printf("Enter A value : ");
	scanf("%lf", &a);
	printf("Enter B value : ");
	scanf("%lf", &b);

	sum(&a, &b, &repo);
	printf("sum of A and B : %f\n", repo);

	sub(&a, &b, &repo);
	printf("sub of A and B : %f\n", repo);

	mul(&a, &b, &repo);
	printf("mul of A and B : %f\n", repo);

	div(&a, &b, &repo);
	printf("div of A and B : %f\n", repo);

	return 0;
}
