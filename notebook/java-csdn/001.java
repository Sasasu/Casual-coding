.java ->编译->.class -> JVM ->虚拟机启动解释器转换机器码
JRE (Java Runtime Evnironment)  
JVM (Java Virtual Machine)
JDK (Java Development Kit )
JRE属于JDE 

Java 环境变量
 JAVA_HOME
    表示java安装目录
 CLASSPATH
    指示编译器和JVM去那个目录找.class文件
 PATH
    指示操作系统去哪个路径找java，一般PATH配置为/bin目录
Java严格区分大小写
test.java
class HelloWordl{ 				//类的定义 class <类的名字>类名一般首字母大写
    public static void main(String args[]){	//定义主函数（方法）
        System.out.println("Hello World");	//
    }						//所有java代码必须写在类中
}						//
对于Java HelloWorld程序 
	javac test.java 生成HelloWorld.class 
	java HelloWorld 输出运行结果
 
