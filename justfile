run cmd:
    ./build/bibliotheque {{cmd}}

start cmd: build
    just run {{cmd}}

test: build
    just run test

build:
    cmake -S. -Bbuild
    cmake --build build