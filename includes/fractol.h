/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaqrabaw <eaqrabaw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 04:51:35 by eaqrabaw          #+#    #+#             */
/*   Updated: 2025/01/11 00:59:12 by eaqrabaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# define WIDTH 1280
# define HEIGHT 720

# include <mlx.h>
# include <math.h>
#include "includes/libft/headers/libft.h"

typedef struct  s_fract
{
	void 	*mlx;
	
}				t_fract;

void			Mandelbrot();

void			Julia();

void			Snowflake();

void			ft_perror(const char *msg, int errno);
#endif