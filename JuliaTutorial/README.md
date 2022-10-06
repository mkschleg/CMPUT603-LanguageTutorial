# Julia Tutorial for CMPUT 603

The goal of this tutorial is to get you set up to use Julia as a research language, set up a reproducible environment, take advantage of Revise and other packages.


## Installation

To install Julia, go to [julialang.org](https://julialang.org) and install the latest version of julia. You can also use a package called [Juliaup](https://github.com/JuliaLang/juliaup) to manage julia versions.

## Running the example

In the JuliaTutorial 

```bash
cd path/to/JuliaTutorial
julia --project
julia>> import Pkg; Pkg.instantiate() # this installs all the packages in the Project.toml and Manifest.toml files. Only do if you need to install the packages.
julia>> includet("main.jl")
julia>> main()
```

## Some Notes

While sharing many similarities with Python, Julia is not a scripting language and it is unwise to use it as such. Instead, you should focus on building large programs with Julia with parts split out into functions and packages. If you have a long running process, compiling often will make your program run faster, but if you want a script that runs for a short amount of time Python is a better language to use.
