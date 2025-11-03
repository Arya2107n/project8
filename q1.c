#include <stdio.h>

int main() {
	char str[100], *ptr;
	int length = 0;

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);

	ptr = str;

	while (*ptr != '\0') {
		length++;
		ptr++;
	}

	// Subtract 1 to ignore the newline character added by fgets
	printf("Length of the string: %d\n", length - 1);

	return 0;
}
