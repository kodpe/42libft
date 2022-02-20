/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloquet <sloquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:09:22 by sloquet           #+#    #+#             */
/*   Updated: 2022/01/29 14:52:29 by sloquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hsl_sort.h"

void	ft_intswap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
