//在二维数组中查找最大值以及其下标
#include <stdio.h>
int main(){
	int a[3][5] = {{4,11,6,2,9},{0,5,3,8,7},{20,23,10,22,10}};

	int max=a[0][0], max_location_x = 0,max_location_y = 0;

	for(int i=0; i<3; i++){
		for(int j=0; j<5; j++){
			if(a[i][j]>max){
				max=a[i][j];
				max_location_x = i;
				max_location_y = j;
			}
		}
		
	}
	printf("数组中的最大值是：%d,其下标是：%d %d", max, max_location_x, max_location_y);
	return 0;
	
}
/**
* 输出结果：
数组中的最大值是：23,其下标是：2 1
*/
