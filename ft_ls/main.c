/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarraya <mjarraya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 16:17:58 by mjarraya          #+#    #+#             */
/*   Updated: 2016/02/25 17:14:24 by mjarraya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		main(int argc, char **argv)
{
	char	**tab;
	t_args	args;
	int		i;

	i = 1;
	args = ft_parse(argc, argv);
	tab = args.elem;
	/*if (tab[0])
	{
		while (i < argc + 1)
		{
				ft_puttab(ft_dir_list(argv[i]));
				i++;
				if (i < argc)
					ft_putchar ('\n');
		}
	}
//	else
//		ft_ls(".");*/
	ft_puttab(args.elem);
	ft_putnbr(args.l);
	return (0);
}
