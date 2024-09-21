/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 02:31:23 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/21 02:33:18 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calc.h"

int	add(int a, int b)
{
	return (a + b);
}

int	subtract(int a, int b)
{
	return (a - b);
}

int	multiply(int a, int b)
{
	return (a * b);
}

int	divide(int a, int b)
{
	if (b != 0)
		return (a / b);
	ft_putstr_fd("Error: Division by zero\n", 1);
	return (0);
}

int	calculate(int num1, char operator, int num2)
{
	int	result;

	result = 0;
	if (operator == '+')
		result = add(num1, num2);
	else if (operator == '-')
		result = subtract(num1, num2);
	else if (operator == '*')
		result = multiply(num1, num2);
	else if (operator == '/')
		result = divide(num1, num2);
	else
	{
		ft_putstr_fd("Invalid operator\n", 1);
		return (1);
	}
	return (result);
}
