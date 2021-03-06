/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 15:38:40 by fsidler           #+#    #+#             */
/*   Updated: 2016/09/13 15:39:09 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset_int(int *tab, int i, int limit)
{
	int j;

	j = 0;
	while (j < limit)
	{
		tab[j] = i;
		j++;
	}
}
