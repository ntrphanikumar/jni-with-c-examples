# Instructions for runnning in MAC OS

# Create Libs directly silently which will be java.library.path while running jar
mkdir -p libs

# Creates jni header file for learn.jni.math.calc.Calculator 
# Will be generated once and saved. Hence commented
#javac -h src/main/c src/main/java/learn/jni/math/calc/Calculator.java

# Builing mymath library in mac
gcc -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/darwin" -dynamiclib -o libs/libmymath.dylib src/main/c/Calculator.c

#Building calculator.jar 
./gradlew clean build

# Running calculator jar.
# Command is now part of run.sh. Hence commented here
#java -jar -Djava.library.path=libs build/libs/calculator.jar