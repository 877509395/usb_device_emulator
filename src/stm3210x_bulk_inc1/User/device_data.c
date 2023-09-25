#include <stdlib.h>
#include <stdint.h>

#include "device_data.h"
const uint8_t * in_data_get(uint32_t *pSize) {
	static int i = 0;
	const uint8_t *retval;

	*pSize = in_data[i].size;
	retval = in_data[i].data;
	i = (i+1)%in_data_size;

	return retval;
}
