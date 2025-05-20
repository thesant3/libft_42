
#ifndef LIBFT_BONUS_H
# define LIBFT_BONUS_H

# include "libft.h"

// struct t_list
typedef struct s_list
{
	void		*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content);
#endif

