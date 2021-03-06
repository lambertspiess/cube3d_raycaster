/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nblen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspiess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 21:11:11 by lspiess           #+#    #+#             */
/*   Updated: 2019/09/03 21:12:10 by lspiess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_nblen(int i)
{
	int			digits;

	digits = 1;
	while (i)
	{
		digits++;
		i /= 10;
	}
	return (digits);
}
