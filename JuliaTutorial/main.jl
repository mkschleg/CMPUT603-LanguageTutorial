

import JuliaTutorial: MyStruct, get_id, get_name, change_name!

function main()

    ms = MyStruct(10, "Default Name")
    println("Name: $(ms.name), ID: $(ms.ID)")
    println("Insert new name and hit return!")
    new_name = readline()
    println("Name Change: " * change_name!(ms, new_name))
    
end


