TARGET := iphone:clang:latest:14.0
ARCHS = arm64

include $(THEOS)/makefiles/common.mk

# For .deb (jailbreak)
TWEAK_NAME = SdkDumper

# For .dylib (non-jailbreak)
LIBRARY_NAME = SdkDumperLib

COMMON_FILES = src/Tweak.mm \
               src/AlertUtils.mm \
               src/DumpTransfer.mm \
               src/DumpTransferUI.mm \
               src/CheatBotuuid.m \
               src/RSA.m \
               src/Core/Dumper.cpp \
               src/Core/memory.cpp \
               src/Core/wrappers.cpp \
               includes/KittyMemory/KittyMemory.cpp \
               includes/KittyMemory/KittyScanner.cpp \
               includes/KittyMemory/KittyUtils.cpp \
               includes/KittyMemory/MemoryBackup.cpp \
               includes/KittyMemory/MemoryPatch.cpp \
               includes/KittyMemory/writeData.cpp \
               includes/KittyMemory/KittyArm64.cpp \
               includes/SCLAlertView/SCLAlertView.m \
               includes/SCLAlertView/SCLButton.m \
               includes/SCLAlertView/SCLTextView.m \
               includes/SCLAlertView/SCLSwitchView.m \
               includes/SCLAlertView/SCLTimerDisplay.m \
               includes/SCLAlertView/SCLAlertViewStyleKit.m \
               includes/SCLAlertView/SCLAlertViewResponder.m \
               includes/SCLAlertView/UIImage+ImageEffects.m

SdkDumper_FILES = $(COMMON_FILES)
SdkDumperLib_FILES = $(COMMON_FILES)

COMMON_FLAGS = -fobjc-arc -Wno-deprecated-declarations \
               -Iincludes -Isrc -Isrc/Core \
               -Iincludes/KittyMemory -Iincludes/SCLAlertView \
               -Iincludes/fmt -Iincludes/nlohmann

SdkDumper_CFLAGS = $(COMMON_FLAGS)
SdkDumper_CCFLAGS = -std=c++17 $(COMMON_FLAGS)
SdkDumper_FRAMEWORKS = UIKit Foundation Security

SdkDumperLib_CFLAGS = $(COMMON_FLAGS)
SdkDumperLib_CCFLAGS = -std=c++17 $(COMMON_FLAGS)
SdkDumperLib_FRAMEWORKS = UIKit Foundation Security

include $(THEOS_MAKE_PATH)/tweak.mk
include $(THEOS_MAKE_PATH)/library.mk
