/*
 * Copyright (c) 2017, NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <drivers/sensor.h>
#include <drivers/i2c.h>
#include <drivers/gpio.h>
#define HRS3300_I2C_ADDRESS  0x44

//int hrs3300_attr_set(struct device *dev, enum sensor_channel chan, enum sensor_attribute attr, const struct sensor_value *val);


struct hrs3300_config {
};

struct hrs3300_data {
	struct device *i2c;
	u32_t raw[2];
};
