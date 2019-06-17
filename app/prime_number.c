//打印100以内的素数并求和
#include <stdio.h>
int main(){
	int sum=0;
	for(int i=1; i<=100; i++){
		int num=0;
		for (int j=1; j<=i; j++){
			if(i%j==0){
				num++;
			}
			if(num>2){
				break;
			}
		}

		if(num==2){
			printf("%d ", i);
			sum += i;
		}
	}
	printf("\n总和是:%d", sum);
	return 0;
	
}

/**
*输出结果：
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 
总和是:1060

*/
