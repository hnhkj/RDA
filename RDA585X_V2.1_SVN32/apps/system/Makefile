## ----------------------------------------------------------- ##
## Don't touch the next line unless you know what you're doing.##
## ----------------------------------------------------------- ##
include ${SOFT_WORKDIR}/env/compilation/compilevars.mk

# Name of the module
LOCAL_NAME := apps/system

# Compile the sub-modules, except when the "base" must be used as a library.
ifeq ($(findstring apps/gui/packed,${GLOBAL_BINARY_LIBS}),)

# list all modules APIs that are neccessary to compile this module
# some extra dependencies are added for Jade
LOCAL_API_DEPENDS := \
				platform \
				platform/csw \
				platform/csw/usbdevice \
				platform/csw/usbdevice/storage \
				platform/chip/hal \
				platform/chip/defs \
				platform/base/sx \
				platform/edrv/lcdd \
				platform/edrv/pmd \
			    apps/ap_main \
			    apps/gui \
			    apps/system \
			    apps/ap_bluetooth \
			    apps/projects_cfg/${CT_PROJECT} \
			    

# List of submodules which contain code we need to include in the final lib
LOCAL_MODULE_DEPENDS := \


else # GLOBAL_BINARY_LIBS

endif # GLOBAL_BINARY_LIBS

## ------------------------------------- ##
##	List all your sources here           ##
## ------------------------------------- ##
C_SRC := ${notdir ${wildcard src/*.c}} # uncomment to take all .c files


## ------------------------------------- ##
##  Do Not touch below this line         ##
## ------------------------------------- ##
include ${SOFT_WORKDIR}/env/compilation/compilerules.mk
