![[Pasted image 20250212133254.png]]
# Question 1
## Cost Variance
$$
\begin{aligned}
CV &= EV - AC \\
CV &= 20,000 - 25,000 \\
CV &= -5,000
\end{aligned}
$$
The cost variance is $-5,000$, which is considered over budget.
## Schedule Variance
$$
\begin{aligned}
SV &= EV - PV \\
SV &= 20,000 - 22,000 \\
SV &= -2,000
\end{aligned}
$$
The schedule variance is $-2,000$ which is considered behind schedule. 
## CPI
$$
\begin{aligned}
CPI &= \frac{EV}{AC} \\
CPI &= \frac{20,000}{25,000} \\
CPI &= 0.8 \\
\end{aligned}
$$

The CPI is 0.8, which is considered inefficient. 
## SPI
$$
\begin{aligned}
SPI &= \frac{EV}{PV} \\
SPI &= \frac{20,000}{22,000} \\
SPI &\approx 0.91
\end{aligned}
$$
The SPI is 0.91, which indicates that the project is behind schedule. 
# Question 2
This project is both behind schedule and overbudget. 
# Question 3
$$
\begin{aligned}
EAC &= \frac{BAC}{CPI} \\
EAC &= \frac{120,000}{0.8} \\
EAC & = 150,000
\end{aligned}
$$
The EAC is $150,000. This indicates that the project will be overbudget at completion. 
# Question 4
Since the project was originally estimated to last one year, the equation to determine how much longer the project will take is as follows:
$$
\begin{aligned}
Estimated Duration &= \frac{12}{SPI} \\
Estimated Duration &= \frac{12}{0.91} \\
Estimated Duration &\approx 13.19
\end{aligned}
$$
This indicates that the project will take an extra 13.19 months. 
# Question 5
I used randomly generated values to simulate an actual chart, with the maximum values being the values provided in the question.

AC and EV only go to December 2024 since the original planned duration of the project was a year. 
```chart
type: line 
labels: [Jan '24, Feb'24, Mar '24, Apr '24, May '24, Jun '24, Jul '24, Aug '24, Sep '24, Oct '24, Nov '24, Dec '24, Jan '25, Feb '25]
series:
	- title: Planned Value
	  data: [1000, 1671, 2093, 2920, 5021, 7045, 8427, 10572, 11499, 13810, 14221, 17052, 19562, 22000]

	- title: Actual Cost
	  data: [1000, 2057, 2564, 4827, 6193, 7062, 9730, 11797, 13863, 14434, 15253, 17629]
	- title: Earned Value
	  data: [1000, 2203, 3848, 4082, 5652, 7623, 8093, 9129, 10375, 12704, 12911, 17516]
```
