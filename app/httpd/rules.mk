LOCAL_DIR := $(GET_LOCAL_DIR)

DEFINES += \
	WITH_HTTPD=1

OBJS += \
	$(LOCAL_DIR)/main.o