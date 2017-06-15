#####################################################################
# simple AVR library
#####################################################################

AUX_SOURCE_DIRECTORY(. SOURCE_FILES)

add_avr_library(
        zebro-avr-tools
        ${SOURCE_FILES}
)

