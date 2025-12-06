FROM ubuntu:22.04 AS builder

RUN apt update && apt install -y build-essential cmake

WORKDIR /app

COPY CMakeLists.txt ./
COPY src ./src
COPY tests ./tests

RUN mkdir build && cd build && \
    cmake .. && \
    make

FROM ubuntu:22.04

WORKDIR /app

COPY --from=builder /app/build/cpp-cli /usr/local/bin/cpp-cli

ENTRYPOINT ["cpp-cli"]
