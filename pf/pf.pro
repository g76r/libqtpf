# Copyright 2012 Hallowyn and others.
# See the NOTICE file distributed with this work for additional information
# regarding copyright ownership.  The ASF licenses this file to you under
# the Apache License, Version 2.0 (the "License"); you may not use this
# file except in compliance with the License. You may obtain a copy of the
# License at http://www.apache.org/licenses/LICENSE-2.0
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
# WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
# License for the specific language governing permissions and limitations
# under the License.

QT -= gui

TARGET = qtpf
TEMPLATE = lib

DEFINES += LIBQTPF_LIBRARY

QMAKE_CXXFLAGS += -Wextra
unix:debug:QMAKE_CXXFLAGS += -ggdb
unix {
  OBJECTS_DIR = ../build-pf-unix/obj
  RCC_DIR = ../build-pf-unix/rcc
  MOC_DIR = ../build-pf-unix/moc
}

SOURCES += \
    pfutils.cpp \
    pfparser.cpp \
    pfoptions.cpp \
    pfnode.cpp \
    pfhandler.cpp \
    pfdomhandler.cpp \
    pfcontent.cpp \
    pfarray.cpp

HEADERS +=\
        libqtpf_global.h \
    pfutils.h \
    pfparser.h \
    pfoptions.h \
    pfnode.h \
    pfinternals.h \
    pfhandler.h \
    pfdomhandler.h \
    pfcontent.h \
    pfarray.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
