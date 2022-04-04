from csv import list_dialects
from genericpath import isdir, isfile
from os import listdir, path, walk

file_path = ""
web_repo_path = "https://github.com/KhalidGad/hackerrank-problem-solving/tree/main/"
working_directory = path.dirname(path.realpath(__file__))

# cnt = 0

# for directory in listdir(working_directory):
#     if isdir(directory) and directory[0] != '.':
#         print(directory)
#         for sub_dir in listdir(directory):
#             d = directory+"/"+sub_dir
#             print(sub_dir)
#             for file in listdir(d):
#                 cnt += 1;
#                 print(directory+"/"+sub_dir+"/"+file)
# print(cnt)

with open('test.md', 'w') as f:
    for directory in listdir(working_directory):
        if isdir(directory) and directory[0] != '.':
            f.write("## " + directory)
            f.write('\n')
            f.write('\n')
            for sub_dir in listdir(directory):
                f.write("### {}".format(sub_dir))
                f.write('\n')
                f.write(
                    '| Problem Statement | Solution | Difficulty | Score |\n| :--------------- | :------ | :--------: | :---: |')
                f.write('\n')

                sub_dir_path = directory+"/"+sub_dir
                for file_solution in listdir(sub_dir_path):
                    file_name = file_solution.split(
                        '.')[0].replace('-', ' ').title()
                    sol_path = web_repo_path+directory+'/'+sub_dir+'/'+file_solution
                    f.write("|{}|[{}]({})| ... | ... |\n".format(
                        file_name, file_solution, sol_path))
                f.write('\n\n')
            f.write('<br>\n\n')
