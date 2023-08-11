import os
textFilePath = "/home/mshaker/Alx_Repos/alx-low_level_programming/0x01-variables_if_else_while/"+input("Enter your value: ")

# create new text file code
with open(textFilePath, 'w') as f:
    Lines =["#include <stdio.h>\n","/**\n","* main - Entry point\n"," * Return: Always 0 (Success)\n","*/\n","int main(void)\n","{\n","return (0);\n","}\n"]
    f.writelines(Lines)
#os.system("chmod u+x "+textFilePath)
f.close()
print("New text file created successfully!")