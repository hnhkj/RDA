## ----------------------------------------------------------- ##
## Don't touch the next line unless you know what you're doing.##
## ----------------------------------------------------------- ##
include ${SOFT_WORKDIR}/env/compilation/compilevars.mk

# Name of the module
LOCAL_NAME := apps/ap_bluetooth

# Compile the sub-modules, except when the "base" must be used as a library.
ifeq ($(findstring apps/ap_bluetooth,${GLOBAL_BINARY_LIBS}),)

# list all modules APIs that are neccessary to compile this module
# some extra dependencies are added for Jade
LOCAL_API_DEPENDS := \
            platform \
            platform/csw \
            platform/mdi \
            platform/edrv/lcdd \
            platform/edrv/nfcd \
            platform/edrv/btd/rdaStack \
            platform/edrv/btd/rdaStack/stack \
            apps/gui \
            apps/ap_gui \
            apps/ap_main \
            apps/system \
            apps/ap_bluetooth
			    

# List of submodules which contain code we need to include in the final lib
LOCAL_MODULE_DEPENDS := \


else # GLOBAL_BINARY_LIBS

endif # GLOBAL_BINARY_LIBS

## ------------------------------------- ##
##	List all your sources here           ##
## ------------------------------------- ##
include src/make.srcs

## ------------------------------------- ##
##  Do Not touch below this line         ##
## ------------------------------------- ##
include ${SOFT_WORKDIR}/env/compilation/compilerules.mk
