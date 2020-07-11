/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2016 Damien P. George
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

#include "common-hal/pulseio/PulseOut.h"

#include <stdint.h>


#include "mpconfigport.h"
#include "py/gc.h"
#include "py/runtime.h"
#include "shared-bindings/pulseio/PulseOut.h"
#include "supervisor/shared/translate.h"


void pulse_finish(void) {

}

void pulseout_interrupt_handler(uint8_t index) {
}

void pulseout_reset() {

}

void common_hal_pulseio_pulseout_construct(pulseio_pulseout_obj_t* self,
                                            const pulseio_pwmout_obj_t* carrier) {

}

bool common_hal_pulseio_pulseout_deinited(pulseio_pulseout_obj_t* self) {
    return self->pin == NO_PIN;
}

void common_hal_pulseio_pulseout_deinit(pulseio_pulseout_obj_t* self) {
    if (common_hal_pulseio_pulseout_deinited(self)) {
        return;
    }

    self->pin = NO_PIN;
}

void common_hal_pulseio_pulseout_send(pulseio_pulseout_obj_t* self, uint16_t* pulses, uint16_t length) {
 
}
