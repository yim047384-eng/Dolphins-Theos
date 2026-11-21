TARGET := iphone:clang:16.5:14.0
ARCHS = arm64

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = SDKGenerator

SDKGenerator_FILES = \
    src/Main.mm \
    src/Tools.cpp \
    src/Logger.cpp \
    src/NameValidator.cpp \
    src/NamesStore.cpp \
    src/ObjectsStore.cpp \
    src/Package.cpp \
    src/PrintHelper.cpp \
    src/Generator.cpp \
    src/UE4/GenericTypes.cpp \
    src/UE4/FunctionFlags.cpp \
    src/UE4/PropertyFlags.cpp

SDKGenerator_CFLAGS = \
    -fobjc-arc \
    -I$(THEOS_PROJECT_DIR)/src \
    -DIOS_BUILD \
    -w \
    -Wno-error

SDKGenerator_CCFLAGS = \
    -std=c++17 \
    -fobjc-arc \
    -I$(THEOS_PROJECT_DIR)/src \
    -DIOS_BUILD \
    -w \
    -Wno-error

SDKGenerator_FRAMEWORKS = UIKit Foundation

SDKGenerator_FILTER_BUNDLES = \
    com.pubg.imobile

include $(THEOS_MAKE_PATH)/tweak.mk
