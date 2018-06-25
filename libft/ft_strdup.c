/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 12:51:16 by tpatter           #+#    #+#             */
/*   Updated: 2018/05/30 11:20:49 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*newstr;
	int		i;

	i = 0;
	newstr = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (newstr)
	{
		while (s1[i])
		{
			newstr[i] = s1[i];
			i++;
		}
		newstr[i] = '\0';
	}
	return (newstr);
}
