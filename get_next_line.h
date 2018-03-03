/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 14:08:37 by nobrien           #+#    #+#             */
/*   Updated: 2018/03/02 14:16:13 by nobrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __GET_NEXT_LINE_H
# define __GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

int		loop(const int fd, char **buf, int *ret, char **line);
int		get_next_line(const int fd, char **line);
void	merge(const int fd, char **buf, int *ret);
# define BUFF_SIZE 42

#endif
