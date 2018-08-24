mkdir -p libs
gcc -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/darwin" -dynamiclib -o libs/libmymath.dylib src/main/c/Calculator.c
./gradlew clean build
#java -jar -Djava.library.path=libs build/libs/calculator.jar