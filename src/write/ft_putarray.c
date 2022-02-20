/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putarray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloquet <sloquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:12:42 by sloquet           #+#    #+#             */
/*   Updated: 2022/01/29 14:27:04 by sloquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hsl_write.h"

static size_t	st_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putarray(char **array)
{
	int	i;

	if (!array)
		return ;
	i = 0;
	while (array[i])
	{
		write(1, array[i], st_strlen(array[i]));
		i++;
	}
}

void	ft_putarray_fd(char **array, int fd)
{
	int	i;

	if (!array)
		return ;
	i = 0;
	while (array[i])
	{
		write(fd, array[i], st_strlen(array[i]));
		i++;
	}
}
