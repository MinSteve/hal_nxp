#Description: Clock Driver; user_visible: True
include_guard(GLOBAL)
message("driver_clock component is included.")

target_sources(${S32K_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/clock_S32K1xx.c
)

target_include_directories(${S32K_SDK_PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/.
)


include(driver_common)