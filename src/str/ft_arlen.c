/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arlen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloquet <sloquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:03:18 by sloquet           #+#    #+#             */
/*   Updated: 2022/03/17 17:04:03 by sloquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hsl_str.h"

int	ft_arlen(const char **array)
{
	int	i;

	i = 0;
	while (array[i] && array[i][0] != '\n')
		i++;
	return (i);
}
