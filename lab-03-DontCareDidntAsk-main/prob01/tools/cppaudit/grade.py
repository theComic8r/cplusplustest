
from gggg import *

a = Assignment(12, 4)
s = State(a)

horizontal_rule()

s.reject_if_file_changed('main.cc',
                           '7394591c14f2657d9592ff75107655bda676ba904f52cc48b59812a6f7763f77')

s.reject_if_file_changed('tools/settings/unittest.cc',
                         'b75c9abc813ca7948ee1ce40919659f97afd8aea4b76b4b82f7b07f63b3dd0ae')

s.gtest_run('tools/output/unittest')
s.gtest_suite_test('RobotTest', 10)

s.clang_tidy_run("main.cc", "main", ["robot.cc","robotutils/robotclicklistener.cc"])
s.clang_tidy_check(1)

s.clang_format_run(["main.cc", "robot.cc", "robot.h"])
s.clang_format_check(1)

s.summarize()