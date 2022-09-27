import TutorialLib.MyClass as MyClass

def main():
    mc = MyClass.MyClass(10, "Default Name")
    print("Name:", mc.name, ", ID:", mc.ID)
    new_name = input("Insert new name and hit return!\n")
    print("Name Change:", mc.change_name(new_name))

if __name__ == "__main__":
    main()
