# Automatically generated by scripts/boost/generate-ports.ps1

vcpkg_from_github(
    OUT_SOURCE_PATH SOURCE_PATH
    REPO boostorg/callable_traits
    REF boost-1.79.0
    SHA512 1b937aa3ee79cf2d835a87922748fb891b6ffc5400d29fe6956114c840b90ab1cc4001076c8f7d63801d01c517dbbf0b0698b473041f5665a507e28a2c797c75
    HEAD_REF master
)

include(${CURRENT_INSTALLED_DIR}/share/boost-vcpkg-helpers/boost-modular-headers.cmake)
boost_modular_headers(SOURCE_PATH ${SOURCE_PATH})