#include <stdio.h>

/* First Attempt */
/*
int main(int argv, int argc[]) {
	for (int i = 1; i <= 100; i++) {
		bool fizz = ((i % 3) == 0) ? 1 : 0;
		bool buzz = ((i % 5) == 0) ? 1 : 0;
		if (fizz && buzz)
			printf("FizzBuzz.\n");
		else if (fizz && !buzz)
			printf("Fizz.\n");
		else if (!fizz && buzz)
			printf("Buzz.\n");
		else
			printf("%i.\n", i);
	}
	scanf_s("");
}
*/

int main(int argv, int argc[]) {
	for (int i = 1; i <= 100; i++) {
		if (!(i % 3))
			printf("Fizz");
		if (!(i % 5))
			printf("Buzz");
		if ((i % 5) && (i % 3))
			printf("%i", i);
		printf(".\n");
	}
	scanf_s("");
}