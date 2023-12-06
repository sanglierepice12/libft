/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gostr@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:17:59 by gsuter            #+#    #+#             */
/*   Updated: 2023/12/04 17:17:59 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int main(int argc, char **argv)
{
	t_list *lst = NULL;
	t_list *test;
	size_t	i;

	i = 0;
	while (argv[i])
	{
		test = ft_lstnew(argv[i++]);
		if (!test)
			return (1);
		ft_lstadd_back(&lst, test);
	}
	ft_lstiter(lst, print_content);
}*/