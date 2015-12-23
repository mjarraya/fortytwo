/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarraya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 21:05:16 by mjarraya          #+#    #+#             */
/*   Updated: 2015/12/21 13:29:14 by mjarraya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		main(int argc, char **argv)
{
	char	*split;
	char	**tab;
	int		i;

	if (argc != 2)
	{
		ft_putstr("error\n");
		return (1);
	}
	i = 0;
	if (!(split = ft_split(ft_read(argv[1]))))
	{
		ft_putstr("error\n");
		return (0);
	}
	if (ft_validmap(split) == 0)
		ft_putstr("error\n");
	printf("%d\n", ft_counttetri(split));
	printf("%d\n", ft_strlen(split));
	return (0);
}