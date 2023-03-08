//
// Created by LuChenxu on 2023/2/23.
//

#ifndef AIR32F103_GCC_TEMPLATE_SOFT_I2C_H
#define AIR32F103_GCC_TEMPLATE_SOFT_I2C_H

#include <stdint.h>

void i2c_write_byte(uint8_t dev, uint8_t reg, uint8_t dat);

uint8_t i2c_read_byte(uint8_t dev, uint8_t reg);

void i2c_read_buffer(uint8_t dev, uint8_t reg, uint8_t *buf, uint32_t len);

#endif


