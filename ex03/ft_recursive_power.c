/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rspilaks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:02:37 by rspilaks          #+#    #+#             */
/*   Updated: 2022/11/02 15:13:22 by rspilaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power >= 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (0);
}
/*
int main (void) {
	int		nb;
	int		power;

	nb = 3;
	power = 3;
	printf("%d\n", ft_recursive_power(nb, power));
}*/
