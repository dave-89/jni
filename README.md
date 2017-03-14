# jni
simple demo for jni

### How to
From *src/main/java* execute

```
javac davide/jni/HalloFromC.java
```

Then execute 

```
javah -jni davide.jni.HalloFromC
```

which generates the header file *davide_jni_HalloFromC.h*.

In a C file, implement the methods automatically generated:

```c
JNIEXPORT jint JNICALL Java_davide_jni_HalloFromC_sum
  (JNIEnv * env, jobject obj, jint a, jint b) {
  return a+b;
  }
```

Using the *Makefile*, compile the C file into a shared library.

Export the environment variable:

```shell
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:.
```