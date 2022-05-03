#Description: Pins Driver; user_visible: True
include_guard(GLOBAL)
message("driver_pins component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/pins_driver.c
)

target_include_directories(${MCUX_SDK_PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/.
)


include(driver_common)