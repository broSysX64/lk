# top level project rules for the armemu-test project
#
LOCAL_DIR := $(GET_LOCAL_DIR)

TARGET := armemu
APPS := tests \
	console

OBJS += \
	$(LOCAL_DIR)/init.o

# extra rules to copy the armemu.conf file to the build dir
$(BUILDDIR)/armemu.conf: $(LOCAL_DIR)/armemu.conf
	@echo copy $< to $@
	$(NOECHO)cp $< $@

EXTRA_BUILDDEPS += $(BUILDDIR)/armemu.conf
GENERATED += $(BUILDDIR)/armemu.conf