/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhoekstr <jhoekstr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/28 18:21:39 by jhoekstr      #+#    #+#                 */
/*   Updated: 2023/04/28 17:20:55 by jhoekstr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strjoin(char *s1, char const *s2)
{
	int		i;
	char	*new;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	new = (char *) malloc(sizeof(char)
			* (ft_strlen((char *)s1) + ft_strlen((char *)s2)) + 1);
	if (new == NULL)
		return (NULL);
	while (*s1 != '\0')
		new[i++] = *s1++;
	while (*s2 != '\0')
		new[i++] = *s2++;
	new[i] = '\0';
	return (new);
}
