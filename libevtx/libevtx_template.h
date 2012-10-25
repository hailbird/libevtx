/*
 * Template functions
 *
 * Copyright (c) 2011-2012, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBEVTX_INTERNAL_TEMPLATE_H )
#define _LIBEVTX_INTERNAL_TEMPLATE_H

#include <common.h>
#include <types.h>

#include "libevtx_extern.h"
#include "libevtx_io_handle.h"
#include "libevtx_libbfio.h"
#include "libevtx_libcerror.h"
#include "libevtx_types.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct libevtx_internal_template libevtx_internal_template_t;

struct libevtx_internal_template
{
	/* The flags
	 */
	uint8_t flags;
};

LIBEVTX_EXTERN \
int libevtx_template_initialize(
     libevtx_template_t **template,
     libcerror_error_t **error );

LIBEVTX_EXTERN \
int libevtx_template_free(
     libevtx_template_t **template,
     libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif
