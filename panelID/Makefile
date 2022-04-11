# If not stated otherwise in this file or this component's LICENSE file the
# following copyright and licenses apply:
#
# Copyright 2022 Sky UK
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

RM          := rm -rf
CFLAGS      := -g -fPIC -D_REENTRANT -Wall

INCLUDE     :=  -I.\
                -I$(PKG_CONFIG_SYSROOT_DIR)/usr/include/ \
                -I$(PKG_CONFIG_SYSROOT_DIR)/usr/include/rdk/tv-hal/

CFLAGS      += $(INCLUDE)

OBJS        := $(patsubst %.c,%.o,$(wildcard *.c))
EXECUTABLE  := panelIDConfig


all:$(EXECUTABLE)
	@echo "Build Finished...."

%.o: %.c
	@echo "Building $@ ...."
	$(CXX) -c $<  $(CFLAGS) -o $@

$(EXECUTABLE): $(OBJS)
	@echo "Creating Final Executable Testing ..$@"
	$(CXX) $(CFLAGS) $(LDFLAGS) $^ -o $@

clean:
	@echo "Cleaning the directory..."
	@$(RM) $(EXECUTABLE) $(OBJS)
