#include <stdio.h>
#include <stdlib.h>

int main() {
	int temp;
	int sum = 0, counter = 0;


	printf("Enter Value : ");
	scanf_s("%d", &temp);

	if (temp != -999)
	{
		printf("I'm inside the if construct!");

		counter = counter + 1;
		sum = sum + temp;

		printf("Enter Value: ");
		scanf_s("%i", &temp);

		if (temp != -999)
		{
			printf("I'm inside the nested if construct!");

			counter += 1;
			sum += temp;

			printf("Enter value: ");
			scanf_s("%i", &temp);

			if (temp != -999)
			{
				printf("I'm inside another nested if construct!");

				counter++;
				sum += temp;

				printf("Enter Value: ");
				scanf_s("%i", &temp);

				if (temp != -999)
				{
					printf("I'm inside a nested if-else construct!");
				}
				else
				{
					printf("Finally, I'm done with these nested constructs!");
					printf("The sum is %i.", sum);
				}
			}
		}
	}
	else
	{
		printf("Error: Invalid number!");
	}

	printf("I'm outside the nested constructs!");
	printf("You entered %i values.", counter);
	return 0;
}