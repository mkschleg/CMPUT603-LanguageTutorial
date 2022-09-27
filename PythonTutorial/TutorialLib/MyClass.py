class MyClass:
    name = ""
    ID = -1

    def __init__(self, ID, name):
        self.ID = ID
        self.name = name

    def get_id(self):
        return self.ID

    def get_name(self):
        return self.name

    def change_name(self, new_name):
        old_name = self.name
        self.name = new_name
        return old_name + " -> " + new_name
