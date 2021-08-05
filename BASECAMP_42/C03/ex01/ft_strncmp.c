int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (*s1 && *s2 && (*s1 == *s2) && c < n)
	{
		s1++;
		s2++;
		c++;
	}
	return (*s1 - *s2);
}
