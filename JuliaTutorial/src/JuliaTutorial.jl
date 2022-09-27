module JuliaTutorial

greet() = print("Hello World!")


mutable struct MyStruct
    ID::Int
    name::String
end

get_id(ms::MyStruct) = ms.ID
get_name(ms::MyStruct) = ms.name

function change_name!(ms::MyStruct, new_name)
    old_name = ms.name
    ms.name = new_name
    return old_name * " -> " * new_name
end

end # module JuliaTutorial
