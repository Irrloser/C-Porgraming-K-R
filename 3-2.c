#include<stdio.h>
#define MAX 100
//	copy one string to another and replace '\n'&'t' with visible \n&\t
void escape(char *, char*);
// reversible escapr
void rv_escape(char *, char*);
int main()
{
	char s[MAX], t[MAX];
	gets(s);
	//printf("%s\n", s);
	//escape(s, t);
	rv_escape(s, t);
}
void escape(char *s, char*t)
{
	int i,k = 0;

	for (i = 0; s[i]; i++,k++)
	{
		switch (s[i])
		{
		case '\t':
			t[k++] = '\\';
			t[k] = 't';
			break;
		case '\n':
			t[k++] = '\\';
			t[k] = 'n';
		default:
			t[k] = s[i];
			break;
		}
	}
	t[k++] = '\n';
	t[k] = '\0';
	printf("%s", t);
}
void rv_escape(char *s,char * t)
{
	int i, k;
	for (i = 0, k = 0; s[i]; i++,k++)
	{
		switch (s[i])
		{
		case'\\':
			switch (s[i+1])
			{
			case't':
				t[k] = '\t';
				i++;
				break;
			case'n':
				t[k] = '\n';
				i++;
				break;
			default:
				t[k] = s[i];
				break;
			}
			break;
		default:t[k] = s[i];
			break;
		}
	}
	t[k++] = '\n';
	t[k] = '\0';
	printf("%s", t);
}

