```mermaid
gantt
	title PcPartPicker Lite
	dateFormat YYYY-MM-DD
	axisFormat %b %d

	section Frontend
	Mock-up :active, f1, 3-12-2024, 7d
	Create UI in React :f2, after f1, 7d
	Link UI to Backend: f3, after f2, 14d

	section Backend/DB
	Create ER Diagram :done, b1, 3-3-2024, 7d
	Create DB in SQLite :b2, after b1, 7d
	Write backend functions :b3, after b2, 14d
```
