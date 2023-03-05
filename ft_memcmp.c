/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:42:36 by diogpere          #+#    #+#             */
/*   Updated: 2023/03/05 14:42:38 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const char *s1, const char *s2, int n)
{
	int				i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			c1 = s1[i];
			c2 = s2[i];
			return (c1 - c2);
		}
		i++;
	}
	return (0);
}
