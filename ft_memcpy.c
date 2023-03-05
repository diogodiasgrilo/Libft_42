/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:42:42 by diogpere          #+#    #+#             */
/*   Updated: 2023/03/05 14:42:43 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(char *dst, const char *src, int n)
{
	int	i;

	i = 0;
	if (dst == src)
		return (dst);
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
