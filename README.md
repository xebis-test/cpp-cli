# cpp-cli

Hello world C++ CLI application.

## Features

- [CI](.github/workflows/ci.yaml)
- [Semantic Release](.github/workflows/semantic-release.yaml) on merge to the `main` branch

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
