/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rspilaks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:48:55 by rspilaks          #+#    #+#             */
/*   Updated: 2022/11/02 15:04:23 by rspilaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (nb < 0)
		return (0);
	while (++i <= nb)
	{
		result *= i;
	}
	return (result);
}
/*
int	main(void)
{
	int i;

	i = 3;
	printf("%d\n", ft_iterative_factorial(i));
}*/
