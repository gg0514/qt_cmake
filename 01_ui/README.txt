1. cmake PATH 설정
   C:\Qt\Tools\CMake_64\bin

2. Ninja PATH 설정
   C:\Qt\Tools\Ninja

3. 컴파일러/링커 PATH 설정
   C:\Qt\Tools\mingw1120_64\bin

4. Qt Dll PATH 설정
   C:\Qt\6.5.3\mingw_64\bin

5. 빌드
   cmake -G Ninja -S . -B build
   cmake --build build

6. 실행
   .\build\uiapp.exe

**
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
위의 설정에 주목하라!!
Gui, Widgets 컴포넌트로 대체됨을 주목하라
**

 
