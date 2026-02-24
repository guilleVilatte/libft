#include <stdlib.h>

static size_t	count_words(const char *s, char sep)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != sep)
		{
			count++;
			while (s[i] && s[i] != sep)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*word_dup(const char *s, size_t start, size_t end)
{
	char	*word;
	size_t	len;
	size_t	i;

	len = end - start;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_all(char **array, size_t filled)
{
	size_t	i;

	i = 0;
	while (i < filled)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

char	**ft_split(const char *s, char sep)
{
	char	**result;
	size_t	word_count;
	size_t	i;
	size_t	start;
	size_t	index;

	if (!s)
		return (NULL);

	word_count = count_words(s, sep);
	result = malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);

	i = 0;
	index = 0;
	while (s[i])
	{
		if (s[i] != sep)
		{
			start = i;
			while (s[i] && s[i] != sep)
				i++;
			result[index] = word_dup(s, start, i);
			if (!result[index])
			{
				free_all(result, index);
				return (NULL);
			}
			index++;
		}
		else
			i++;
	}
	result[index] = NULL;
	return (result);
}

int main(void)
{
    printf("%s\n", ft_split("append an additional SUFFIX to file names", ' ')[1]);
    printf("%s\n", ft_split("append an additional SUFFIX to file names", 'p')[1]);
    return (0);
}