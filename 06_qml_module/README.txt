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
qt_add_qml_module(helloqmlapp
    URI 		helloqml
    QML_FILES 	Main.qml
    RESOURCES 	images/icon.png
)
Qt 6 이후로는 CMake를 통한 리소스 관리 방식이 권장되고 있습니다.
Qt 6.5.3 이상에서는 더이상 resources.qrc 파일이 사용되지 않는다.
그리고, qrc 경로방식을 사용하지 않아도 파일경로로 리소스를 사용가능하다
*** 