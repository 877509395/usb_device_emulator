MAKEFILE_COMMON = $(abspath ./makefile.common)
include $(MAKEFILE_COMMON)

DEVICE ?= STM32F10X_HD
OSC ?= 8000000

WORKSPACE_DIR = $(abspath ./)
#STM32_LIB_DIR = $(abspath ../STM32F10x_StdPeriph_Lib_V3.5.0/)

STM32_LIB_SRCS += $(wildcard $(WORKSPACE_DIR)/../STM32_USB-FS-Device_Driver/src/*.c)
#STM32_LIB_SRCS += $(wildcard $(WORKSPACE_DIR)/../User/usart/*.c)
#STM32_LIB_SRCS += $(wildcard $(WORKSPACE_DIR)/../User/flash/*.c)
STM32_LIB_SRCS += $(wildcard $(WORKSPACE_DIR)/../User/led/*.c)
STM32_LIB_SRCS += $(wildcard $(WORKSPACE_DIR)/../Mass_Storage/src/*.c)
STM32_LIB_SRCS += $(wildcard $(WORKSPACE_DIR)/../Libraries/FWlib/src/*.c)
STM32_LIB_SRCS += $(wildcard $(WORKSPACE_DIR)/../CMSIS/CM3/CoreSupport/*.c)
STM32_LIB_SRCS += $(wildcard $(WORKSPACE_DIR)/../CMSIS/CM3/DeviceSupport/ST/STM32F10x/*.c)

STM32_LIB_OBJS = $(patsubst %.c,%.o,$(STM32_LIB_SRCS))
STM32_LIB_DEPS = $(patsubst %.c,%.d,$(STM32_LIB_SRCS))

STM32_LIB_INCS += $(WORKSPACE_DIR)/../STM32_USB-FS-Device_Driver/inc
STM32_LIB_INCS += $(WORKSPACE_DIR)/../Libraries/FWlib/inc
STM32_LIB_INCS += $(WORKSPACE_DIR)/../FWlib/inc
STM32_LIB_INCS += $(WORKSPACE_DIR)/../Libraries/CMSIS
STM32_LIB_INCS += $(WORKSPACE_DIR)/../Mass_Storage/inc
STM32_LIB_INCS += $(WORKSPACE_DIR)/../User

STM32_LIB_INCS += $(WORKSPACE_DIR)/src/$(PROJECT)/inc

STM32_LIB_NAME = kstm32
STM32_LIB_FILE = $(WORKSPACE_DIR)/lib/lib$(STM32_LIB_NAME).a

STM32_STARTUP_OBJ = $(patsubst %.S,%.o,$(wildcard $(WORKSPACE_DIR)/../startup/*.S))

CFLAGS += -g -D$(DEVICE) -DHSE_VALUE=$(OSC) -DUSE_STDPERIPH_DRIVER -D__EVAL #-DUSE_STM3210C_EVAL
CFLAGS += $(addprefix -I,$(STM32_LIB_INCS)) -I$(WORKSPACE_DIR)/inc

LDFLAGS += -T"$(WORKSPACE_DIR)/stm32_flash.ld"
LDFLAGS += -L$(WORKSPACE_DIR)/lib

LINK_LIB_FLAGS = #-l$(STM32_LIB_NAME)

export

all: project

check:
#ifndef PROJECT
#	$(error "Usage: make PROJECT=<app>")
#endif

project: check lib
	$(Q) $(MAKE) -C "$(WORKSPACE_DIR)/../User"

lib: $(STM32_LIB_FILE)

$(STM32_LIB_FILE): $(STM32_LIB_OBJS)
	mkdir -p lib
	$(AR) $(ARFLAG) $(STM32_LIB_FILE) $(STM32_LIB_OBJS)

distclean: 
	$(Q) $(RM) -v $(STM32_LIB_OBJS)
	$(Q) $(RM) -v $(STM32_LIB_FILE)

clean: check distclean
	$(Q) $(MAKE) -C "$(WORKSPACE_DIR)/../User" $@
	$(Q) rm -f $(STM32_LIB_DEPS)

download: check
	$(Q) $(MAKE) -C "$(WORKSPACE_DIR)/src/$(PROJECT)" $@


.PHONY: clean distclean download lib all check project
