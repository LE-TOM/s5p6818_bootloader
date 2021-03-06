/*
 * Copyright (C) 2017
 * Author: metro94 <flattiles@gmail.com>
 *
 * Version: v1.0
 * --- Update time: 02/07/2017
 * --- Description: First build; header for Clock Generator
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __CLKGEN_H__
#define __CLKGEN_H__

#include <common.h>
#include <std/math.h>

#include <nexell/nx_clkgen.h>
#include <clksrc.h>

int  get_clkgen_state(struct nx_clkgen_info const);
void set_clkgen_state(struct nx_clkgen_info const, int);
int  get_clkgen_freq(struct nx_clkgen_info const);
void set_clkgen_freq(struct nx_clkgen_info const, int);

#endif
