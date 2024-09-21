/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 02:27:01 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/21 02:34:33 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calc.h"

int	main(int argc, char **argv)
{
	int		num1;
	int		num2;
	int		result;
	char	operator;

	if (argc != 4)
	{
		ft_putstr_fd("Usage: ./calc number1 operator number2\n", 1);
		return (1);
	}
	num1 = ft_atoi(argv[1]);
	num2 = ft_atoi(argv[3]);
	operator = argv[2][0];
	if (argv[2][1] != '\0')
	{
		ft_putstr_fd("Invalid operator\n", 1);
		return (1);
	}
	result = calculate(num1, operator, num2);
	ft_putnbr_fd(result, 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
