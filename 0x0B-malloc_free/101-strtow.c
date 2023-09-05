#include <stdio.h>
#include <stdlib.h>

int count_words(char *str);
/**
 * strtow - splits a string into words
 *
 * @str: the given string
 *
 * Return: a pointer to an array of strings
 */
char **strtow(char *str)
{
	int i = 0;
	int j;
	char *start = str;
	char *end = str;
	int word_count;
	char **words;
	int length = 0;

	if (str == NULL || *str == '\0' || *str == ' ')
	{
		return (NULL);
	}
	word_count = count_words(str);
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	while (*end)
	{
		if (*end == ' ')
		{
			if (end > start)
			{
				length = end - start;
				words[i] = malloc((length + 1) * sizeof(char));
				if (words[i] == NULL)
				{
					return (NULL);
				}
				for (j = 0; j < length; j++)
				{
					words[i][j] = start[j];
				}
				words[i][j] = '\0';
				i++;
			}
			start = end + 1;
		}
		end++;
	}

	if (end > start)
	{
		length = end - start;
		words[i] = malloc((length + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < length; j++)
		{
			words[i][j] = start[j];
		}
		words[i][j] = '\0';
		i++;
	}

	words[i] = NULL;

	return (words);
}
/**
 * count_words - helper function to count the word
 *
 * @str: the given string
 *
 * Return: the number of words in the string
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

