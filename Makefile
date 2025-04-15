# Компилятор
CXX = g++

# Флаги компиляции
CXXFLAGS = -Wall -Wextra -I./headers

# Путь к исходникам
SRC_DIR = src

# Исходные файлы
SRCS = $(wildcard $(SRC_DIR)/*.cpp)

# Цель
TARGET = out

# Цвета
GREEN = \033[0;32m
NC = \033[0m

# Сборка по умолчанию
all: $(TARGET)

# Компиляция основного приложения
$(TARGET):
	@echo "🔧 Компиляция основного приложения..."
	$(CXX) $(CXXFLAGS) $(SRCS) -o $@
	@echo "$(GREEN)✅ Собрано: $(TARGET)$(NC)"

# Очистка
clean:
	@echo "🧹 Очистка..."
	@rm -f $(TARGET)
	@echo "$(GREEN)✅ Очистка завершена$(NC)"

.PHONY: all clean
