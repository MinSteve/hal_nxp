#Description: Flash Driver; user_visible: True
include_guard(GLOBAL)
message("driver_flash component is included.")

target_sources(${S32K_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/flash_driver.c
)

target_include_directories(${S32K_SDK_PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/.
)


include(driver_common)