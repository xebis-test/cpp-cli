# cpp-cli

Hello world C++ CLI application.

## Features

- [CI](.github/workflows/ci.yaml) on PR or merge to the `main` branch
- [Release](.github/workflows/release.yaml) on merge to the `main` branch

## Development and Testing

Install prerequisites:

```shell
sudo apt update
sudo apt install build-essential g++ cmake git
```

Build:

```shell
mkdir build
pushd build
cmake ..
make
```

Use:

```shell
./cpp-cli
```

Tests:

```shell
./test_unit
../tests/test_integration.sh
```

Cleanup:

```shell
popd
rm -rf build/
```

## Distribution

Docker build and run:

```shell
sudo docker run --rm $(sudo docker build -q .)
```
