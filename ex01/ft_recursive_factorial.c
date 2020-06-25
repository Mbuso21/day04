/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmehloma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:35:27 by mmehloma          #+#    #+#             */
/*   Updated: 2020/06/25 16:32:45 by mmehloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

	i = 0;

	if(nb < 0)
		return -1;

	if(nb == 1)
		return 1;

	return (nb * ft_recursive_factorial(nb - 1));
}

int main(void)
{
        int n;
		int m;
		n = 5;
        m  = ft_recursive_factorial(n);
        //ft_putnbr(n);
		printf("%d", m);
        return 0;
}
