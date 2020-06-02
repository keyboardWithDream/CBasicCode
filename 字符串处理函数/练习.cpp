#include <stdio.h>
#include <string.h>

int main()
{
	char name[] = "harlanhu";
	char hello[21] = "hello";
	char copyName[9];
	char copyName2[7];

	//返回空间大小
	printf("字符数组空间为:%d\n", sizeof(name)); 

	//返回字符串长度
	printf("字符长度为:%d\n", strlen(name)); 

	//拷贝字符串: copyName 的长度必须大于 name
	strcpy_s(copyName, name); 
	printf("strcpy:%s\n", copyName);

	//限制拷贝长度 不包含结束符
	strncpy_s(copyName2, name, 6); 
	copyName2[6] = '\0'; //添加结束符
	printf("strncpy:%s\n", copyName2);

	//连接字符串 hello的长度必须大于 拼接之和
	strcat_s(hello, name);
	printf("strcat:%s\n", hello);

	//限制拼接长度
	strcat_s(hello, " "); // 拼接空格
	strncat_s(hello, name, 6);
	printf("strncat:%s\n", hello);

	//比较两个字符串是否相等;相等返回0,相反返回Ascll码差值
	printf("%d\n", strcmp(name, copyName));

	//限制比较
	printf("%d\n", strncmp(copyName2, name, 6));
}