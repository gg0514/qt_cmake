1. cmake PATH 설정
   C:\Qt\Tools\CMake_64\bin

2. Ninja PATH 설정
   C:\Qt\Tools\Ninja

3. 컴파일러/링커 PATH 설정
   C:\Qt\Tools\mingw1120_64\bin

4. Qt Dll PATH 설정
   C:\Qt\6.5.3\mingw_64\bin
 
5. 빌드
   cmake --preset debug
   cmake --build --preset debug

6. 실행
   .\build\debug\helloqmlapp.exe


***
    const QUrl url("qrc:/qt/qml/helloqml/main.qml");
    engine.load(url); 
    이부분을 아직 잘 모르겠음
    https://www.qt.io/blog/whats-new-for-qml-modules-in-6.5 참고
*** 