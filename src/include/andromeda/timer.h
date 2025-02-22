/*
 *  Andromeda
 *  Copyright (C) 2011  Bart Kuivenhoven
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __KERN_TIMER_H
#define __KERN_TIMER_H

#define _TIME_FREQ_MAX 0xFFFFFFFF
#define _TIME_FREQ_MIN 0x0

#ifdef __cplusplus
extern "C" {
#endif

void setupTimer(unsigned int freq, void* scheduler, void* hwInit);
void setTimerFrequency(int);
extern struct __kern_timer *timer;

#ifdef __cplusplus
}
#endif

#endif
