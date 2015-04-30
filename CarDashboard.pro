PROJECT = CarDashboard

QT          += qml quick core widgets

SOURCES += main.cpp

INCLUDEPATH += $$PWD

RESOURCES += qml_resources.qrc

OTHER_FILES += \
    qml/main.qml \
    qml/RoundGauge.qml \
    qml/GraphGauge.qml \
    qml/needle.png
