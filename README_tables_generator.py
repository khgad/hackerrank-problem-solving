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
#         for subdomain in listdir(directory):
#             d = directory+"/"+subdomain
#             print(subdomain)
#             for file in listdir(d):
#                 cnt += 1;
#                 print(directory+"/"+subdomain+"/"+file)
# print(cnt)

with open('test.md', 'w') as f:
    for directory in listdir(working_directory):
        if isdir(directory) and directory[0] != '.':
            f.write("## " + directory)
            f.write('\n')
            f.write('\n')
            for subdomain in listdir(directory):
                f.write("### {}".format(subdomain))
                f.write('\n')
                f.write(
                    '| Problem Statement | Solution | Difficulty | Score |\n| :--------------- | :------ | :--------: | :---: |')
                f.write('\n')

                sub_dir = directory+"/"+subdomain
                for file_solution in listdir(sub_dir):
                    file_name = file_solution.split(
                        '.')[0].replace('-', ' ').title()
                    sol_path = web_repo_path+directory+'/'+subdomain+'/'+file_solution
                    f.write("|{}|[{}]({})| ... | ... |\n".format(
                        file_name, file_solution, sol_path))
                f.write('\n\n')
            f.write('<br>\n\n')
