#include <stdio.h>
int count_words(char *s);

int main()
{
	char *str = "Hello World! my name is fatima zahrae";
	int count = count_words(str);

	printf("the count words are: %d\n", count);
	return (0);
}

int count_words(char *s)
{
	int count, new_word;

	count = 0;
	new_word = 0;
	
	while (*s)
	{
		if (*s != ' ' && *s != '\t')
		{
			if (!new_word)
			{
				new_word = 1;
				count++;
			}
		}
		else
			new_word = 0;
		s++;
	}

	return (count);
}
