list(APPEND CMAKE_MODULE_PATH
    ${CMAKE_CURRENT_LIST_DIR}/s32k-sdk/devices/${S32K_DEVICE}
    ${CMAKE_CURRENT_LIST_DIR}/s32k-sdk/drivers/src/clock/S32K1xx
)

# function(include_ifdef feature_toggle module)
#   if(${${feature_toggle}})
#     include(${module})
#   endif()
# endfunction()

# function(include_driver_ifdef feature_toggle directory module)
#   if(${${feature_toggle}})
#     list(APPEND CMAKE_MODULE_PATH
#         ${CMAKE_CURRENT_LIST_DIR}/mcux-sdk/drivers/${directory}
#     )
#     zephyr_include_directories(${CMAKE_CURRENT_LIST_DIR}/mcux-sdk/drivers/${directory})
#     include(${module})
#   endif()
# endfunction()

message("Load components for ${S32K_DEVICE}:")

include(driver_clock)

#Include system_xxx file for MXRT platforms
#This can be extended to other SoC series if needed
if (CONFIG_SOC_S32K14)
include(device_system_S32K144)
endif()

zephyr_include_directories(${CMAKE_CURRENT_LIST_DIR}/s32k-sdk/drivers/inc)

#include shared drivers
# include_driver_ifdef(CONFIG_ADC_MCUX_LPADC		lpadc		driver_lpadc)
# include_driver_ifdef(CONFIG_COUNTER_MCUX_CTIMER		ctimer		driver_ctimer)
include_driver_ifdef(CONFIG_CAN_S32K_FLEXCAN    flexcan   driver_flexcan)

#include macro definition
# zephyr_compile_definitions(BOARD_FLASH_SIZE=CONFIG_FLASH_SIZE*1024)

if(CONFIG_BOARD_S32K144EVB)
  set(S32K_BOARD s32k144evb)
endif()

if (${S32K_BOARD} MATCHES "s32k144evb")

  # list(APPEND CMAKE_MODULE_PATH
  #   ${CMAKE_CURRENT_LIST_DIR}/s32k-sdk/boards/${MCUX_BOARD}/flash_config
  # )
  zephyr_include_directories(${CMAKE_CURRENT_LIST_DIR}/s32k-sdk/boards/${S32K_BOARD})

endif()