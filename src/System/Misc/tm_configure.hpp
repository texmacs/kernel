
/******************************************************************************
* MODULE     : tm_configure.gen.in or tm_configure.gen.h
* DESCRIPTION: Defines system dependent macros (using autoconf)
* COPYRIGHT  : (C) 1999  Joris van der Hoeven
*******************************************************************************
* This software falls under the GNU general public license version 3 or later.
* It comes WITHOUT ANY WARRANTY WHATSOEVER. For details, see the file LICENSE
* in the root directory or <http://www.gnu.org/licenses/gpl-3.0.html>.
******************************************************************************/

#ifndef TM_CONFIGURE_H
#define TM_CONFIGURE_H

#define STD_SETENV

#define TEXMACS_VERSION "1.99.8"
#define TEXMACS_SOURCES ""
#define OS_GNU_LINUX
#define WORD_LENGTH 8
#define WORD_LENGTH_INC 7
#define WORD_MASK 0xfffffffffffffff8
#define MAX_FAST 264 // WORD_LENGTH more than power of 2

#define HOST_OS "linux-gnu"
#define HOST_VENDOR "pc"
#define HOST_CPU "x86_64"
#define BUILD_USER "rendong"
#define BUILD_DATE "2018-12-23T21:14:12"

#define TM_DEVEL "TeXmacs-1.99.8"
#define TM_DEVEL_RELEASE "TeXmacs-1.99.8-1"
#define TM_STABLE "TeXmacs-1.99.8"
#define TM_STABLE_RELEASE "TeXmacs-1.99.8-1"

#endif // defined TM_CONFIGURE_H
