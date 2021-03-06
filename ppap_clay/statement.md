# Description
```
P≠NP予想（P≠NPよそう、英: P is not NP）は、計算複雑性理論（計算量理論）におけるクラスPとクラスNPが等しくないという予想である。
P対NP問題（PたいNPもんだい、英: P versus NP）と呼ばれることもある。
理論計算機科学と現代数学上の未解決問題の中でも最も重要な問題の一つであり、
2000年にクレイ数学研究所のミレニアム懸賞問題の一つとして、この問題に対して100万ドルの懸賞金がかけられた。
Wikipedia「P≠NP予想」より
```

文字`A`、`N`、`P`からなる文字列$S$が与えられる。
与えられた文字列$S$が、文字列`PPAP`から`P` = `NP`の置換を使って生成可能ならば`YES`、不可能ならば`NO`と出力せよ。  
`P` = `NP`の置換とは、`P`を`NP`に置き換える、または、`NP`を`P`に置き換えることである。  
例えば、文字列`NPPAP`は、`PPAP`先頭の`P`を`NP`に置換することで、生成可能である。

# Constraints
 - $1 \leq |S| \leq 1000$  
 - $S$は`A`、`N`、`P`のみからなる。

# Input
1つの入力ファイルは複数のテストケースからなる。  

入力ファイルの最初の1行目にはテストケースの個数$T$が記される$(1 \leq T \leq 50)$。

2行目以降には、$T$個のテストケースが記述されており、各テストケースは次の形式で表される。
```
$S$
```
# Output
各テストケースに対して、`YES`または`NO`を1行ずつ出力せよ。

# Sample Input
```
3
NPPAP
PPNAP
NNPNNPAP
```
# Sample Output
```
YES
NO
YES
```
