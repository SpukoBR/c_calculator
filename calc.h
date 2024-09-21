/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 02:26:08 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/21 02:48:13 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CALC_H
# define CALC_H

# include <stddef.h>
# include <unistd.h>

int		ft_atoi(const char *str);

int		ft_isspace(int c);

void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(const char *s, int fd);

size	ft_strlen(const char *str);

int		add(int a, int b);
int		subtract(int a, int b);
int		multiply(int a, int b);
int		divide(int a, int b);
int		calculate(int num1, char operator, int num2);

#endif
