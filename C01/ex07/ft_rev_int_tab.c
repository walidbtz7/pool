
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	sw;
	int	j;

	i = 0;
	sw = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		sw = tab[i];
		tab[i] = tab[j];
		tab[j] = sw;
		j--;
		i++;
	}
}
