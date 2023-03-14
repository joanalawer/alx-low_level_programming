#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * **strtow - function splits a string into two words
 * @str: pointer to string
 * Return: NULL if str == NULL
 */
char **strtow(char *str)
{
       	// Check for invalid input
	if (str == NULL || *str == '\0')
	{
		return NULL;
	}
	
	// Allocate memory for the output array
	char **words = malloc(sizeof(char *));
	
	if (words == NULL)
	{
		return NULL;
	}
	
	// Split the input string into words
	char *word = strtok(str, " ");
	int num_words = 0;
	
	while (word != NULL)
	{
		// Resize the output array
		char **tmp = realloc(words, (num_words + 2) * sizeof(char *));
		
		if (tmp == NULL)
		{
			// Free memory and return NULL on failure
			for (int i = 0; i < num_words; i++)
			{
				free(words[i]);
			}
			
			free(words);

			return NULL;
		}
		
		words = tmp;
		
		// Allocate memory for the new word
		words[num_words] = malloc((strlen(word) + 1) * sizeof(char));
		
		if (words[num_words] == NULL)
		{
			// Free memory and return NULL on failure
			for (int i = 0; i < num_words; i++)
			{
				free(words[i]);
			}
			
			free(words);
			
			return NULL;
		}
		
		// Copy the word into the output array
		strcpy(words[num_words], word);
		num_words++;
		
		// Get the next word
		word = strtok(NULL, " ");
	}
	
	// Add a NULL terminator to the output array
	words[num_words] = NULL;
	
	return words;
}

