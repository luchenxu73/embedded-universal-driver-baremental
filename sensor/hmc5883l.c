//
// Created by LuChenxu on 2023/3/8.
//

#include "hmc5883l.h"
#include "i2c_seq.h"

static void hmc5883l_write_byte(uint8_t dev, uint8_t reg, uint8_t dat) {

}

static uint8_t hmc5883l_read_byte(uint8_t dev, uint8_t reg) {
    return 0x00;
}

static void hmc5883l_read_buff(uint8_t dev, uint8_t reg, uint8_t *buf, uint32_t size) {

}

void hmc5883l_init(void) {

    // enable continuous mode, set i2c high speed mode;
    hmc5883l_write_byte(HMC5883L_DEV_ADDR, HMC5883L_REG_MODE, HMC5883L_MODE_CONTINUOUS | HMC5883L_I2C_HS);

    // average for each 2 sample, ODR is 75Hz.
    hmc5883l_write_byte(HMC5883L_DEV_ADDR, HMC5883L_REG_CONF1, HMC5883L_ODR6 | HMC5883L_MA2);



}
