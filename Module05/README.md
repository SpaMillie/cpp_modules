THE THINGS IVE LEARNED

- using
```#pragma once```
instead of the 'usual' include guards (#ifndef, etc.)
PROS
- easier to write
- less prone to errors
- faster compilation!
CONS
- not always supported

Include the full header in the corresponding .cpp file because now the compiler is working in the translation unit (not in the header) and has access to the full class definition when it needs to know more.
by doing this you: 'limit the exposure of the implementation details to the compilation unit, not to the header file' which is good because:
- the dependency chain is much lighter because the compiler doesn't go through the whole class header file whenever it is included in other files = faster compilation
- the amount of implementation details exposed to other files is minimised (the files only need to know the class's interface) ie the internals of the classes are hidden from the rest of the codebase

you include the full definition in the header file only when it is absolutely needed:
- if you're defining a member function that returns the object of the HeaderFile class
- if you have an HeaderFile class object as a member of the class (if they're a pointer or a reference, then no need)
- when you're using it for template instantiation


-using
```const char* what() noexcept; 
VS
const char* what() throw();```
write this