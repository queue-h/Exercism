#include "pangram.h"
#include <string.h>
#include <stdint.h>
#include <stddef.h>
bool is_pangram(const char *sentence)
{
	if (sentence == NULL) {
		return false;
	}

    int length = strlen(sentence);
	
	if (length == 0) {
		return false;
	}
	
	int letter = 0;
    int count = 0;
	for (letter = 'a'; letter < 'z' + 1; letter++) {
		count = 0;
		for (int x = 0; x < length; x++) {
			// mod letter by 32 to be case insensitive
			if (letter % 32 == sentence[x] % 32) {
				// letter found in input sentence
				count++;
			}	
		}
		if (count < 1)
		{
			// letter was not used
			return false;
		}
	}
	return true;
}