#ifndef __DEVICE_DATA_H__

#define __DEVICE_DATA_H__
#include <stdint.h>
struct device_data {
	const uint8_t *data;
	int32_t size;	
};

extern const struct device_data in_data[];
extern int32_t in_data_size;

const uint8_t *in_data_get(uint32_t *pSize);

#endif
