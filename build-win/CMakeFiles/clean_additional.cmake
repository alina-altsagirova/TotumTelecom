# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles/TotumTelecom_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/TotumTelecom_autogen.dir/ParseCache.txt"
  "TotumTelecom_autogen"
  )
endif()
