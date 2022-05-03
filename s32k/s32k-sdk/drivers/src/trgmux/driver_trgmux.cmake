#Description: TrgMux Driver; user_visible: True
include_guard(GLOBAL)
message("driver_trgmux component is included.")

target_sources(${S32K_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/trgmux_driver.c
)

target_include_directories(${S32K_SDK_PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/.
)


include(driver_common)