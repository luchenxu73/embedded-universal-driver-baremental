//
// Created by LuChenxu on 2023/3/8.
//

#ifndef HMC5883L_H
#define HMC5883L_H

#define HMC5883L_DEV_ADDR  (0x1e<<1)

// Reg list
#define HMC5883L_REG_CONF1  (0x00)
#define HMC5883L_REG_CONF2  (0x01)
#define HMC5883L_REG_MODE  (0x02)
#define HMC5883L_REG_X_MSB (0x03)
#define HMC5883L_REG_SR (0x09)

// i2c high speed
#define HMC5883L_I2C_HS (0x01<<7)

// mode select
#define HMC5883L_MODE_CONTINUOUS (0x00)
#define HMC5883L_MODE_SINGLE (0x01)
#define HMC5883L_MODE_IDLE (0x02)

// average number
#define HMC5883L_MA1 (0x00<<5)
#define HMC5883L_MA2 (0x01<<5)
#define HMC5883L_MA4 (0x02<<5)
#define HMC5883L_MA8 (0x03<<5)


// data output rate
#define HMC5883L_ODR0 (0x00<<2)
#define HMC5883L_ODR1 (0x01<<2)
#define HMC5883L_ODR2 (0x02<<2)
#define HMC5883L_ODR3 (0x03<<2)
#define HMC5883L_ODR4 (0x04<<2)
#define HMC5883L_ODR5 (0x05<<2)
#define HMC5883L_ODR6 (0x06<<2)

// measurement bias mode
#define HMC5883L_MS0 (0x00)
#define HMC5883L_MS1 (0x01)
#define HMC5883L_MS2 (0x02)

// gain conf
#define HMC5883L_GN0 (0x00<<5)
#define HMC5883L_GN1 (0x01<<5)
#define HMC5883L_GN2 (0x02<<5)
#define HMC5883L_GN3 (0x03<<5)
#define HMC5883L_GN4 (0x04<<5)
#define HMC5883L_GN5 (0x05<<5)
#define HMC5883L_GN6 (0x06<<5)
#define HMC5883L_GN7 (0x07<<5)

#define HMC5883L_LOCK (0x01<<1)
#define HMC5883L_RDY (0x01)


void hmc5883l_init(void);

#endif //HMC5883L_H
