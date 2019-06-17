//判断1998年-2019年之间有多少个闰年并打印年份
#include <stdio.h>
int main(){
	int year;
	int num=0;
	for(year=1998; year<=2019; year++){
		if(year%100==0 || (year%4==0&&year%100!=0)){
			printf("%d是闰年\n", year);
			num ++;
		}
	}
	printf("1998-2019年之间一共有%d个闰年", num);
	return 0;
}

/**
*输出结果：
2000是闰年
2004是闰年
2008是闰年
2012是闰年
2016是闰年
1998-2019年之间一共有5个闰年

*/
