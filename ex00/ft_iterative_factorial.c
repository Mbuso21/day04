/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmehloma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 07:59:56 by mmehloma          #+#    #+#             */
/*   Updated: 2020/06/25 13:16:17 by mmehloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.c>

int ft_iterative_factorial(int nb)
{
	int	ft_iterative_factorial(int nb)
	{
		int				i;
		long long int	r;

		if (nb < 0)
		{
			return (0);
		}
		i = 2;
		r = 1;
		while (i <= nb)
		{
			r *= i;
			++i;
		}
		return (r);
	}


