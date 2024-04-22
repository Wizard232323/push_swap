/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoubbi <ekoubbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:28:22 by ekoubbi           #+#    #+#             */
/*   Updated: 2024/04/09 17:19:22 by ekoubbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


t_list	*ft_lstnew(int	content, int index)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list));
	if (!newnode)
		return (0);
	newnode->content = content;
	newnode->index = index;
	newnode->next = NULL;
	return (newnode);
}
/*
int	main()
{

	char str[] = "hello"; 
	t_list *newnode;

	newnode = ft_lstnew(str); 
	printf("%s", newnode->content);
}*/
 