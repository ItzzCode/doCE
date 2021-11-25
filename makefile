# ----------------------------
# Makefile Options
# ----------------------------

NAME = doCE
ICON = icon.png
DESCRIPTION = "doCE, a capable(?) document editor. 0.0.0"
COMPRESSED = YES
ARCHIVED = NO

CFLAGS = -Wall -Wextra -Oz
CXXFLAGS = -Wall -Wextra -Oz

# ----------------------------

include $(shell cedev-config --makefile)
