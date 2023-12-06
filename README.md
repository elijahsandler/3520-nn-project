# GeoGrapher

## Overview
This project contains a UI for the Matplot++ graphing library, and is specifically focused on plotting geographical data (hence the name "GeoGrapher", which I thought was funny). It loads data from a csv using the commata library. 

## External Libraries
- [Matplot++](https://github.com/alandefreitas/matplotplusplus "Matplot++")
  - Matplot++ requires [gnuplot](http://www.gnuplot.info/ "gnuplot"), which looks like a virus, but isn't
- [Commata](https://github.com/furfurylic/commata "Commata"), a header only library for reading CSVs
  - Requires C++17

## `get_weather.py` and `worldcities_temp.csv`
`get_weather.py` (and `get_weather.ipynb`) scrape data from the [OpenWeather API](https://openweathermap.org/api "OpenWeather API") to get the median high and low temperatures for each city for the past year, as well as the total rainfall over the same period. These data points can be used in `main.cpp`. 

`get_weather.py` can be executed at the command line as "python get_weather.py _yourOpenWeatherAPIkey_". If no API key is provided, then mine will be used, which is why this project won't stay public for long. If you have Python installed, you might get a series of error messages telling you about libraries used in `get_weather.py`, but you should be able to install most of them with "pip install _library_". If it doesn't work, it's probably because the API timed me (or you) out. If that happens, and your job is to assign a numerical value to my time and effort, please be kind. It works, I promise. 

The reason I don't execute `get_weather.py` with `<cstdlib>` in the C++ files (which I did, but removed it) is because the API is touchy and I really don't want to call it accidentally, or tempt people into calling it multiple times and getting themselves (or me) blocked. 

## using GeoGraphy
It's not hard. Open `main.cpp` and hit run, and as long as everything is installed correctly, then the UI will pop up, and off you go. 
