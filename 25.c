#include <stdio.h>//This program will factorice a number given by the user in prime numbers
#include <math.h>
int main(){
	int n;//The number that the user will introduce
	int prime;//The variable that will tell whether a number is primer or not
	int found;//The variable that tells wether or not the number is divisible
	int div;//The divisor
	int count;//counts the times that the number have been divided
	div=1;

	printf("Give a number you want to factorice");
	scanf("%i",&n);
	printf("Your factorization is:");

	while(n!=1){
		found=0;
		count=0;
	while(n>=div&&found==0){
		div++;
		if(n%div==0){found=1;}}
	while(n%div==0){
		n=n/div;
		count++;}
	printf("%i^%i x ",div,count);

}
return 0;}
