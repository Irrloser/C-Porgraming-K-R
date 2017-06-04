#include<stdio.h>
#include<string.h>
void atob(int n, int b,char *s);

int main()
{
	int n, b;
	char s[100];
	scanf("%d %d", &n, &b);
	atob(n, b, s);
	printf("%s\n", s);
}
void atob(int n, int b, char *s)
{
	int i;
	char set[] = "0123456789abcdefghijklmnopqrstuvwxyz";
	for (i = 0; n>0;i++ )
	{
		s[i] = set[n%b];
		n /= b;
	}
	s[i] = '\0';
	int j = strlen(s) - 1;
	char temp;
	for (i = 0; i < j - i; i++)
	{
		temp = s[i];
		s[i] = s[j - i];
		s[j - i] = temp;
	}
}
