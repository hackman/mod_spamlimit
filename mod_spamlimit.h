/********************************************************************
         Copyright (c) 2011-2012, 1H Ltd.
         Author: Marian Marinov <mm@1h.com>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

*********************************************************************/

#ifndef MOD_SPAMLIMIT_H
#define MOD_SPAMLIMIT_H

#include <httpd.h>
#include <http_log.h>
#include <http_config.h>
#include <http_request.h>
#include <http_protocol.h>
#include <util_filter.h>
#include <apr_strings.h>
#include <apr_optional.h>

APR_DECLARE_OPTIONAL_FN(apr_table_t*, form_data, (request_rec*));
APR_DECLARE_OPTIONAL_FN(const char*, form_value, (request_rec*, const char*));

#endif

