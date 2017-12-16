INCLUDEPATH += $$PWD \
               $$PWD/src
DEPENDPATH += $$PWD

PKG_CONFIG = PKG_CONFIG_PATH=$$PWD/../../sdk/opencv_release/lib/pkgconfig pkg-config
CONFIG  += link_pkgconfig
PKGCONFIG += opencv

SOURCES += \
    $$PWD/src/widget/QCvCamView.cpp \
    $$PWD/src/util/QCvDataUtils.cpp

HEADERS  += \
    $$PWD/src/widget/QCvCamView.h \
    $$PWD/src/util/QCvDataUtils.h