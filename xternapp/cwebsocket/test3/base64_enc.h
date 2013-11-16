/* base64_enc.h */
/*
 *   This file is part of the AVR-Crypto-Lib.
 *   Copyright (C) 2006, 2007, 2008  Daniel Otte (daniel.otte@rub.de)
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef BASE64_ENC_H_
#define BASE64_ENC_H_

#ifdef	__cplusplus
extern "C" {
#endif

#include <stdint.h>

void base64enc(char* dest, const void* src, uint16_t length);

#ifdef	__cplusplus
}
#endif

#endif /*BASE64_ENC_H_*/
