//数组冒泡排序
#include <stdio.h>
int main(){
	//int a[10];
	//int i;
	//printf("请输入10个数字:\n");
	//for(i=0; i<10; i++){
		//scanf("%d", &a[i]);
	//}
	int a[10] = {4,1,6,2,9,0,5,3,8,7};

	int temp;
	for(int i=0;i<9; i++){
		for(int j=0; j<9-i; j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(int i=0; i<10; i++){
		printf("%d ", a[i]);
	}
	return 0;
	
}

/**
*输出结果：0 1 2 3 4 5 6 7 8 9 

*/
