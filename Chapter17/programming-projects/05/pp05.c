#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_WORD_LEN 20

int read_line(char str[], int n);
int compare_words(const void *p, const void *q);

int main(void){
	char **words, *word, tmp_word[MAX_WORD_LEN];
	int i = 0, x = 0, len, max_words = 1;

	// Assign enough memory for an array of char pointers equal to the current maximum set length. 
	words = malloc(max_words * sizeof(char *));

	for(;;){
		printf("Enter a word: ");

		// Test if a word has been entered by checking return of read_line
		if((len = read_line(tmp_word, MAX_WORD_LEN + 1)) == 0)
			break;

		// Assign enough memory for the entered word
		word = malloc(len * sizeof(char));

		// Move string into word
		strcpy(word, tmp_word);

		// words[i] points to the beginning of each string. 
		words[i++] = word;
		
		// Test if words array needs more space, and assign extra as nessecary. 
		if(i >= max_words){
			words = realloc(words, (++max_words) * sizeof(char *));
		}
	}

	// I contains the number of strings in the array.
	for(x = 0; x < i; x++)
		printf("%s\n", words[x]);

	// Sort words
	qsort(words, i, sizeof(char *), compare_words);
	putchar('\n');

	// print sorted array
	printf("In sorted order: ");
	for(x = 0; x < i; x++)
		printf("%s ", words[x]);

	putchar('\n');

}

int compare_words(const void *p, const void *q){
	return strcmp( *(const char **) p, *(const char **) q);
}

int read_line(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}
