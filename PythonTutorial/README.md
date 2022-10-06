# Python tutorial


## Installation

I use pyenv and virtual env to manage my python installations and environments locally. 

```bash
pyenv virtualenv 3.9.10 PythonTutorial
pyenv local PythonTutorial
pip install numpy
```

This creates a local environment, makes the local directory use the PythonTutorial environment, and then installs numpy into that environment.

To create a list of packages used by the current environment run the following command:

```bash
pip freeze > requirements.txt
```

And then you can install packages from the requirements

```bash
pip install -r requirements.txt
```


## Running the example.

You can run the example either through the command line directly

```bash
python main.py
```

or by importing and running the main function

```bash
python
>>> import main
>>> main.main()
```



