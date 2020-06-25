/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmehloma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:35:27 by mmehloma          #+#    #+#             */
/*   Updated: 2020/06/25 16:22:09 by mmehloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if(nb < 10 && nb >= 0)
	{
		ft_putchar(nb + '0');
	}
	else if(nb > 10)
	{
		ft_putchar(nb / 10 + '0');
		ft_putchar(nb % 10 + '0');
	}
	else
	{
		ft_putchar('-');
		ft_putchar(nb* -1);	
	}
}

int ft_recursive_factorial(int nb)
{
	int				i;
	long long int	res;

	if (nb < 0)
		return (0);
	
	i = 2;
	res = 1;
	
	while (i <= nb)
	{
		res *= i;
		++i;
	}
	return (res * ft_recursive_factorial(nb - 1));
}

int main(void)
{
        int n;
        n = ft_recursive_factorial(5);
        ft_putnbr(n);
        return 0;
}
