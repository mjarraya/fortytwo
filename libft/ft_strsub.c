/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarraya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 13:41:30 by mjarraya          #+#    #+#             */
/*   Updated: 2016/01/11 15:20:31 by mjarraya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = ft_strnew(len);
	if (!s || !str)
		return (NULL);
	while (s[start + i] != '\0' && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	while (i < len)
	{
		str[i] = '\0';
		i++;
	}
	str[i] = '\0';
	return (str);
}
