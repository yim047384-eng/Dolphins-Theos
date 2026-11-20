TARGET := iphone:clang:latest:14.0
ARCHS = arm64 arm64e

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = SdkDumper

SdkDumper_FILES = src/Tweak.mm \
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
                  includes/SCLAlertView/UIImage+ImageEffects.m \
                  includes/SSZipArchive/SSZipArchive.m \
                  includes/GCDAsyncSocket/GCDAsyncSocket.m \
                  includes/GCDAsyncSocket/GCDAsyncUdpSocket.m

SdkDumper_CFLAGS = -fobjc-arc \
                   -Wno-deprecated-declarations \
                   -Wno-unused-function \
                   -Wno-unused-variable \
                   -Iincludes \
                   -Isrc \
                   -Isrc/Core \
                   -Iincludes/KittyMemory \
                   -Iincludes/SCLAlertView \
                   -Iincludes/SSZipArchive \
                   -Iincludes/GCDAsyncSocket \
                   -Iincludes/fmt \
                   -Iincludes/nlohmann \
                   -Iincludes/hash

SdkDumper_CCFLAGS = -std=c++17 \
                    -Wno-deprecated-declarations \
                    -Wno-unused-function \
                    -Iincludes \
                    -Isrc \
                    -Isrc/Core \
                    -Iincludes/KittyMemory \
                    -Iincludes/fmt \
                    -Iincludes/nlohmann

SdkDumper_FRAMEWORKS = UIKit Foundation Security
SdkDumper_PRIVATE_FRAMEWORKS = 

include $(THEOS_MAKE_PATH)/tweak.mk
