# КТ8. Система контроля версий. Автоматизация действий

В проекте настроены Git-хуки pre-commit и post-commit.

## Pre-commit
Перед созданием коммита выводит последние три изменения:
git log -3 --oneline

## Post-commit
После создания коммита:
1. Выводит последние три изменения.
2. Запускает статический анализ C++ кода через cppcheck.

## Установка хуков
chmod +x hooks/pre-commit hooks/post-commit
cp hooks/pre-commit .git/hooks/pre-commit
cp hooks/post-commit .git/hooks/post-commit

## Ручная проверка кода
cppcheck --enable=all --suppress=missingIncludeSystem src/

## Проверка автоматизации
После установки хуков выполнить git commit.
Оба скрипта запустятся автоматически.
