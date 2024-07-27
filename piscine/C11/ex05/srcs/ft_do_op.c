/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 06:27:06 by enarindr          #+#    #+#             */
/*   Updated: 2023/11/23 07:16:57 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	ft_do_op(int val1, char op, int val2)
{
	int	a;

	a = val1 * val2;
	if (op == '+')
		return (val1 + val2);
	else if (op == '-')
		return (val1 - val2);
	else if (op == '*')
		return (a);
	else if (op == '/')
		return (val1 / val2);
	else if (op == '%')
		return (val1 % val2);
	if (op != '+' || op != '-' || op != '*'
		|| op != '/' || op != '%')
		return (0);
	return (0);
}

int	main(int argc, char *argv[])
{
	int		val1;
	int		val2;
	int		(*f)(int, char, int);
	char	*op;

	op = argv[2];
	f = &ft_do_op;
	if (argc != 4)
		return (0);
	if (ft_strlen(argv[2]) != 1)
		return (0);
	val1 = ft_atoi(argv[1]);
	val2 = ft_atoi(argv[3]);
	if (val2 == 0 && op[0] == '/')
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	else if (val2 == 0 && op[0] == '%')
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	ft_putnbr((*f)(val1, op[0], val2));
	write(1, "\n", 1);
}
