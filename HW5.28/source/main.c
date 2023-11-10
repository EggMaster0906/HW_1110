#include <stdio.h>
#include <stdlib.h>

char changeCase(char alphabet);

int main() {
	char input;
	printf("Original character: ");
	scanf("%c", &input);
	char changedChar = changeCase(input);
	printf("Character after changing case: %c\n", changedChar);
	return 0;
}

char changeCase(char alphabet) {
	if (alphabet >= 'a' && alphabet <= 'z')
		return alphabet - 32;
	else if (alphabet >= 'A' && alphabet <= 'Z')
		return alphabet + 32;
	else
		return alphabet;
}