#include<stdio.h>
#include<string.h>
#include<assert.h>
//abbcdef
//bc
char* my_strstr(const char* p1, const char* p2)
{
	//assert(p1 && p2);//����ȵ���assert(p1 != NULL)
	assert(p1 != NULL);
	assert(p2 != NULL);
	char* s1 = p1;
	char* s2 = p2;
	char* cur = p1;//��p1��λ��

	//����p2Ҫ������\0��
	while (*p2 =='\0')
	{
		return p1;
	}
	//���p1Ҳ����Ϊ\0;
	while (*cur!='\0')
	{
		s1 = cur;
		s2 = p2;
		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
		{
			s1++;
			s2++;

		}
		if (*s2 == '\0')
		{
			return cur;//�ҵ��ַ���
		}
		cur++;
	}
	return NULL;//�Ҳ����ַ���
}
int main()
{
	char* p1 = "abbcdef";
	char* p2 = "bc";
	char* ret = my_strstr(p1, p2);//ģ��ʵ��
	printf("%s", ret);
	return 0;
}