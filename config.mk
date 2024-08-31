# Default variables

GAME_VERSION  ?= FIRERED
GAME_REVISION ?= 0
GAME_LANGUAGE ?= ENGLISH
MODERN        ?= 0
COMPARE       ?= 0

# For gbafix
MAKER_CODE  := 01

# Version
ifeq ($(GAME_VERSION),FIRERED)
TITLE       := POKEMON MIND
GAME_CODE   := BPM
BUILD_NAME  := mindpink
else
ifeq ($(GAME_VERSION),LEAFGREEN)
TITLE       := POKEMON ICE
GAME_CODE   := BPF
BUILD_NAME  := iceturquoise
else
$(error unknown version $(GAME_VERSION))
endif
endif

# Revision
ifeq ($(GAME_REVISION),0)
BUILD_NAME  := $(BUILD_NAME)
else
ifeq ($(GAME_REVISION),1)
BUILD_NAME  := $(BUILD_NAME)_rev1
else
$(error unknown revision $(GAME_REVISION))
endif
endif

# Language
ifeq ($(GAME_LANGUAGE),ENGLISH)
BUILD_NAME  := $(BUILD_NAME)
GAME_CODE   := $(GAME_CODE)E
else
$(error unknown language $(GAME_LANGUAGE))
endif

# Modern GCC
ifeq ($(MODERN), 0)
  BUILD_NAME := $(BUILD_NAME)
else
  BUILD_NAME := $(BUILD_NAME)_modern
endif
