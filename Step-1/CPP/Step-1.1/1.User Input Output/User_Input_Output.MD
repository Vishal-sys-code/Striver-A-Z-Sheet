# **USER INPUT AND OUTPUT (C++)**

The user input and output in cpp has its own stye of syntax.

### Header File

Header file of the CPP  program is used to declare variables, functions or any other entities that can be accessed by multiple source files.
To include the header file, you need to use `#include <iostream>` at the beginning of your program. This is a preprocessor command that tells the compiler to insert code from another source file before.

The standard header file for using in Online Judge is : ```#include <bits/stdc++.h>```

```#include <bits/stdc++.h>``` includes all the libraries that are required to use in C++ programming. It's a good practice. This includes all the necessary libraries to use in C++. 

### Skeleton of CPP

```
#include <bits/stdc++.h>
using namespace std;

int main(){
    // write the code
    return 0;
}
```

### `using namespace std`

By adding using namespace std; at the beginning of your program, you’re telling the compiler that you want to use all the names from the std namespace without explicitly specifying std:: each time. This can make your code cleaner and more concise.

### Taking user input using `cin`
One of the fundamental aspects of programming is taking input from the user. In C++, this is achieved with the help of the cin stream, which allows you to receive input from the user via the terminal or console.

To accept multiple inputs, we can simply use the >> operator with cin for each variable we want to receive input for.

Example:
```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    cout << a << " " << b << " " << endl;
    return 0;
}
```