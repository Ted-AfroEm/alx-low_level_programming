/**
 * op_add - sum
 * @a: first number
 * @b: second number
 *
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the difference of a and b
 * @a: first num
 * @b: second num
 *
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of a and b
 * @a: first num
 * @b: second num
 *
 * Return: a*b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a by b
 * @a: first num
 * @b: second num
 *
 * Return: a/b
 */
int op_div(int a, int b)
{
	if(b == 0)
	{
	        printf("Division by zero is not allowed.");
		fprintf(stderr, "Division by zero! Exiting...\n");
		exit(100);
	}
	else
		return (a / b);
}

/**
 * op_mod - return the remainde  of the division of a by b
 * @a: first num
 * @b: second num
 *
 * Return: a%b
 */
int op_mod(int a, int b)
{
	if(b == 0)
	{
		printf("Modules by zero is not allowed.");
		fprintf(stderr, "Modules by zero! Exiting...\n");
		exit(100);
	}
	else
		return (a % b);
}
