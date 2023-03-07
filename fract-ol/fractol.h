/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallell <agallell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:50:15 by agallell          #+#    #+#             */
/*   Updated: 2023/03/07 17:45:19 by agallell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <math.h>
# include "/Users/agallell/Desktop/fract-ol/libmlx/mlx.h"
# include "libft.h"
# include "keycode.h"
# include "colors.h"

# define TITLE		"Fractol"
# define HEIGHT		800
# define WIDTH		1200
# define HELP_COLOR	0xffffff

enum	e_fractal{MANDELBROT, JULIA, PHOENIX, BARNSLEY, FLAME, FLOWERBROT};

typedef struct		s_cnb
{
	double			real;
	double			imag;
}					t_cnb;

typedef struct		s_index
{
	int				x;
	int				y;
}					t_index;

/*
** colored 2d vector
*/

typedef	struct		s_cv
{
	double			x;
	double			y;
	unsigned		color;
}					t_cv;

typedef struct		s_image
{
	void			*mlx;
	void			*win;
	int				*image;
	char			*data;
	int				bpp;
	int				sizeline;
	int				endian;
}					t_image;

typedef struct		s_3d
{
	t_image			img;
	enum e_fractal	fractal;
	t_index			i;
	int				max;

	t_i				min;
	double			zoom;
	t_i				offset;
	int				iter_coef;
	t_cnb			c_point;
	t_cnb			c;
	int				fern_i;
	int				julia_static;
	t_cnb			julia;
	int				color;
	int				menu;
	short			rng;
	short			a;
}					t_3d;


#endif