/*
1.ʵ��strcpy 
2.ʵ��strcat 
3.ʵ��strstr
4.ʵ��strchr
5.ʵ��strcmp
6.ʵ��memcpy 

7.ʵ��memmove
* Liujingliang 2018_11_15
*/

#include "mystring.h"

int main()
{
	char dest[10] = { 0 };
	char *src = "abc";
	printf("->mystrcpy:%s\n", mystrcpy(dest, src));

	printf("->mystrcat:%s\n", mystrcat(dest, src));

	printf("strstr:%s\n", strstr("abcdabcd", "c"));
	printf("->mystrstr:%s\n", mystrstr("abcdabcd", "c"));

	printf("strchr:%s\n", strchr("abcd", 99));
	printf("->mystrchr:%s\n", mystrchr("abcd", 99));

	printf("strcmp:%d\n", strcmp("abc", "a1"));
	printf("->mystrcmp:%d\n", strcmp("abc", "a1"));

	printf("memcpy:%s\n", memcpy(dest, "aaaaaaaa", 3));
	printf("->mymemcpy:%s\n", mymemcpy(dest, "bbbbbbbb", 3));

	printf("memmove:%s\n", memmove(dest, "abcdabcd", 4));
	printf("mymemmove:%s\n", mymemmove(dest, "abcdabcd", 4));

	getchar();
	return 0;
}
