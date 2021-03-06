/*
** struct.h for lemin in /home/gicque_p/local/cpe/CPE_2014_lem-in/include
** 
** Made by Pierrick Gicquelais
** Login   <gicque_p@epitech.net>
** 
** Started on  Thu Apr 17 11:49:19 2014 Pierrick Gicquelais
** Last update Thu Apr 17 12:46:15 2014 Pierrick Gicquelais
*/

#ifndef		__STRUCT_H_
# define	__STRUCT_H_

typedef struct	s_lem	t_lem;
typedef struct	s_graf	t_graf;
typedef struct	s_list	t_list;

struct		s_list
{
  int		num_sommet;
  int		sommet_adj;
  int		*count;
  int		*adj;
  t_list	*next;
};

struct		s_graf
{
  int		sommet;
  int		arc;
  t_list	*list;
};

#endif		/* !__STRUCT_H_ */
