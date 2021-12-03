run cmd:
    ./bin/app {{cmd}}

start cmd: build
    just run {{cmd}}

test: build
    just run test

build:
    mkdir bin
    c++ -g main.cpp vendor/*.cpp vendor/*.hpp lib/*.cpp -I. -o bin/app.exe