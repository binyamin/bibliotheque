run cmd:
    ./app {{cmd}}

start cmd: build
    just run {{cmd}}

test: build
    just run test

build:
    c++ -g main.cpp vendor/*.cpp vendor/*.hpp lib/*.cpp -I. -o app.exe