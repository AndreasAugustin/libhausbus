/*
 * libhausbus: A RS485 Hausbus library
 *
 * Copyright (c) Ralf Ramsauer, 2016
 *
 * Authors:
 *   Ralf Ramsauer <ralf@binary-kitchen.de>
 *
 * This work is licensed under the terms of the GNU GPL, version 3.  See
 * the LICENSE file in the top-level directory.
 */

#pragma once

#include <cstddef>

#include "data.h"

namespace CRC8 {
    bool verify(const char* data, size_t len, Byte cksum);

    Byte create(const Byte* data, size_t len);
    Byte create(const Data &d);
    Byte create(const Data &d, size_t len);
}
