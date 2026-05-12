#include <stdio.h>

int main(int argc, char* argv[])
{
	int age;

	printf("参数个数:%d\n", argc);
	for(int i = 0; i < argc ; i++ ){
		printf("参数内容:%s\n", argv[i]);
	}
	scanf("%d", &age);
	printf("年龄是%d岁\n", age);

	return 0;
}
