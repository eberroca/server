/* Copyright (c) 2021, MariaDB

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1335  USA */

#include <my_global.h>
#include <dlfcn.h>
#include <log.h>
#include <mysqld.h>
#include <compression/lzma.h>
#include <compression/lzo/lzo1x.h>

#define COMPRESSION_LZMA    (1ULL << 0)
#define COMPRESSION_LZO     (1ULL << 1)

bool init_lzma(struct compression_service_lzma_st *);
bool init_lzo(struct compression_service_lzo_st *);
