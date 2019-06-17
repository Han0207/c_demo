#include <stdio.h>
int main(){
	int i;
	int sum=0;

	while(i<=100){
		sum += i;
		i++;
	}

	printf("%d", sum);
	return 0;
	
}