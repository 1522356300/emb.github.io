# 语言细节

### initialization list

初始列，仅在构造函数中才有此特性，其在函数体执行前执行，效率更高。

### 函数重载与默认值

在函数重载过程中，没有参数与所有参数都有默认值，这两种场景是不可以同时存在。

### static

### typedef typename

### 常量成员函数

若成员函数不修改类的数据，则应该在小括号与大括号之间加上const。否则当类对象定义成const时无法访问改成成员函数：不可变对象执行可能改变对象的方法，视为非法，编译告警。

## 传参：value, reference

在C++中应该所有参数都养成穿应用的编程习惯。(当然实际上数据很小时，传引用此时并没有效率优势)
complex& operator +=(const complex&);

## 友元函数 friends

相同class的哥哥object互为友元