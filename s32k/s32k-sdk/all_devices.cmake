CMAKE_MINIMUM_REQUIRED (VERSION 3.10.0)
# OR Logic component
if(${S32K_DEVICE} STREQUAL "S32K144")
    list(APPEND CMAKE_MODULE_PATH
        ${CMAKE_CURRENT_LIST_DIR}/devices/S32K144
    )

    include(all_lib_device_S32K144)

endif()
