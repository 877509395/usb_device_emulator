include $(MAKEFILE_COMMON)

EXEC = template

# source: ./*.c ./src/*.c
SRCS = $(wildcard ./*.c) $(wildcard ./flash/*.c)  $(wildcard ./usart/*.c)
OBJS = $(patsubst %.c,%.o,$(SRCS)) $(STM32_STARTUP_OBJ)

# header: ./inc/*.h
CFLAGS += -I./inc -I./

# private library directory ./lib/
LDFLAGS += -Wl,-Map=$(EXEC).map -L./lib 
LINK_LIB_FLAGS += -lkstm32 --specs=nosys.specs

all: check $(EXEC)

$(EXEC): $(EXEC).bin $(EXEC).hex
$(EXEC).bin $(EXEC).hex: $(EXEC).elf
$(EXEC).elf: $(OBJS)

download: $(EXEC)

clean:
	$(Q) $(RM) -v $(EXEC).elf $(EXEC).bin $(EXEC).hex $(EXEC).map
	$(Q) $(RM) -v $(OBJS) $(STM32_STARTUP_OBJ) *.d */*.d ../startup/*.d

.PHONY: clean distclean download lib all check project

check:
ifeq ($(MAKELEVEL),0)
	$(error "You must make from top directory of workspace")
endif
