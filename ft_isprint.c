#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int main(int argc, char const *argv[])
// {
// 	int i = 123;
// 	while (i <= 127)
// 	{
// 		printf("%d\n", ft_isprint(i));
// 		i++;
// 	}
// 	return 0;
// }
