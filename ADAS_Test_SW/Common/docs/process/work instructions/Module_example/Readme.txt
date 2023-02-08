In each module (xxx) folder we should find the following files:

- xxx.mdl: model of the module
- xxx_ut.mdl: test harness for unit testing
- xxx_cal.m: calibration file
- xxx_var.m: data dictionary
- start_xxx.m: script that launches the test harness model
- Bxxx_outputs.m: module output bus description file

In each module (xxx) folder we should find the following sub-folders:
- Test_Case: contains the Excel spreadsheets that define the test cases
- Test_Results: contains the results of the test cases (updated automatically when test cases are run)
- MINT Report: contains the latest MINT report

In order to run the unit tests on your module:
1) launch the test harness model: type the command line "start_xxx"

2) launch the unit test: type the command line "run_ut xxx_ut"