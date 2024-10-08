/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:29:53 by cpuiu             #+#    #+#             */
/*   Updated: 2024/09/04 23:36:01 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

static void	extra_move_init_helper(t_game *game)
{
	game->render_data.move_ahed = 0;
	game->render_data.move_back = 0;
	game->render_data.move_left = 0;
	game->render_data.move_right = 0;
	game->render_data.right_rotet = 0;
	game->render_data.left_rot = 0;
	game->ray.pos_x = (double)game->pos_xp + 0.5;
	game->ray.pos_y = (double)game->pos_yp + 0.5;
	game->ray.dir_x = 0;
	game->ray.dir_y = 0;
	game->ray.plan_x = 0;
	game->ray.plan_y = 0;
}

void	init_pos_move(t_game *game)
{
	extra_move_init_helper(game);
	if (game->start_dir == 'N')
	{
		game->ray.dir_x = -1;
		game->ray.plan_y = 0.5;
	}
	else if (game->start_dir == 'S')
	{
		game->ray.dir_x = 1;
		game->ray.plan_y = -0.5;
	}
	else if (game->start_dir == 'E')
	{
		game->ray.dir_y = 1;
		game->ray.plan_x = 0.5;
	}
	else if (game->start_dir == 'W')
	{
		game->ray.dir_y = -1;
		game->ray.plan_x = -0.5;
	}
}
