int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power)
	{
		result = nb * result;
		power--;
	}
	return (result);
}
int main(void)
{
    int nb = 5;
    printf("ft_iterative_factorial(%d) = %d\n", nb, ft_iterative_factorial(nb));
    return 0;
}
