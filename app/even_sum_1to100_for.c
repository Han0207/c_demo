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

	printf("1-100以内偶数个数是：%d", counter);
	return 0;
	
}

/**
*输出结果：
2
4
6
8
10
12
14
16
18
20
22
24
26
28
30
32
34
36
38
40
42
44
46
48
50
52
54
56
58
60
62
64
66
68
70
72
74
76
78
80
82
84
86
88
90
92
94
96
98
100
1-100以内偶数个数是：50
*/
