//do while实现1-100求和
#include <stdio.h>
int main(){
	int i;
	int sum=0;
	do{
		i++;
		sum += i;
	}while(i<100);

	printf("%d", sum);
	return 0;
	
}
/**
* 输出结果：5050
*/
