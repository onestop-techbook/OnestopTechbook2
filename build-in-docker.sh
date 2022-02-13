#!/bin/bash

# コマンド手打ちで作業したい時は以下の通り /book に pwd がマウントされます
# docker run -i -t -v $(pwd):/book vvakame/review /bin/bash

docker run -t --rm -v $(pwd):/book vvakame/review /bin/bash -ci "cd /book && yarn && yarn build"
# .review/techbook2.pdf に出力されます。
