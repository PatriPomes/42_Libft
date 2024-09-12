/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamanzan <pamanzan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 08:25:42 by pamanzan          #+#    #+#             */
/*   Updated: 2024/06/16 09:10:14 by pamanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d <= s || d >= s + n)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d += n - 1;
		s += n - 1;
		while (n--)
			*d-- = *s--;
	}
	return (dest);
}

/*int	main(int argc, char *argv[])
{
	char	dest[50];
	char	src[50];

	if (argc != 3)
	{
		printf("Uso: %s <dest> <src>\n", argv[0]);
		return (1);
	}
	strcpy(dest, argv[1]);
	strcpy(src, argv[2]);
	printf("Antes de ft_memmove:\n");
	printf("Dest: %s\n", dest);
	printf("Src: %s\n", src);
	ft_memmove(dest, src, strlen(src) + 1);
	printf("\nDespués de ft_memmove:\n");
	printf("Dest: %s\n", dest);
	printf("Src: %s\n", src);
	return (0);
}*/
