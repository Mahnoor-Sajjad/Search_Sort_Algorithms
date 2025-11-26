@echo off

REM
if not exist build mkdir build
g++ src/main.cpp src/Sorting.cpp src/Searching.cpp -I include -o build/search_and_sort

REM
if exist release rmdir /s /q release
mkdir release

REM
copy build\search_and_sort.exe release\
copy README.md release\
copy LICENSE release\
copy RELEASE_NOTES.md release\

REM
powershell Compress-Archive -Path release\* -DestinationPath search_and_sort_release.zip
echo Build and packaging completed successfully.
pause
