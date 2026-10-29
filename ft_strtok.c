char	*ft_strtok(char *str, const char *delim)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != delim[j] && delim[j] != '\0')
		{

			j++;
		i++;

}
