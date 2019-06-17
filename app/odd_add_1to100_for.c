//打印1-100内所有的偶数，并统计个数
#include <stdio.h>
int main(){
	int i;
	int counter=0;
	for(i=1;i<=100; i++){
		if(i%2==0){
			printf("%d\n", i);
			counter++;
		}
	}

	printf("%d", counter);
	return 0;
	
}