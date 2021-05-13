#include <stdio.h>
#define LIMIT 50 // Define a const named LIMIT (Do consants in all caps)

// if/else/else if

int main()
{

	// char nullstr[0];

	int age;
	printf("Hello, age chosen for you: \n");
	// scanf("%d", &age);
	age = 43;
	if (age < LIMIT)
	{
		printf("Your age is %d.\n", age);
		printf("Quite young, I say.\n");
	}
	else if(age == LIMIT)
	{
		printf("Your age is %d.\n", age);
		printf("Almost there.\n");
	}
	else
	{
		printf("So your age is %d, huh?\n", age);
		printf("Geezer.\n");
	}

	// scanf("Press Enter for next section: \n%[^\n]", &nullstr);

	int i = 1;

	while (i < 6)
	{
		printf("This is loop number %d\n", i);
		i++;
	}

	for(int iter = 5; iter != 0; iter--)
	{
		if (iter == 1)
		{
		printf("How many lines left? None!\n");
		}
		else
		{
 		printf("How many lines left? %d\n", (iter - 1));
		}
	}


	char option;
	int number;

	printf("Please enter the number you want converted.\n");
		// Please don't use get() because of its insecure "features"
	scanf("%i", &number);

	printf("What kind of conversion do you need?\n");
	printf("Press 'o' for octal, and 'x' for hex.\n");

	while((option = getchar()) != EOF && (option = getchar()) != '\n')
	{
		switch(option)
		{
			case 'o':
				printf("The number in octal is 0%o.\n", number);
			break;
			case 'x':
				printf("The number in hex is 0x%x.\n", number);
				break;
			default:
				printf("Option not valid.\n");
		break;
		}
	}

	printf("Thank you for converting!\n");

	


	return 0;
}