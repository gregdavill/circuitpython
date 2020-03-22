/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Scott Shawcroft for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef MICROPY_INCLUDED_STM32_COMMON_HAL_NVM_BYTEARRAY_H
#define MICROPY_INCLUDED_STM32_COMMON_HAL_NVM_BYTEARRAY_H

#include "py/obj.h"

// STM flash is saved in sectors (not pages), at a minimum size of 16k.
// To limit the RAM usage during writing, we want to set a smaller
// maximum value.
#ifndef NVM_BYTEARRAY_BUFFER_LEN
#define NVM_BYTEARRAY_BUFFER_LEN 512
#endif

typedef struct {
    mp_obj_base_t base;
    uint8_t* start_address;
    uint32_t len;
} nvm_bytearray_obj_t;

#endif // MICROPY_INCLUDED_STM32_COMMON_HAL_NVM_BYTEARRAY_H
