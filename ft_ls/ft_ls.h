/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarraya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 13:10:06 by mjarraya          #+#    #+#             */
/*   Updated: 2016/02/04 16:19:29 by mjarraya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

# include "libft/libft.h"
# include <dirent.h>
# include <stdio.h>
# include <stdlib.h>
# include <pwd.h>
# include <grp.h>
# include <time.h>
# include <sys/stat.h>

typedef struct s_args
{
	char	**elem;
	int		R;
	int		l;
	int		a;
	int		r;
	int		t;
	int		tot;
}				t_args;

//PARSING
t_args	ft_parse(int argc, char **argv);
int		ft_check_args(char **argv, t_args *args, int i, int j, int end_opt);
int		ft_checkfor_opt(char *arg, t_args *args);
void	ft_fill_opt(char c, t_args *args);
t_args	init_args(int argc);
char	**ft_get_files(char *d, char **f);


//SORTING
char	**ft_sorted_tab_ascii(char **tab);

//ERROR
void	ft_illegal_options(char c);
char	ft_is_option(char c);

//PRINT


#endif
