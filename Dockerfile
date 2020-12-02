FROM ubuntu:18.04

RUN apt-get update && apt-get install -y \
    gcc \
    g++ \
    build-essential \
    libstdc++-8-dev 