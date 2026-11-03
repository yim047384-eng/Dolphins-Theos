ARCHS = arm64

DEBUG = 0
FINALPACKAGE = 1
FOR_RELEASE = 1
GO_EASY_ON_ME = 1

include $(THEOS)/makefiles/common.mk

LIBRARY_NAME = Dolphins

Dolphins_FRAMEWORKS = IOKit UIKit Foundation Security QuartzCore CoreGraphics CoreText AVFoundation Accelerate GLKit SystemConfiguration GameController
Dolphins_CCFLAGS = -w -std=gnu++14 -fno-rtti -fno-exceptions -DNDEBUG -Wno-module-import-in-extern-c
Dolphins_CFLAGS = -w -fobjc-arc -Wno-deprecated-declarations -Wno-unused-variable -Wno-unused-value

Dolphins_FILES = ImGuiDrawView.mm $(wildcard SDK/*.cpp) $(wildcard IMGUI/*.mm) $(wildcard MenuLoad/*.mm) $(wildcard AEScrypt/*.m)
Dolphins_LIBRARIES += substrate

include $(THEOS_MAKE_PATH)/library.mk
