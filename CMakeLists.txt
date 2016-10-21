cmake_minimum_required(VERSION 3.3)
project(c_code)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    dataType/getMinAndMaxVal.c
    dataType/intToFloat.c
    dataType/intToShort.c
    demo/changeVal.c
    demo/error.c
    demo/fgets.c
    demo/getArrVal.c
    demo/getPoint.c
    demo/getValByPoint.c
    demo/HelloWorld.c
    demo/scanf.c
    demo/strArgFun.c
    demo/strstr.c
    file/file.c
    highFunc/arr_func.c
    highFunc/find.c
    highFunc/find1.c
    highFunc/func.c
    highFunc/print_ints.c
    highFunc/qsort.c
    list/create.c
    list/createByMalloc.c
    list/createByMalloc2.c
    make/shareCode/db.c
    make/shareCode/encrypt.c
    make/shareCode/encrypt.h
    make/shareCode/redis.c
    make/compileError.c
    make/defineFunction.c
    make/defineFunctionc.c
    make/demo.h
    Process/coffe.c
    Process/file.c
    Process/fork.c
    Process/getIp.c
    Process/test_coffe.c
    simpleTool/filterSimpleTool.c
    simpleTool/simpleTool.c
    statement/for.c
    statement/if.c
    statement/switch.c
    statement/while.c
    staticLibrary/myHeader/checksum.h
    staticLibrary/myHeader/encrypt.h
    staticLibrary/myHeader/hfcal.h
    staticLibrary/treadmill/elliptical.c
    staticLibrary/treadmill/hfcal.c
    staticLibrary/checksum.c
    staticLibrary/encrypt.c
    staticLibrary/test.c
    struct/fish.c
    struct/fishAndFood.c
    struct/typedef.c
    struct/upStruct.c
    struct/upStruct1.c
    union/enum.c
    union/union.c
    union/unionAndStruct.c
    unistd/unistd.c
    encrypt.c)

add_executable(c_code ${SOURCE_FILES})