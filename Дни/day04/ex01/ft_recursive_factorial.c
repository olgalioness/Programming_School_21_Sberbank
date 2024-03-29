/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 22:43:03 by marvin            #+#    #+#             */
/*   Updated: 2020/01/12 22:43:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb <= -1 || nb >= 13)
	{
		return (0);
	}
	else if (nb == 0)			// Если nb = 0, то факториал 0 будет равен 1, функция этого не учитывает, а мы учитываем, нашим условием.
	{							// ??? Постойте, но ведь функция и так 0 конвертирует в 1!
		return (1);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));	// мы сделали функцию внутри функции и т.д., ниже пример отлично объяснить как все это выглядит
			// Приложил скриншот с примером
	}

	return (nb * ft_recursive_factorial(nb - 1));	// мы сделали функцию внутри функции и т.д., ниже пример отлично объяснить как все это выглядит
}