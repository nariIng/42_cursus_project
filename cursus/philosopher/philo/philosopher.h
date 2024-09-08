/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 08:32:53 by enarindr          #+#    #+#             */
/*   Updated: 2024/09/08 07:08:54 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHER_H
# define PHILOSOPHER_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <sys/time.h>
# include <pthread.h>

# define RIGHT 0
# define LEFT 1

typedef struct s_philo		t_philo;
typedef struct s_process	t_process;

typedef struct s_philo
{
	int				id;
	int				is_eating;
	int				n_eat;
	int				have_eaten;
	int				last_meal;
	int				*r_state_fork;
	int				*l_state_fork;
	t_process		*process;
	pthread_t		thread;
	pthread_mutex_t	*l_fork;
	pthread_mutex_t	*r_fork;
	pthread_mutex_t	*times_eaten;
	pthread_mutex_t	*done;
	pthread_mutex_t	*eating;
}		t_philo;

typedef struct s_process
{
	int				is_dead;
	int				number_philo;
	int				is_n_eat;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	long			init_time;
	t_philo			*philo;
	pthread_t		monitor;
	pthread_mutex_t	print;
	pthread_mutex_t	dead;
	pthread_mutex_t	current_time;
}		t_process;

int		ft_isspace(char c);
int		ft_isnum(int c);
int		ft_issigne(int c);
int		ft_no_number(char *argv);
int		ft_is_time(t_process *process);
int		ft_no_dead(t_process *process);
int		ft_check_time(char *time);
int		ft_check_error(int argc, char **argv);
int		ft_get_current_time(t_process *process);
int		ft_fork_free(t_philo *philo, int a);
int		ft_stop(t_philo *philo);
int		ft_philo_dead(t_philo *philo);
int		ft_all_have_eaten(t_process *process);

long	ft_get_time(t_process *process);
long	ft_atol(const char *nptr);

void	ft_init(t_process	*process, char **argv);
void	ft_init_params(t_process *process, char **argv);
void	ft_init_time(t_process *process);
void	ft_init_mutex(t_process *process);
void	ft_msleep(t_process *process, int ms);
void	ft_start(t_process *process);
void	ft_eat(t_philo *philo);
void	ft_take_fork(t_philo *philo);
void	ft_take_left_fork(t_philo *philo);
void	ft_take_right_fork(t_philo *philo);
void	ft_eating(t_philo *philo);
void	ft_put_fork(t_philo *philo);
void	ft_exit_error(void);
void	ft_is_dead(t_process *process);
void	ft_join_thread(t_process *process);
void	ft_finish(t_process *s_process);

void	*ft_action(void *argv);
void	*ft_monitoring(void *argv);

#endif
