/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_box_ylen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloquet <sloquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:10:44 by sloquet           #+#    #+#             */
/*   Updated: 2022/01/29 13:58:57 by sloquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hsl_box.h"

size_t	ft_box_ylen(char ***box)
{
	size_t	y;

	y = 0;
	while (box[0][y])
		y++;
	return (y);
}
