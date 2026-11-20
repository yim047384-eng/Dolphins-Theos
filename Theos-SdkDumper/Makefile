TARGET := iphone:clang:latest:14.0
ARCHS = arm64

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = SdkDumper
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
               includes/SCLAlertView/UIImage+ImageEffects.m \
               includes/SSZipArchive/SSZipArchive.m \
               includes/SSZipArchive/minizip/mz_compat.c \
               includes/SSZipArchive/minizip/mz_crypt.c \
               includes/SSZipArchive/minizip/mz_crypt_apple.c \
               includes/SSZipArchive/minizip/mz_os.c \
               includes/SSZipArchive/minizip/mz_os_posix.c \
               includes/SSZipArchive/minizip/mz_strm.c \
               includes/SSZipArchive/minizip/mz_strm_buf.c \
               includes/SSZipArchive/minizip/mz_strm_mem.c \
               includes/SSZipArchive/minizip/mz_strm_os_posix.c \
               includes/SSZipArchive/minizip/mz_strm_pkcrypt.c \
               includes/SSZipArchive/minizip/mz_strm_split.c \
               includes/SSZipArchive/minizip/mz_strm_wzaes.c \
               includes/SSZipArchive/minizip/mz_strm_zlib.c \
               includes/SSZipArchive/minizip/mz_zip.c \
               includes/SSZipArchive/minizip/mz_zip_rw.c \
               includes/GCDAsyncSocket/GCDAsyncSocket.m \
               includes/GCDAsyncSocket/GCDAsyncUdpSocket.m

SdkDumper_FILES = $(COMMON_FILES)
SdkDumperLib_FILES = $(COMMON_FILES)

COMMON_FLAGS = -fobjc-arc \
               -Wno-deprecated-declarations \
               -Wno-error \
               -Wno-objc-literal-compare \
               -Wno-format-security \
               -Wno-unused-function \
               -Wno-unused-variable \
               -Wno-macro-redefined \
               -DHAVE_WZAES \
               -DHAVE_COMMONCRYPTO \
               -DFMT_HEADER_ONLY \
               -Iincludes \
               -Isrc \
               -Isrc/Core \
               -Iincludes/KittyMemory \
               -Iincludes/SCLAlertView \
               -Iincludes/SSZipArchive \
               -Iincludes/SSZipArchive/minizip \
               -Iincludes/GCDAsyncSocket \
               -Iincludes/fmt \
               -Iincludes/nlohmann \
               -Iincludes/hash

SdkDumper_CFLAGS = $(COMMON_FLAGS)
SdkDumper_CCFLAGS = -std=c++17 $(COMMON_FLAGS)
SdkDumper_FRAMEWORKS = UIKit Foundation Security
SdkDumper_LDFLAGS = -lc++ -lz

SdkDumperLib_CFLAGS = $(COMMON_FLAGS)
SdkDumperLib_CCFLAGS = -std=c++17 $(COMMON_FLAGS)
SdkDumperLib_FRAMEWORKS = UIKit Foundation Security
SdkDumperLib_LDFLAGS = -lc++ -lz

include $(THEOS_MAKE_PATH)/tweak.mk
include $(THEOS_MAKE_PATH)/library.mk
