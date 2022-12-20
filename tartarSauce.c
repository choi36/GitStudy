#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>


int main() {
	srand(time(NULL));

	int score = 1;
	int a, b, yeonsanja, correct, answer;
	char yeonsanjaDisplay;
	while (score <= 10) {
		a = rand() % 20 + 1;
		b = rand() % 20 + 1;
		yeonsanja = rand() % 4 + 1;

		if (yeonsanja == 1) {
			correct = a + b;
			yeonsanjaDisplay = '+';
		}
		else if(yeonsanja == 2) {
			correct = a - b;
			yeonsanjaDisplay = '-';
		}
		else if (yeonsanja == 3) {
			correct = a * b;
			yeonsanjaDisplay = '*';
		}
		else if (yeonsanja == 4) {
			correct = a / b;
			yeonsanjaDisplay = '/';
		}

		printf("[%d/10] %d %c %d = ", score, a, yeonsanjaDisplay, b);
		scanf("%d", &answer);

		
	}
}