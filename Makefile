CXX = g++
CXXFLAGS = -Wall -std=c++11 -Iinclude

SRC_DIR = src
BIN_DIR = bin
TEST_DIR = test

# App principal
APP_MAIN = $(SRC_DIR)/main.cpp
APP_SRC = $(SRC_DIR)/bib.cpp
APP_TARGET = $(BIN_DIR)/app.exe

# Testes
TEST_MAIN = $(TEST_DIR)/main.cpp
TEST_TARGET = $(BIN_DIR)/testeRegressivo.exe

all: $(APP_TARGET)

$(APP_TARGET): $(APP_MAIN) $(APP_SRC)
	$(CXX) $(CXXFLAGS) -o $@ $^

test: $(TEST_TARGET)

$(TEST_TARGET): $(TEST_MAIN) $(APP_SRC)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(BIN_DIR)/*.exe $(BIN_DIR)/*.o
