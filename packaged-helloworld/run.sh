mkdir -p classes
javac -d ./classes/ ./src/java/learn/jni/HelloJNI.java
cd classes
javah -jni learn.jni.HelloJNI 
mv learn_jni_HelloJNI.h ../src/c
gcc -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/darwin" -dynamiclib -o libhello.dylib ../src/c/HelloJNI.c
pwd
java learn.jni.HelloJNI

