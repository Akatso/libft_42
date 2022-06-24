/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 01:12:35 by slepetit          #+#    #+#             */
/*   Updated: 2022/06/05 03:32:17 by slepetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*p;
	
	p = malloc(sizeof(t_list));
	if (!p)
		return (NULL);
	p->content = content;
	p->next = NULL;
	return (p);
}

/*
int	main()
{
	t_list *pouac;
	t_list *pouic;

	pouac = ft_lstnew("hi mom");
	pouic = ft_lstnew("i'm coding!");
	pouac->next = pouic;
	printf("%p\n%p", pouac->content, pouac->next->content);
	return 0;
}
*/
