/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloquet <sloquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:15:55 by sloquet           #+#    #+#             */
/*   Updated: 2022/01/29 14:02:07 by sloquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hsl_write.h"

void	ft_putnl(void)
{
	write(1, "\n", 1);
}

void	ft_putnl_fd(int fd)
{
	write(fd, "\n", 1);
}
