/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sig.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <jguyet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 15:41:35 by jguyet            #+#    #+#             */
/*   Updated: 2017/03/21 15:41:36 by jguyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SIG_H
# define SIG_H

# include <signal.h>

void	ctrlc(int i);
void	ctrlz(int i);
void	ctrlq(int i);
void	sig_alarm(int i);
void	ft_sleep(int t);

int		g_sig;
int		g_breakflag;

#endif
