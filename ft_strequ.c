/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiroko <ahiroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 22:53:11 by ahiroko           #+#    #+#             */
/*   Updated: 2019/04/16 23:05:14 by ahiroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t	ct;

	ct = 0;
	if ((NULL == s1) || (NULL == s2))
		return (0);
	while ((*(s1 + ct) == *(s2 + ct)) && (*(s1 + ct) && *(s2 + ct)))
		ct++;
	return (!*(s1 + ct) && !*(s2 + ct) ? 1 : 0);
}
