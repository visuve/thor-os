//=======================================================================
// Copyright Baptiste Wicht 2013-2016.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)
//=======================================================================

#ifndef TLIB_NET_H
#define TLIB_NET_H

#include <expected.hpp>

#include "net_constants.hpp"

std::expected<size_t> socket_open(network::socket_domain domain, network::socket_type type, network::socket_protocol protocol);
void socket_close(size_t fd);

#endif
