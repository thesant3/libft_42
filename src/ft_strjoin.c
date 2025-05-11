char	*ft_strjoin(char const *s1, char const *s2)
{
	int	len;
	char	*str;

	len = ft_strlen(s1) + ft_strlen(s2);
	//str = malloc(len + 1);
	//str[0] = '\0';
	str = calloc(len + 1, sizeof(char));
	ft_strlcat(str, s1, len + 1);
	ft_strlcat(str, s2, len + 1);
	return (str);
}
