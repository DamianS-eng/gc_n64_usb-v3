/*	gc_n64_usb : Gamecube or N64 controller to USB adapter firmware
	Copyright (C) 2007-2015  Raphael Assenat <raph@raphnet.net>

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifdef LIBDRAGON
#include <libdragon.h>

void _delay_us(unsigned long us)
{
	wait_ms(us/1000);
}

void _delay_s(unsigned long s)
{
	wait_ms(s*1000);
}

#else
#include <unistd.h>

void _delay_us(unsigned long us)
{
	usleep(us);
}

void _delay_s(unsigned long s)
{
	sleep(s);
}

#endif
