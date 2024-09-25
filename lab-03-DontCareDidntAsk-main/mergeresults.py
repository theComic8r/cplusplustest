import json, sys

n = len(sys.argv)
result = {'visibility': 'visible',
     'stdout_visibility': 'visible'}

for i in range(1, n):
    score = 0
    try:
        with open(sys.argv[i], 'r') as file:
            data = json.load(file)
            
            if 'tests' in result:
                if 'tests' in data:
                    result['tests'] += data['tests']
                    for test in data['tests']:
                        score += test['score']
                else:
                    score += data['score']
            else:
                if 'tests' in data:
                    result['tests'] = data['tests']
                    for test in data['tests']:
                        score += test['score']
                else:
                    score += data['score']
    except FileNotFoundError:
        print("\nError evaluating code.\n")
    if 'score' in result:
        result['score'] += score
    else:
        result['score'] = score

with open("results.json", 'wt') as f:
    json.dump(result, f)