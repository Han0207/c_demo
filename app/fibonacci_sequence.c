//打印斐波那契数量前N项
#include <stdio.h>
int main(){
	int i,a, b;
	int num;
	//printf("请输入需要打印多少项:\n");
	//scanf("%d", num);

	num = 20;
	int temp;
	for(i=1;i<=num;i++){
		if(i<3){
			a=1;
			b=1;
			printf("1 ");
		}else{
			temp=a+b;
			a=b;
			b=temp;
			printf("%d ", temp);
		}
	}

	return 0;
	
}

/**
* 输出结果：1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 
*/
