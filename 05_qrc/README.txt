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
Qt 6.5.3 이상에서는 .qrc 파일을 직접 작성하는 대신 qt_add_qml_module의 RESOURCES 옵션을 사용하는 것이 더 권장되는 방식입니다. Qt의 최신 버전에서는 이 방법이 더 간단하고, 프로젝트 설정과 빌드 관리가 통합되기 때문에, 가능하다면 이 방식을 사용하는 것이 좋습니다.
Qt 6.5.3 이상에서는 더이상 resources.qrc 파일이 사용되지 않는다.
*** 