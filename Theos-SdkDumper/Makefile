THEOS_DEVICE_IP ?= 127.0.0.1
THEOS_DEVICE_PORT ?= 2222

TARGET := iphone:clang:16.5:12.0

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = AutoDumperSdk

# ── Source files ──────────────────────────────────────────────────────────────
AutoDumperSdk_FILES = \
    src/Tweak.mm \
    src/AlertUtils.mm \
    src/DumpTransfer.mm \
    src/DumpTransferUI.mm \
    src/RSA.m \
    src/CheatBotuuid.m \
    src/Core/Dumper.cpp \
    src/Core/wrappers.cpp \
    src/Core/memory.cpp \
    includes/KittyMemory/KittyMemory.cpp \
    includes/KittyMemory/KittyScanner.cpp \
    includes/KittyMemory/KittyArm64.cpp \
    includes/KittyMemory/KittyUtils.cpp \
    includes/KittyMemory/MemoryBackup.cpp \
    includes/KittyMemory/MemoryPatch.cpp \
    includes/KittyMemory/writeData.cpp \
    includes/GCDAsyncSocket/GCDAsyncSocket.m \
    includes/GCDAsyncSocket/GCDAsyncUdpSocket.m \
    includes/SCLAlertView/SCLAlertView.m \
    includes/SCLAlertView/SCLAlertViewResponder.m \
    includes/SCLAlertView/SCLAlertViewStyleKit.m \
    includes/SCLAlertView/SCLButton.m \
    includes/SCLAlertView/SCLSwitchView.m \
    includes/SCLAlertView/SCLTextView.m \
    includes/SCLAlertView/SCLTimerDisplay.m \
    includes/SCLAlertView/UIImage+ImageEffects.m \
    includes/SSZipArchive/SSZipArchive.m

# ── Compiler flags ────────────────────────────────────────────────────────────
AutoDumperSdk_CFLAGS = \
    -fobjc-arc \
    -I$(THEOS_PROJECT_DIR)/src \
    -I$(THEOS_PROJECT_DIR)/includes \
    -I$(THEOS_PROJECT_DIR)/includes/KittyMemory \
    -I$(THEOS_PROJECT_DIR)/includes/GCDAsyncSocket \
    -I$(THEOS_PROJECT_DIR)/includes/SCLAlertView \
    -I$(THEOS_PROJECT_DIR)/includes/SSZipArchive \
    -I$(THEOS_PROJECT_DIR)/includes/fmt \
    -I$(THEOS_PROJECT_DIR)/includes/nlohmann \
    -DTHEOS_BUILD

AutoDumperSdk_CCFLAGS = \
    -std=c++17 \
    -fobjc-arc \
    -I$(THEOS_PROJECT_DIR)/src \
    -I$(THEOS_PROJECT_DIR)/includes \
    -I$(THEOS_PROJECT_DIR)/includes/KittyMemory \
    -I$(THEOS_PROJECT_DIR)/includes/fmt \
    -I$(THEOS_PROJECT_DIR)/includes/nlohmann \
    -DTHEOS_BUILD

# ── Frameworks & libs ─────────────────────────────────────────────────────────
AutoDumperSdk_FRAMEWORKS = \
    UIKit \
    Foundation \
    Security \
    CommonCrypto \
    CFNetwork \
    SystemConfiguration \
    CoreGraphics \
    QuartzCore

AutoDumperSdk_LIBRARIES = z

# ── Filter — inject into PUBGM only ──────────────────────────────────────────
AutoDumperSdk_FILTER_BUNDLES = \
    com.tencent.ig \
    com.rekoo.pubgm \
    com.pubg.imobile \
    com.pubg.krmobile \
    com.vng.pubgmobile \
    vn.vng.pubgmobile

include $(THEOS_MAKE_PATH)/tweak.mk
