# Universal Makefile — Jailbreak (Deb) + Sideloadly (Dylib)

DEBUG = 0
FINALPACKAGE = 1
FOR_RELEASE = 1
THEOS_PACKAGE_SCHEME = rootless

TARGET = iphone:clang:latest:14.0
ARCHS = arm64

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = cheatbotowner

cheatbotowner_FILES = $(shell find CheatbotEngine -name '*.cpp' -o -name '*.mm' -o -name '*.m')

# Optimization + Warnings ignore
cheatbotowner_CFLAGS = -fobjc-arc -w -Wno-error -std=c++17 -O3 \
                       -ICheatbotEngine \
                       -ICheatbotEngine/SDK \
                       -ICheatbotEngine/imgui \
                       -ICheatbotEngine/imgui/Metal

cheatbotowner_FRAMEWORKS = UIKit Foundation Metal MetalKit QuartzCore AVFoundation CoreFoundation WebKit SystemConfiguration AdSupport IOKit Security MediaPlayer Accelerate

cheatbotowner_LIBRARIES = c++
cheatbotowner_LDFLAGS = -F. -framework JRMemory
cheatbotowner_STRIP = 1

include $(THEOS_MAKE_PATH)/tweak.mk