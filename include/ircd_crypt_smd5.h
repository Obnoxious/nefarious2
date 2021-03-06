/*
 * IRC - Internet Relay Chat, include/ircd_crypt_smd5.h
 * Copyright (C) 2002 hikari
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 1, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */
/** @file
 * @brief Declarations for salted MD5 password crypting.
 * @version $Id: ircd_crypt_smd5.h 1231 2004-10-05 04:21:37Z entrope $
 */
#ifndef INCLUDED_ircd_crypt_smd5_h
#define INCLUDED_ircd_crypt_smd5_h

extern const char* ircd_crypt_smd5(const char* key, const char* salt);
extern void ircd_register_crypt_smd5(void);

#endif /* INCLUDED_ircd_crypt_smd5_h */

