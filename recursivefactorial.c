#include <stdio.h>

int fact(int num);

int main(){
	int number;
	number = 10;

	printf("Recursive Factorial of 10 is: %d ", num);

	return 0;

}


int fact(int num){
	int n;

	n = num;

	while(n != 0 || n !=1 ){
		num = (fact(n) * (n - 1));
	}
	return num;
}