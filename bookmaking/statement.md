# Description
カトーくんは、趣味が高じて薄い本を作ろうとしている。
順調に作成が進み、これまでに合計で $x$ ページが完成した。

販売会が近づいてきたのでカトーくんは印刷会社に製本を頼んだが、大人の事情により、ページ数を4の倍数にして欲しいと言われた。
すなわち、$x$ が4の倍数であれば、このままで薄い本は完成となるが、そうでなければ、4の倍数になるようにページを追加する必要がある。
なお、手間暇かけて作り上げたページ数を削ることは、もったいないのでやりたくない。

既にカトーくんが作成したページ数が与えられるので、印刷のために新たに作るページ数の最小値を出力せよ。

# Constraints
* $1 \leq x \leq 1000$

# Input
1つの入力ファイルは複数のテストケースからなる。

入力ファイルの最初の1行目にはカトーくんが作りたい薄い本の種類数（テストケースの個数） $T$ が記される $(1 \leq T \leq 1000)$。

2行目以降には、 $T$ 個のテストケースが記述されており、各テストケースは次の形式で表される。
```
$x$
```

# Output
各テストケースに対して、カトーくんが追加で作成するページの最小数を1行ずつ出力せよ。

# Sample Input
```
3
10
7
4
```

# Sample Output
```
2
1
0
```
