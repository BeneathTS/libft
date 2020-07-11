/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiroko <ahiroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:30:43 by ahiroko           #+#    #+#             */
/*   Updated: 2019/04/15 18:02:59 by ahiroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_ss(int *ct, const char *str)
{
	while ((str[*ct] == ' ' || str[*ct] == '\t' ||
		str[*ct] == '\n' || str[*ct] == '\v' ||
		str[*ct] == '\f' || str[*ct] == '\r') && str[*ct] != '\0')
		*ct = *ct + 1;
}