/**
 *checkprime - verifies a number is prime.
 *@n: input variable
 *@i: input variable
 *Return:int.
 */
int checkprime(int i, int n)
{
	if (n == 1)
		return (0);

	if (i > n)
		return (0);
	if (n == i)
		return (1);

	if (n % i == 0)
		return (0);

	return (checkprime(i + 1, n));
}
/**
 * is_prime_number - verifies a number is prime.
 *@n: input variable
 *Return:int.
 */
int is_prime_number(int n)
{
	return (checkprime(2, n));
}
