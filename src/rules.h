/*
 *	recite - english text speech synthesizer
 *	Copyright (C) 1993 Peter Miller.
 *	All rights reserved.
 *
 *	This program is free software; you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation; either version 1, or (at your option)
 *	any later version.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with this program; if not, write to the Free Software
 *	Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * MANIFEST: interface definition for phonemes/rules.c
 */

#ifndef RULES_H
#define RULES_H

//#include "main.h"
#include "frame.h"


typedef struct segment_ty segment_ty;

//segment is a phone with duration
struct segment_ty
{
	short	phone;
	short	duration;
};

void segdur (segment_ty *seg, long count); //segment duration
int gen_curve (double Ai, double Af, int time_const, int t); //curve
int translate_phone (int ph, int *offset); //translate

#endif /* RULES_H */
