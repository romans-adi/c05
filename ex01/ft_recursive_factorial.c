/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rspilaks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:53:30 by rspilaks          #+#    #+#             */
/*   Updated: 2022/10/31 12:54:11 by rspilaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial_recur(int i, int n)
{
	if (i == 0)
		return (n);
	if (i >= 0)
		return (ft_recursive_factorial_recur(i - 1, n * i));
	return (0);
}

int	ft_recursive_factorial(int nb)
{
	return (ft_recursive_factorial_recur(nb, 1));
}

int		ft_recursive_factorial(int nb);
/*
int		main(void)
{
	int i;

	i = 5;
	printf("%d\n", ft_recursive_factorial(i));
}*/
