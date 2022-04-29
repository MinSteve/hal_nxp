set(S32K_SDK_PROJECT_NAME ${ZEPHYR_CURRENT_LIBRARY})
# Translate the SoC name and part number into the mcux device and cpu
# name respectively.
string(TOUPPER ${CONFIG_SOC} S32K_DEVICE)

if("${S32K_DEVICE}" STREQUAL "S32K144")
  set(MCUX_CPU CPU_${CONFIG_SOC_PART_NUMBER})
  set(MCUX_DEVICE S32K144)
endif()

zephyr_include_directories(s32k-sdk/devices/${MCUX_DEVICE})
#zephyr_include_directories(mcux-sdk/devices/${MCUX_DEVICE}/drivers)

#include device specific drivers
if (${MCUX_DEVICE} MATCHES "MIMXRT1[0-9][0-9][0-9]")
  zephyr_include_directories(mcux-sdk/devices/${MCUX_DEVICE}/xip)
endif()

# The mcux uses the cpu name to expose SoC-specific features of a
# given peripheral. For example, the UART peripheral may be
# instantiated with/without a hardware FIFO, and the size of that FIFO
# may be different for each instance in a given SoC. See
# fsl_device_registers.h and ${MCUX_DEVICE}_features.h
zephyr_compile_definitions(${MCUX_CPU})

# Build mcux device-specific objects. Although it is not normal
# practice, drilling down like this avoids the need for repetitive
# build scripts for every mcux device.
zephyr_library_sources(mcux-sdk/devices/${MCUX_DEVICE}/drivers/fsl_clock.c)
if (${MCUX_DEVICE} MATCHES "LPC|MIMXRT6|MIMXRT5")
  zephyr_library_sources(mcux-sdk/devices/${MCUX_DEVICE}/drivers/fsl_power.c)
  zephyr_library_sources(mcux-sdk/devices/${MCUX_DEVICE}/drivers/fsl_reset.c)
endif()

# RT11xx SOC initialization file requires additional drivers, import them
if (${MCUX_DEVICE} MATCHES "MIMXRT11")
  zephyr_library_sources(mcux-sdk/devices/${MCUX_DEVICE}/drivers/fsl_romapi.c)
  zephyr_library_sources(mcux-sdk/devices/${MCUX_DEVICE}/drivers/fsl_pmu.c)
  zephyr_library_sources(mcux-sdk/devices/${MCUX_DEVICE}/drivers/fsl_dcdc.c)
  zephyr_library_sources(mcux-sdk/devices/${MCUX_DEVICE}/drivers/fsl_anatop_ai.c)
endif()

zephyr_library_sources_ifdef(CONFIG_HAS_MCUX_AUDIOMIX mcux-sdk/devices/${MCUX_DEVICE}/drivers/fsl_audiomix.c)

add_subdirectory(components)

add_subdirectory_ifdef(
  CONFIG_USB_DEVICE_DRIVER
  middleware/usb
  )

add_subdirectory_ifdef(
  CONFIG_IEEE802154_KW41Z
  middleware/wireless/framework_5.3.3
  )

#Include Entry cmake component
include(${CMAKE_CURRENT_LIST_DIR}/hal_nxp.cmake)
enable_language(C ASM)

zephyr_library_sources_ifdef(CONFIG_SOC_LPC54114_M4 mcux-sdk/devices/${MCUX_DEVICE}/gcc/startup_LPC54114_cm4.S)

zephyr_linker_sources(RWDATA quick_access_data.ld)
zephyr_linker_sources_ifdef(CONFIG_ARCH_HAS_RAMFUNC_SUPPORT
  RAMFUNC_SECTION
  quick_access_code.ld
)
