#include <stdio.h>
#include <string.h>

int main()
{
	char name[] = "harlanhu";
	char hello[21] = "hello";
	char copyName[9];
	char copyName2[7];

	//���ؿռ��С
	printf("�ַ�����ռ�Ϊ:%d\n", sizeof(name)); 

	//�����ַ�������
	printf("�ַ�����Ϊ:%d\n", strlen(name)); 

	//�����ַ���: copyName �ĳ��ȱ������ name
	strcpy_s(copyName, name); 
	printf("strcpy:%s\n", copyName);

	//���ƿ������� ������������
	strncpy_s(copyName2, name, 6); 
	copyName2[6] = '\0'; //��ӽ�����
	printf("strncpy:%s\n", copyName2);

	//�����ַ��� hello�ĳ��ȱ������ ƴ��֮��
	strcat_s(hello, name);
	printf("strcat:%s\n", hello);

	//����ƴ�ӳ���
	strcat_s(hello, " "); // ƴ�ӿո�
	strncat_s(hello, name, 6);
	printf("strncat:%s\n", hello);

	//�Ƚ������ַ����Ƿ����;��ȷ���0,�෴����Ascll���ֵ
	printf("%d\n", strcmp(name, copyName));

	//���ƱȽ�
	printf("%d\n", strncmp(copyName2, name, 6));
}