coala
=====

[![Linux Build Status](https://travis-ci.org/statgenlmu/coala.png?branch=master)](https://travis-ci.org/statgenlmu/coala) 
[![Windows Build status](https://ci.appveyor.com/api/projects/status/uoduv0q64ddnqfva/branch/master?svg=true)](https://ci.appveyor.com/project/paulstaab/coala-02w83/branch/master)
[![Coverage Status](https://coveralls.io/repos/statgenlmu/coala/badge.svg?branch=master)](https://coveralls.io/r/statgenlmu/coala)
[![CRAN Status](http://www.r-pkg.org/badges/version/coala)](http://cran.r-project.org/web/packages/coala)

Coala is an R package that allows to simulate biological sequences according
to a given model of evolution.  Rather than conduction the simulations itself,
it allows to call a number of efficient simulators based on
[Coalescent Theory](https://en.wikipedia.org/wiki/Coalescent_theory). 
It can also incorporate the program _seq-gen_ to simulate finite site mutation 
models. It directly imports the simulation results into R, and allows to
calculate additional summary statistics from the results.

__Coala is currently in an early version. Please make sure to always
check the simulation commands that it executes before drawing conclusions
from the simulation results.__


Installation
------------

The package can be installed from CRAN using

```R
install.packages("coala")
```

The development version can be installed via

```R
devtools::install_github('statgenlmu/coala')
```


Usage
-----
Coala comes with a [vignette](http://rpubs.com/paulstaab/coala-introduction)
that explains the packages concepts and is a good place to start.
The [ABC vignette](http://rpubs.com/paulstaab/coala-abc) gives an example
how coala can be used to conduct the simulations for an Approximate Bayesian
Computation analysis.


Bugs
----
If you encounter problems while using _coala_, please 
[file a bug report](https://github.com/statgenlmu/coala/issues) or mail to
`develop (at) paulstaab.de`.



Supported Simulators
--------------------
The package supports the coalescent simulators _ms_, _scrm_ and _msms_.
All simulators can be combined with _seq-gen_ to simulate finite sites m
utation models. The programs _ms_, _msms_ and _seq-gen_ must be installed 
manually on the system, while the R version of _scrm_ is used automatically.



