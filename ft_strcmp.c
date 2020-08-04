/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 23:22:08 by luwargni          #+#    #+#             */
/*   Updated: 2018/11/25 05:11:14 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t				i;
	const unsigned char	*s1b;
	const unsigned char	*s2b;

	s1b = (const unsigned char *)s1;
	s2b = (const unsigned char *)s2;
	i = 0;
	while (s1b[i] && s2b[i] && s1b[i] == s2b[i])
		i++;
	return (s1b[i] - s2b[i]);
}
