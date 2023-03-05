/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:42:46 by diogpere          #+#    #+#             */
/*   Updated: 2023/03/05 14:42:48 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(char *dst, const char *src, int len)
{
	int	i;

	i = 0;
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (len--)
			dst[len] = src[len];
	}
	else
	{
		while (i < len)
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (dst);
}
