#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int i = 0;
	char input[100]{};
	printf("Enter word or sentence : ");
	scanf("%s",input);
	printf("Word with just alphabet is : ");
	while (i < 100)
	{
		if (input[i] >= 'a' and input[i] <= 'z' or input[i] >= 'A' and input[i] <= 'Z')
		{
			printf("%c", input[i]);
		}
		i++;
	}
}