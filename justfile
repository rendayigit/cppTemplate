build:
  ./scripts/build.sh

clean:
  ./scripts/clean.sh

run:
  ./scripts/run.sh

coverage:
  ./scripts/coverage.sh

documentation:
  ./scripts/documentation.sh

all: build
cov: coverage
doc: documentation
