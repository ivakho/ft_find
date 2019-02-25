#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_same(char	*str)
{
	int		i;
	int		j;
	char	*strNew;
    
	i = 0;
	j = 0;
	strNew = (char *)malloc(sizeof(char) * (strlen(str) + 1));
	while (str[i])
    {
        if (str[i] != str[i+1])
        {
            strNew[j] = str[i];
            j++;
        }
        i++;
    }
	return (strNew);
}

char	*ft_find(char	*A, char	*B)
{
    if (strlen(A) > strlen(B))
	    return (ft_find(B, A));
		
	char	*C;
	int		i;
	int		j;
	int		z;

	i = 0;
	j = 0;
	z = 0;
	C = (char *)malloc(sizeof(char) * (strlen(A) + 1));
	while (A[i])
	{
		while (B[j])
		{
			if (A[i] == B[j])
			{
				C[z] = A[i];
				z++;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (ft_same(C));
}