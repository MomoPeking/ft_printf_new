/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdang <qdang@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 13:59:46 by qdang             #+#    #+#             */
/*   Updated: 2020/05/28 17:50:34 by qdang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Return the length of a long long int (not include the sign digit).
*/

#include "libft.h"

int		ft_nbrlen(long long nbr)
{
	int		nbrlen;

	nbrlen = 0;
	if ((unsigned long long)nbr == -9223372036854775808U)
		return (19);
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		nbr *= -1;
	while (nbr > 0)
	{
		nbrlen++;
		nbr /= 10;
	}
	return (nbrlen);
}
