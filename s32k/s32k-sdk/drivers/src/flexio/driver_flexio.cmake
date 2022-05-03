#Description: ACMP Driver; user_visible: True
include_guard(GLOBAL)
message("driver_edma component is included.")

target_sources(${S32K_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/flexio_common.c
    ${CMAKE_CURRENT_LIST_DIR}/flexio_i2c_driver.c
    ${CMAKE_CURRENT_LIST_DIR}/flexio_i2s_driver.c
    ${CMAKE_CURRENT_LIST_DIR}/flexio_spi_driver.c
    ${CMAKE_CURRENT_LIST_DIR}/flexio_uart_driver.c
)

target_include_directories(${S32K_SDK_PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/.
)


include(driver_common)