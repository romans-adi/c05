/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rspilaks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:55:35 by rspilaks          #+#    #+#             */
/*   Updated: 2022/10/31 12:56:00 by rspilaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 1;
	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (++i <= power)
	{
		nb *= n;
	}
	return (nb);
}
/*
int		main(void)
{
	int		nb;
	int		power;

	nb = 2;
	power = 3;
	printf("%d\n", ft_iterative_power(nb, power));
}*/
