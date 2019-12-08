aux_source_directory(. EXECUTABLE)
foreach(SOURCE_FILE_NAME ${EXECUTABLE})
    get_filename_component(EXECUTABLE_NAME ${SOURCE_FILE_NAME} NAME_WE)
    message(${EXECUTABLE_NAME})
    add_executable(${EXECUTABLE_NAME} ${SOURCE_FILE_NAME})
    target_link_libraries(
            ${EXECUTABLE_NAME}
            LeetCode
    )
endforeach()