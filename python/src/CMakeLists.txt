#-------------------------------------------------------------------------------------------------------------------
# Add The module
#-------------------------------------------------------------------------------------------------------------------
find_package(xtl               REQUIRED)
find_package(xtensor           REQUIRED)
find_package(xtensor-python    CONFIG  REQUIRED)



set(PY_MOD_NAME hl2d )
set(PY_MOD_LIB_NAME _${PY_MOD_NAME})


# add the python library
pybind11_add_module(${PY_MOD_LIB_NAME}  main.cpp)

# `link` against pybind11 interface module
target_link_libraries(${PY_MOD_LIB_NAME} PUBLIC  
    ${INTERFACE_LIB_NAME}
    pybind11::module)

# include directories for non-modern cmake
set(PY_INCLUDE_DIRS 
    ${PYTHON_NUMPY_INCLUDE_DIR}
)
target_include_directories(${PY_MOD_LIB_NAME} PUBLIC  ${PY_INCLUDE_DIRS})

install(TARGETS ${PY_MOD_LIB_NAME} 
    DESTINATION ${PYTHON_MODULE_INSTALL_DIR}/${PY_MOD_NAME}/)