#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Macros
#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000

int sum(int count, ...)
{
	// Variables declaration, va_list is Variable Argument List
	int ans = 0;
	va_list ap;

	// Initializes the list
	va_start(ap, count);

	// Loop through the list, va_arg returns the next element in the list
	for (int i = 0; i < count; i++)
		ans += va_arg(ap, int);

	// Cleans the list
	va_end(ap);

	// Returns the sum
	return (ans);
}

int min(int count, ...)
{
	// Variables declaration, va_list is Variable Argument List
	int min_element = MAX_ELEMENT, temp;
	va_list ap;

	// Initializes the list
	va_start(ap, count);

	// Loop through the list, va_arg returns the next element in the list
	for (int i = 0; i < count; i++)
	{
		// Holds the element in the list
		temp = va_arg(ap, int);

		// If the element is less than min_element, then save this new value
		if (temp < min_element)
			min_element = temp;
	}

	// Cleans the list
	va_end(ap);

	// Returns min_element
	return (min_element);
}

int max(int count, ...)
{
	// Variables declaration, va_list is Variable Argument List
	int max_element = MIN_ELEMENT, temp;
	va_list ap;

	// Initializes the list
	va_start(ap, count);

	// Loop through the list, va_arg returns the next element in the list
	for (int i = 0; i < count; i++)
	{
		// Holds the element in the list
		temp = va_arg(ap, int);

		// If the element is greater than max_element, then save this new value
		if (temp > max_element)
			max_element = temp;
	}

	// Cleans the list
	va_end(ap);

	// Returns max_element
	return (max_element);
}

int test_implementations_by_sending_three_elements()
{
	/* Makes use of the computer's internal clock to control
	   the choice of the seed. Since time is continually
	   changing, the seed is forever changing */
	srand(time(NULL));

	// Variable declaration
	int elements[3];

	// Calls random values generator
	elements[0] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
	elements[1] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
	elements[2] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;

	// Prints the elements generated
	fprintf(stderr, "Sending following three elements:\n");
	for (int i = 0; i < 3; i++)
		fprintf(stderr, "%d\n", elements[i]);

	// Assigns the return of the functions
	int elements_sum = sum(3, elements[0], elements[1], elements[2]);
	int minimum_element = min(3, elements[0], elements[1], elements[2]);
	int maximum_element = max(3, elements[0], elements[1], elements[2]);

	// Prints the values generated by the functions
	fprintf(stderr, "Your output is:\n");
	fprintf(stderr, "Elements sum is %d\n", elements_sum);
	fprintf(stderr, "Minimum element is %d\n", minimum_element);
	fprintf(stderr, "Maximum element is %d\n\n", maximum_element);

	// Check if the functions worked properly
	int expected_elements_sum = 0;
	for (int i = 0; i < 3; i++)
	{
		/* If gets an element less than minimum_element or If gets an
		   element greater than maximum_element then end the check and
		   return 0 because the functions failed */
		if (elements[i] < minimum_element)
			return (0);
		if (elements[i] > maximum_element)
			return (0);

		expected_elements_sum += elements[i];
	}

	// Returns 1 if the sum is correct, otherwise 0
	return (elements_sum == expected_elements_sum);
}

int test_implementations_by_sending_five_elements()
{
	/* Makes use of the computer's internal clock to control
	   the choice of the seed. Since time is continually
	   changing, the seed is forever changing */
	srand(time(NULL));

	// Variable declaration
	int elements[5];

	// Calls random values generator
	elements[0] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
	elements[1] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
	elements[2] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
	elements[3] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
	elements[4] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;

	// Prints the elements generated
	fprintf(stderr, "Sending following five elements:\n");
	for (int i = 0; i < 5; i++)
		fprintf(stderr, "%d\n", elements[i]);

	// Assigns the return of the functions
	int elements_sum = sum(5, elements[0], elements[1], elements[2], elements[3], elements[4]);
	int minimum_element = min(5, elements[0], elements[1], elements[2], elements[3], elements[4]);
	int maximum_element = max(5, elements[0], elements[1], elements[2], elements[3], elements[4]);

	// Prints the values generated by the functions
	fprintf(stderr, "Your output is:\n");
	fprintf(stderr, "Elements sum is %d\n", elements_sum);
	fprintf(stderr, "Minimum element is %d\n", minimum_element);
	fprintf(stderr, "Maximum element is %d\n\n", maximum_element);

	// Check if the functions worked properly
	int expected_elements_sum = 0;
	for (int i = 0; i < 5; i++)
	{
		/* If gets an element less than minimum_element or If gets an
		   element greater than maximum_element then end the check and
		   return 0 because the functions failed */
		if (elements[i] < minimum_element)
			return (0);
		if (elements[i] > maximum_element)
			return (0);

		expected_elements_sum += elements[i];
	}

	// Returns 1 if the sum is correct, otherwise 0
	return (elements_sum == expected_elements_sum);
}

int test_implementations_by_sending_ten_elements()
{
	/* Makes use of the computer's internal clock to control
	   the choice of the seed. Since time is continually
	   changing, the seed is forever changing */
	srand(time(NULL));

	// Variable declaration
	int elements[10];

	// Calls random values generator
	elements[0] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
	elements[1] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
	elements[2] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
	elements[3] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
	elements[4] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
	elements[5] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
	elements[6] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
	elements[7] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
	elements[8] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
	elements[9] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;

	// Prints the elements generated
	fprintf(stderr, "Sending following ten elements:\n");
	for (int i = 0; i < 10; i++)
		fprintf(stderr, "%d\n", elements[i]);

	// Assigns the return of the functions
	int elements_sum = sum(10, elements[0], elements[1], elements[2], elements[3], elements[4],
						   elements[5], elements[6], elements[7], elements[8], elements[9]);
	int minimum_element = min(10, elements[0], elements[1], elements[2], elements[3], elements[4],
							  elements[5], elements[6], elements[7], elements[8], elements[9]);
	int maximum_element = max(10, elements[0], elements[1], elements[2], elements[3], elements[4],
							  elements[5], elements[6], elements[7], elements[8], elements[9]);

	// Prints the values generated by the functions
	fprintf(stderr, "Your output is:\n");
	fprintf(stderr, "Elements sum is %d\n", elements_sum);
	fprintf(stderr, "Minimum element is %d\n", minimum_element);
	fprintf(stderr, "Maximum element is %d\n\n", maximum_element);

	// Check if the functions worked properly
	int expected_elements_sum = 0;
	for (int i = 0; i < 10; i++)
	{
		/* If gets an element less than minimum_element or If gets an
		   element greater than maximum_element then end the check and
		   return 0 because the functions failed */
		if (elements[i] < minimum_element)
			return (0);
		if (elements[i] > maximum_element)
			return (0);

		expected_elements_sum += elements[i];
	}

	// Returns 1 if the sum is correct, otherwise 0
	return (elements_sum == expected_elements_sum);
}

int main(void)
{
	// Variable declaration
	int number_of_test_cases;

	// Assigns the input to the corresponding variable
	scanf("%d", &number_of_test_cases);

	// Loop while number_of_test_cases > 0
	while (number_of_test_cases--)
	{
		// Checks if the code pass all tests
		if (test_implementations_by_sending_three_elements())
			printf("Correct Answer\n");
		else
			printf("Wrong Answer\n");

		if (test_implementations_by_sending_five_elements())
			printf("Correct Answer\n");
		else
			printf("Wrong Answer\n");

		if (test_implementations_by_sending_ten_elements())
			printf("Correct Answer\n");
		else
			printf("Wrong Answer\n");
	}

	// Returns successful exit status
	return (0);
}
